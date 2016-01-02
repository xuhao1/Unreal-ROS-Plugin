#include "Unreal_ROS.h"
#include "ROSActorPublisher.h"

UPhysicsPublisherComponent::UPhysicsPublisherComponent(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	bWantsBeginPlay = true;
	PrimaryComponentTick.bCanEverTick = true;
}

void UPhysicsPublisherComponent::BeginPlay()
{
	auto comp = GetOwner()->GetRootComponent();
	if (static_cast<UPrimitiveComponent*>(comp) != nullptr)
	{
		UE_LOG(LogTemp, Log, TEXT("FUCK-ROOT"));
		root = static_cast<UPrimitiveComponent*>(comp);
		inst = &root->BodyInstance;
	}
	else {
		UE_LOG(LogTemp, Log, TEXT("NO-FUCK-ROOT"));
	}

	delegate =  new FCalculateCustomPhysics;
	delegate->BindLambda([&](float t, FBodyInstance* f)
	{
		PhysTotalTime += t;
		FTransform trans = f->GetUnrealWorldTransform(false);
		pose_ros.position.x = trans.GetLocation().X;
		pose_ros.position.y = trans.GetLocation().Y;
		pose_ros.position.z = trans.GetLocation().Z;
		pose_ros.orientation.w = trans.GetRotation().W;
		pose_ros.orientation.x = trans.GetRotation().X;
		pose_ros.orientation.y = trans.GetRotation().Y;
		pose_ros.orientation.z = trans.GetRotation().Z;

		FVector Vel = f->GetUnrealWorldVelocity();
		FVector AngularVel = f->GetUnrealWorldAngularVelocity();
		twist_ros.linear.x = Vel.X;
		twist_ros.linear.y = Vel.Y;
		twist_ros.linear.z = Vel.Z;
		twist_ros.angular.x = AngularVel.X;
		twist_ros.angular.y = AngularVel.Y;
		twist_ros.angular.z = AngularVel.Z;

		//physx::PxRigidDynamic* dynamic = f->GetPxRigidDynamic();

		float DelaT = 1.0 / (float)UpdateFrequency;
		if (PhysTotalTime - LastReported > DelaT)
		{
			LastReported = PhysTotalTime;
			if (EnablePose && PoseAd)
			{
				PoseAd->Publish(pose_ros);
			}
			if (EnableTwist && TwistAd)
			{
				TwistAd->Publish(twist_ros);
			}
		}
	});
}

void UPhysicsPublisherComponent::TickComponent(float DeltaTime,enum ELevelTick TickType,FActorComponentTickFunction * ThisTickFunction)
{
	if (root == nullptr)
	{
		UE_LOG(LogTemp, Log, TEXT("No root "));
		return;
	}
	//Find if simulate phys
	if (!inst->bSimulatePhysics)
	{
		UE_LOG(LogTemp, Log, TEXT("Not simulate Phys "));
		return;
	}
	if (EnablePose && PoseAd == nullptr)
	{
		UE_LOG(LogTemp, Log, TEXT("Create Pose Ad "));
		PoseAd = U_geometry_msgs_PoseAdvertiser::Create_Pose_Advertiser(ActorName +"/pose");
	}
	if (EnableTwist && TwistAd == nullptr)
	{
		TwistAd = U_geometry_msgs_TwistAdvertiser::Create_Twist_Advertiser(ActorName + "/twist");
	}
	if (EnableAccel && AccelAd == nullptr)
	{
		AccelAd = U_geometry_msgs_AccelAdvertiser::Create_Accel_Advertiser(ActorName+"/accel");
	}

	inst->AddCustomPhysics(*delegate);

}