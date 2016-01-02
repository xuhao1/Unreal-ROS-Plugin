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



