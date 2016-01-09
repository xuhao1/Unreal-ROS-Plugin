#pragma once

#include "Unreal_ROS.h"
#include "TopicTemplate.h"
#include "ros_msg_test.h"
#include "ROSServoActors.generated.h"

/*
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
*/

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class UROSPoseDriver : public USceneComponent
{
    GENERATED_UCLASS_BODY()
public:
    void TickComponent(float DeltaTime, enum ELevelTick TickType, FActorComponentTickFunction * ThisTickFunction) override;
    void BeginPlay() override;
    UPrimitiveComponent * root;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere,Category="Robot OS")
    FString SubscribeTopic = "";
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere,Category="Constrain")
    bool LockX = false;

    UPROPERTY(BlueprintReadWrite, EditAnywhere,Category="Constrain")
    bool LockY = false;

    UPROPERTY(BlueprintReadWrite, EditAnywhere,Category="Constrain")
    bool LockZ = false;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere,Category="Coordinate")
    bool UsingNED = false;
    
    UFUNCTION()
    void OnPoseData(F_nav_msgs_Odometry odom);

    U_nav_msgs_OdometrySubscriber * PoseSub = nullptr;
    
    FBodyInstance * bd = nullptr;
    FCalculateCustomPhysics * delegate = nullptr;
	FVector loc,vel,AngularVelocity;
	FQuat rot;
	int count_pawn = 0;
	float d_time = 0;
    F_nav_msgs_Odometry odom;
    ~UROSPoseDriver()
    {
        if (PoseSub!=nullptr)
            PoseSub = nullptr;
    }
	int max_seq = 0;
};
