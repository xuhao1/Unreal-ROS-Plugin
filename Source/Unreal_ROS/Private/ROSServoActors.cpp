#include "Unreal_ROS.h"
#include "ROSServoActors.h"
/*

UROSMotorConstrainComponent::UROSMotorConstrainComponent(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	bWantsBeginPlay = true;
	PrimaryComponentTick.bCanEverTick = true;
	ConstrainComponent = CreateDefaultSubobject<UPhysicsConstraintComponent>(TEXT("PhysicsConstraint"));
}

void UROSMotorConstrainComponent::BeginPlay()
{
	UObjectPropertyBase* ObjProp = FindField<UObjectPropertyBase>(GetOwner()->GetClass(),ConstrainComponent->ComponentName2.ComponentName);
	if (ObjProp != nullptr)
	{
		rotor = Cast<UPrimitiveComponent>(ObjProp->GetObjectPropertyValue_InContainer(GetOwner()));
	}
	else {
		UE_LOG(LogTemp, Log, TEXT("NO rotor!!"));
	}

}

void UROSMotorConstrainComponent::TickComponent(float DeltaTime, enum ELevelTick TickType, FActorComponentTickFunction * ThisTickFunction)
{
	if (rotor != nullptr)
	{
		FTransform trans = this->GetRelativeTransform();
		FQuat rot = trans.GetRotation();
		FVector speec = rot.RotateVector(FVector(speed, 0, 0));
		rotor->GetBodyInstance()->SetAngularVelocity(speec,false);
	}
}
*/
UROSPoseDriver::UROSPoseDriver(const FObjectInitializer& ObjectInitializer)
: Super(ObjectInitializer)
{
    bWantsBeginPlay = true;
    PrimaryComponentTick.bCanEverTick = true;
 }

void UROSPoseDriver::BeginPlay()
{
    root = GetOwner()->GetRootPrimitiveComponent();
    
    if (root == nullptr)
    {
        UE_LOG(LogTemp, Log, TEXT("NO root!!"));
        return;
    }
    root->SetSimulatePhysics(true);
	root->SetEnableGravity(false);
	bd = root->GetBodyInstance();
	rot.W = 1;
	delegate = new FCalculateCustomPhysics;
	delegate->BindLambda([&](float t, FBodyInstance* f){
			if (count_pawn == 0)
			{
			//f->SetLinearVelocity(vel, false);
			//f->SetAngularVelocity(AngularVelocity, false);
			f->SetBodyTransform(
				FTransform(rot,loc)
				, true
				);
			}
			count_pawn++;
			d_time = t;
			});
}

void UROSPoseDriver::TickComponent(float DeltaTime, enum ELevelTick TickType, FActorComponentTickFunction * ThisTickFunction)
{
	count_pawn = 0;
	if (root != nullptr )
	{
		if (PoseSub == nullptr)
		{
			PoseSub =  U_nav_msgs_OdometrySubscriber::Create_Odometry_Subscriber(SubscribeTopic);
			PoseSub->OnOdometryData.AddDynamic(this,&UROSPoseDriver::OnPoseData);
		}
		bd->AddCustomPhysics(*delegate);
	}
}
void UROSPoseDriver::OnPoseData(F_nav_msgs_Odometry odom)
{
	if (odom.header.seq < max_seq)
		return;

	max_seq = odom.header.seq;
	this->odom = odom;
	F_geometry_msgs_Pose & pose_ros = odom.pose.pose;
	loc.X = pose_ros.position.x * 100;
	loc.Y = pose_ros.position.y * 100;
	if (UsingNED)
		loc.Z = - pose_ros.position.z * 100;
    UE_LOG(LogTemp,Log,TEXT("%d %f %f %f - quat :%f %f %f %f"),max_seq,loc.X,loc.Y,loc.Z,pose_ros.orientation.x,
           pose_ros.orientation.y,
           pose_ros.orientation.z,
           pose_ros.orientation.w);
	rot = FQuat(
			pose_ros.orientation.x,
			pose_ros.orientation.y,
			pose_ros.orientation.z,
			pose_ros.orientation.w
			);
}
