#pragma once
#include "Unreal_Ros.h"
#include "TopicTemplate.h"
#include "ros_msg_test.h"
#include "ROSActorPublisher.generated.h"

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class UPhysicsPublisherComponent : public USceneComponent
{
	
	GENERATED_UCLASS_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Robot OS")
		int32 UpdateFrequency = 30;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Robot OS")
		bool Enable = true;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Robot OS")
		bool EnablePose = true;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Robot OS")
		bool EnableTwist = true;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Robot OS")
		bool EnableAccel = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Robot OS")
		FString ActorName = "test-name";
	U_geometry_msgs_PoseAdvertiser * PoseAd = nullptr;
	U_geometry_msgs_TwistAdvertiser * TwistAd = nullptr;
	U_geometry_msgs_AccelAdvertiser * AccelAd = nullptr;
	
	void TickComponent(float DeltaTime, enum ELevelTick TickType, FActorComponentTickFunction * ThisTickFunction) override;
	void BeginPlay() override;
	UPrimitiveComponent * root = nullptr;
	FBodyInstance * inst = nullptr;
	FCalculateCustomPhysics * delegate = nullptr;
	F_geometry_msgs_Pose pose_ros;
	F_geometry_msgs_Twist twist_ros;
	F_geometry_msgs_Accel accel_ros;
	int phys_tick = 0;
	float PhysTotalTime = 0;
	float LastReported = 0;
};