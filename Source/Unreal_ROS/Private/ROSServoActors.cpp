#include "Unreal_ROS.h"
#include "ROSServoActors.h"

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
    }
    pose_ros.orientation.w = 1;
}

void UROSPoseDriver::TickComponent(float DeltaTime, enum ELevelTick TickType, FActorComponentTickFunction * ThisTickFunction)
{
    if (root != nullptr )
    {
        if (PoseSub == nullptr)
        {
            PoseSub =  U_geometry_msgs_PoseSubscriber::Create_Pose_Subscriber(SubscribeTopic);
            PoseSub->OnPoseData.AddDynamic(this,&UROSPoseDriver::OnPoseData);
        }
        
        FVector loc;
        loc.X = pose_ros.position.x;
        loc.Y = pose_ros.position.y;
        if (UsingNED)
            loc.Z = - pose_ros.position.z;
        FQuat rot(
                  pose_ros.orientation.x,
                  pose_ros.orientation.y,
                  pose_ros.orientation.z,
                  pose_ros.orientation.w
        );
        FTransform trans(rot,loc);
        root->GetBodyInstance()->SetBodyTransform(trans,true);
    }
}
void UROSPoseDriver::OnPoseData(F_geometry_msgs_Pose pose_ros)
{
    this->pose_ros = pose_ros;
    UE_LOG(LogTemp,Log,TEXT("new pose come"));
}
