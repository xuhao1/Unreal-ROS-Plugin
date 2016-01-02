#pragma once

#include "Unreal_ROS.h"
#include "TopicTemplate.h"
#include "ros_msg_test.h"
#include "ROSServoActors.generated.h"

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class UROSMotorConstrainComponent : public USceneComponent
{
	GENERATED_UCLASS_BODY()
public:
	void TickComponent(float DeltaTime, enum ELevelTick TickType, FActorComponentTickFunction * ThisTickFunction) override;
	void BeginPlay() override;
	UPROPERTY(BlueprintReadWrite, EditAnywhere,Category="MOTOR")
	UPhysicsConstraintComponent * ConstrainComponent;
	UPrimitiveComponent * rotor;

	UPROPERTY(BlueprintReadWrite, EditAnywhere,Category="MOTOR")
	float speed = 0;

};
