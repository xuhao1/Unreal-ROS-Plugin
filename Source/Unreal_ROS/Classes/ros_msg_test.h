#pragma once

#include "Unreal_ROS.h"
#include "TopicTemplate.h"
#include <string>
#include <rapidjson/document.h>
#include <rapidjson/rapidjson.h>
#include "ros_msg_test.generated.h"


struct  F_trajectory_msgs_JointTrajectoryPoint;

struct  F_std_msgs_Int16;

struct  F_dji_sdk_MissionStatusFollowme;

struct  F_std_msgs_UInt16;

struct  F_std_msgs_UInt32;

struct  F_dji_sdk_MissionEventWpAction;

struct  F_std_msgs_Bool;

struct  F_std_msgs_UInt64;

struct  F_dji_sdk_MissionStatusHotpoint;

struct  F_geometry_msgs_Point;

struct  F_std_msgs_Byte;

struct  F_dji_sdk_MissionEventWpReach;

struct  F_std_msgs_Header;

struct  F_actionlib_msgs_GoalStatusArray;

struct  F_dji_sdk_LocalPosition;

struct  F_sensor_msgs_Illuminance;

struct  F_nav_msgs_GridCells;

struct  F_sensor_msgs_Joy;

struct  F_dji_sdk_RCChannels;

struct  F_dji_sdk_Acceleration;

struct  F_geometry_msgs_Point32;

struct  F_trajectory_msgs_MultiDOFJointTrajectory;

struct  F_std_msgs_Float32;

struct  F_dji_sdk_TimeStamp;

struct  F_sensor_msgs_NavSatStatus;

struct  F_dji_sdk_MissionFollowmeTask;

struct  F_dji_sdk_MissionStatusOther;

struct  F_geometry_msgs_PointStamped;

struct  F_sensor_msgs_Range;

struct  F_geometry_msgs_Quaternion;

struct  F_geometry_msgs_Pose2D;

struct  F_std_msgs_Int8;

struct  F_sensor_msgs_LaserEcho;

struct  F_std_msgs_String;

struct  F_geometry_msgs_Polygon;

struct  F_sensor_msgs_JointState;

struct  F_sensor_msgs_RelativeHumidity;

struct  F_dji_sdk_MissionWaypointTask;

struct  F_std_msgs_Empty;

struct  F_nav_msgs_Path;

struct  F_std_msgs_Int64;

struct  F_sensor_msgs_PointCloud2;

struct  F_std_msgs_MultiArrayDimension;

struct  F_geometry_msgs_QuaternionStamped;

struct  F_std_msgs_Int32;

struct  F_sensor_msgs_Image;

struct  F_geometry_msgs_Pose;

struct  F_nav_msgs_MapMetaData;

struct  F_nav_msgs_OccupancyGrid;

struct  F_geometry_msgs_PoseStamped;

struct  F_sensor_msgs_JoyFeedback;

struct  F_trajectory_msgs_JointTrajectory;

struct  F_dji_sdk_MissionFollowmeTarget;

struct  F_dji_sdk_WaypointList;

struct  F_dji_sdk_MissionPushInfo;

struct  F_std_msgs_MultiArrayLayout;

struct  F_std_msgs_Float32MultiArray;

struct  F_std_msgs_ByteMultiArray;

struct  F_std_msgs_UInt8MultiArray;

struct  F_std_msgs_Int32MultiArray;

struct  F_std_msgs_UInt32MultiArray;

struct  F_std_msgs_Float64MultiArray;

struct  F_sensor_msgs_NavSatFix;

struct  F_std_msgs_Float64;

struct  F_sensor_msgs_FluidPressure;

struct  F_std_msgs_Int64MultiArray;

struct  F_sensor_msgs_PointField;

struct  F_sensor_msgs_ChannelFloat32;

struct  F_std_msgs_ColorRGBA;

struct  F_sensor_msgs_Temperature;

struct  F_dji_sdk_MissionWaypointAction;

struct  F_dji_sdk_Compass;

struct  F_sensor_msgs_MultiDOFJointState;

struct  F_geometry_msgs_Vector3;

struct  F_geometry_msgs_Inertia;

struct  F_geometry_msgs_Vector3Stamped;

struct  F_geometry_msgs_InertiaStamped;

struct  F_geometry_msgs_Accel;

struct  F_geometry_msgs_AccelStamped;

struct  F_geometry_msgs_Twist;

struct  F_geometry_msgs_TwistStamped;

struct  F_sensor_msgs_Imu;

struct  F_geometry_msgs_TwistWithCovariance;

struct  F_geometry_msgs_Transform;

struct  F_trajectory_msgs_MultiDOFJointTrajectoryPoint;

struct  F_geometry_msgs_TransformStamped;

struct  F_geometry_msgs_TwistWithCovarianceStamped;

struct  F_geometry_msgs_AccelWithCovariance;

struct  F_std_msgs_Int8MultiArray;

struct  F_geometry_msgs_PoseArray;

struct  F_std_msgs_Time;

struct  F_dji_sdk_TransparentTransmissionData;

struct  F_dji_sdk_MissionStatusWaypoint;

struct  F_sensor_msgs_PointCloud;

struct  F_std_msgs_UInt8;

struct  F_sensor_msgs_CompressedImage;

struct  F_sensor_msgs_JoyFeedbackArray;

struct  F_dji_sdk_Waypoint;

struct  F_dji_sdk_Gimbal;

struct  F_dji_sdk_MissionEventWpUpload;

struct  F_std_msgs_Char;

struct  F_geometry_msgs_PoseWithCovariance;

struct  F_nav_msgs_Odometry;

struct  F_geometry_msgs_PoseWithCovarianceStamped;

struct  F_dji_sdk_MissionHotpointTask;

struct  F_std_msgs_Int16MultiArray;

struct  F_dji_sdk_PowerStatus;

struct  F_std_msgs_UInt64MultiArray;

struct  F_std_msgs_UInt16MultiArray;

struct  F_sensor_msgs_RegionOfInterest;

struct  F_sensor_msgs_CameraInfo;

struct  F_stereo_msgs_DisparityImage;

struct  F_sensor_msgs_LaserScan;

struct  F_dji_sdk_GlobalPosition;

struct  F_sensor_msgs_TimeReference;

struct  F_geometry_msgs_PolygonStamped;

struct  F_std_msgs_Duration;

struct  F_dji_sdk_MissionWaypoint;

struct  F_geometry_msgs_Wrench;

struct  F_geometry_msgs_WrenchStamped;

struct  F_geometry_msgs_AccelWithCovarianceStamped;

struct  F_dji_sdk_AttitudeQuaternion;

struct  F_actionlib_msgs_GoalID;

struct  F_actionlib_msgs_GoalStatus;

struct  F_sensor_msgs_MultiEchoLaserScan;

struct  F_dji_sdk_FlightControlInfo;

struct  F_sensor_msgs_MagneticField;

struct  F_dji_sdk_Velocity;











USTRUCT()
struct F_trajectory_msgs_JointTrajectoryPoint
{

	GENERATED_USTRUCT_BODY()

    
		
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Robot OS")
		int32 time_from_start;
		
    

	rapidjson::Value Serialization(rapidjson::Document & d);
	void Unserialization(rapidjson::Value & v);

	std::string TypeName = "trajectory_msgs/JointTrajectoryPoint";

};


UCLASS()
class U_trajectory_msgs_JointTrajectoryPointAdvertiser : public UAdvertiser
{

	GENERATED_UCLASS_BODY()

public:
	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	static U_trajectory_msgs_JointTrajectoryPointAdvertiser * Create_JointTrajectoryPoint_Advertiser(FString TopicName);

	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	void Publish(F_trajectory_msgs_JointTrajectoryPoint Data);
};

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(F_trajectory_msgs_JointTrajectoryPointDelegate, F_trajectory_msgs_JointTrajectoryPoint, Data);

UCLASS()
class U_trajectory_msgs_JointTrajectoryPointSubscriber : public USubscriber
{
	GENERATED_UCLASS_BODY()
public:
	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	static U_trajectory_msgs_JointTrajectoryPointSubscriber * Create_JointTrajectoryPoint_Subscriber(FString _TopicName);

	virtual void ProccessMsg(rapidjson::Value & obj);

	UPROPERTY(BlueprintAssignable, Category = "Robot OS")
	F_trajectory_msgs_JointTrajectoryPointDelegate OnJointTrajectoryPointData;

	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	virtual void OnRecieve(F_trajectory_msgs_JointTrajectoryPoint Data);
};









USTRUCT()
struct F_std_msgs_Int16
{

	GENERATED_USTRUCT_BODY()

    
		
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Robot OS")
		int32 data;
		
    

	rapidjson::Value Serialization(rapidjson::Document & d);
	void Unserialization(rapidjson::Value & v);

	std::string TypeName = "std_msgs/Int16";

};


UCLASS()
class U_std_msgs_Int16Advertiser : public UAdvertiser
{

	GENERATED_UCLASS_BODY()

public:
	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	static U_std_msgs_Int16Advertiser * Create_Int16_Advertiser(FString TopicName);

	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	void Publish(F_std_msgs_Int16 Data);
};

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(F_std_msgs_Int16Delegate, F_std_msgs_Int16, Data);

UCLASS()
class U_std_msgs_Int16Subscriber : public USubscriber
{
	GENERATED_UCLASS_BODY()
public:
	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	static U_std_msgs_Int16Subscriber * Create_Int16_Subscriber(FString _TopicName);

	virtual void ProccessMsg(rapidjson::Value & obj);

	UPROPERTY(BlueprintAssignable, Category = "Robot OS")
	F_std_msgs_Int16Delegate OnInt16Data;

	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	virtual void OnRecieve(F_std_msgs_Int16 Data);
};









USTRUCT()
struct F_dji_sdk_MissionStatusFollowme
{

	GENERATED_USTRUCT_BODY()

    
		
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Robot OS")
		uint8 mission_type;
		
    

	rapidjson::Value Serialization(rapidjson::Document & d);
	void Unserialization(rapidjson::Value & v);

	std::string TypeName = "dji_sdk/MissionStatusFollowme";

};


UCLASS()
class U_dji_sdk_MissionStatusFollowmeAdvertiser : public UAdvertiser
{

	GENERATED_UCLASS_BODY()

public:
	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	static U_dji_sdk_MissionStatusFollowmeAdvertiser * Create_MissionStatusFollowme_Advertiser(FString TopicName);

	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	void Publish(F_dji_sdk_MissionStatusFollowme Data);
};

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(F_dji_sdk_MissionStatusFollowmeDelegate, F_dji_sdk_MissionStatusFollowme, Data);

UCLASS()
class U_dji_sdk_MissionStatusFollowmeSubscriber : public USubscriber
{
	GENERATED_UCLASS_BODY()
public:
	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	static U_dji_sdk_MissionStatusFollowmeSubscriber * Create_MissionStatusFollowme_Subscriber(FString _TopicName);

	virtual void ProccessMsg(rapidjson::Value & obj);

	UPROPERTY(BlueprintAssignable, Category = "Robot OS")
	F_dji_sdk_MissionStatusFollowmeDelegate OnMissionStatusFollowmeData;

	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	virtual void OnRecieve(F_dji_sdk_MissionStatusFollowme Data);
};









USTRUCT()
struct F_std_msgs_UInt16
{

	GENERATED_USTRUCT_BODY()

    
		
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Robot OS")
		int32 data;
		
    

	rapidjson::Value Serialization(rapidjson::Document & d);
	void Unserialization(rapidjson::Value & v);

	std::string TypeName = "std_msgs/UInt16";

};


UCLASS()
class U_std_msgs_UInt16Advertiser : public UAdvertiser
{

	GENERATED_UCLASS_BODY()

public:
	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	static U_std_msgs_UInt16Advertiser * Create_UInt16_Advertiser(FString TopicName);

	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	void Publish(F_std_msgs_UInt16 Data);
};

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(F_std_msgs_UInt16Delegate, F_std_msgs_UInt16, Data);

UCLASS()
class U_std_msgs_UInt16Subscriber : public USubscriber
{
	GENERATED_UCLASS_BODY()
public:
	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	static U_std_msgs_UInt16Subscriber * Create_UInt16_Subscriber(FString _TopicName);

	virtual void ProccessMsg(rapidjson::Value & obj);

	UPROPERTY(BlueprintAssignable, Category = "Robot OS")
	F_std_msgs_UInt16Delegate OnUInt16Data;

	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	virtual void OnRecieve(F_std_msgs_UInt16 Data);
};









USTRUCT()
struct F_std_msgs_UInt32
{

	GENERATED_USTRUCT_BODY()

    
		
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Robot OS")
		int32 data;
		
    

	rapidjson::Value Serialization(rapidjson::Document & d);
	void Unserialization(rapidjson::Value & v);

	std::string TypeName = "std_msgs/UInt32";

};


UCLASS()
class U_std_msgs_UInt32Advertiser : public UAdvertiser
{

	GENERATED_UCLASS_BODY()

public:
	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	static U_std_msgs_UInt32Advertiser * Create_UInt32_Advertiser(FString TopicName);

	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	void Publish(F_std_msgs_UInt32 Data);
};

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(F_std_msgs_UInt32Delegate, F_std_msgs_UInt32, Data);

UCLASS()
class U_std_msgs_UInt32Subscriber : public USubscriber
{
	GENERATED_UCLASS_BODY()
public:
	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	static U_std_msgs_UInt32Subscriber * Create_UInt32_Subscriber(FString _TopicName);

	virtual void ProccessMsg(rapidjson::Value & obj);

	UPROPERTY(BlueprintAssignable, Category = "Robot OS")
	F_std_msgs_UInt32Delegate OnUInt32Data;

	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	virtual void OnRecieve(F_std_msgs_UInt32 Data);
};









USTRUCT()
struct F_dji_sdk_MissionEventWpAction
{

	GENERATED_USTRUCT_BODY()

    
		
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Robot OS")
		uint8 incident_type;
		
    
		
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Robot OS")
		uint8 repeat;
		
    

	rapidjson::Value Serialization(rapidjson::Document & d);
	void Unserialization(rapidjson::Value & v);

	std::string TypeName = "dji_sdk/MissionEventWpAction";

};


UCLASS()
class U_dji_sdk_MissionEventWpActionAdvertiser : public UAdvertiser
{

	GENERATED_UCLASS_BODY()

public:
	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	static U_dji_sdk_MissionEventWpActionAdvertiser * Create_MissionEventWpAction_Advertiser(FString TopicName);

	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	void Publish(F_dji_sdk_MissionEventWpAction Data);
};

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(F_dji_sdk_MissionEventWpActionDelegate, F_dji_sdk_MissionEventWpAction, Data);

UCLASS()
class U_dji_sdk_MissionEventWpActionSubscriber : public USubscriber
{
	GENERATED_UCLASS_BODY()
public:
	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	static U_dji_sdk_MissionEventWpActionSubscriber * Create_MissionEventWpAction_Subscriber(FString _TopicName);

	virtual void ProccessMsg(rapidjson::Value & obj);

	UPROPERTY(BlueprintAssignable, Category = "Robot OS")
	F_dji_sdk_MissionEventWpActionDelegate OnMissionEventWpActionData;

	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	virtual void OnRecieve(F_dji_sdk_MissionEventWpAction Data);
};









USTRUCT()
struct F_std_msgs_Bool
{

	GENERATED_USTRUCT_BODY()

    
		
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Robot OS")
		bool data;
		
    

	rapidjson::Value Serialization(rapidjson::Document & d);
	void Unserialization(rapidjson::Value & v);

	std::string TypeName = "std_msgs/Bool";

};


UCLASS()
class U_std_msgs_BoolAdvertiser : public UAdvertiser
{

	GENERATED_UCLASS_BODY()

public:
	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	static U_std_msgs_BoolAdvertiser * Create_Bool_Advertiser(FString TopicName);

	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	void Publish(F_std_msgs_Bool Data);
};

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(F_std_msgs_BoolDelegate, F_std_msgs_Bool, Data);

UCLASS()
class U_std_msgs_BoolSubscriber : public USubscriber
{
	GENERATED_UCLASS_BODY()
public:
	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	static U_std_msgs_BoolSubscriber * Create_Bool_Subscriber(FString _TopicName);

	virtual void ProccessMsg(rapidjson::Value & obj);

	UPROPERTY(BlueprintAssignable, Category = "Robot OS")
	F_std_msgs_BoolDelegate OnBoolData;

	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	virtual void OnRecieve(F_std_msgs_Bool Data);
};









USTRUCT()
struct F_std_msgs_UInt64
{

	GENERATED_USTRUCT_BODY()

    
		
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Robot OS")
		int32 data;
		
    

	rapidjson::Value Serialization(rapidjson::Document & d);
	void Unserialization(rapidjson::Value & v);

	std::string TypeName = "std_msgs/UInt64";

};


UCLASS()
class U_std_msgs_UInt64Advertiser : public UAdvertiser
{

	GENERATED_UCLASS_BODY()

public:
	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	static U_std_msgs_UInt64Advertiser * Create_UInt64_Advertiser(FString TopicName);

	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	void Publish(F_std_msgs_UInt64 Data);
};

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(F_std_msgs_UInt64Delegate, F_std_msgs_UInt64, Data);

UCLASS()
class U_std_msgs_UInt64Subscriber : public USubscriber
{
	GENERATED_UCLASS_BODY()
public:
	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	static U_std_msgs_UInt64Subscriber * Create_UInt64_Subscriber(FString _TopicName);

	virtual void ProccessMsg(rapidjson::Value & obj);

	UPROPERTY(BlueprintAssignable, Category = "Robot OS")
	F_std_msgs_UInt64Delegate OnUInt64Data;

	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	virtual void OnRecieve(F_std_msgs_UInt64 Data);
};









USTRUCT()
struct F_dji_sdk_MissionStatusHotpoint
{

	GENERATED_USTRUCT_BODY()

    
		
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Robot OS")
		uint8 mission_type;
		
    
		
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Robot OS")
		uint8 mission_status;
		
    
		
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Robot OS")
		int32 hotpoint_radius;
		
    
		
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Robot OS")
		uint8 error_code;
		
    
		
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Robot OS")
		uint8 hotpoint_velocity;
		
    

	rapidjson::Value Serialization(rapidjson::Document & d);
	void Unserialization(rapidjson::Value & v);

	std::string TypeName = "dji_sdk/MissionStatusHotpoint";

};


UCLASS()
class U_dji_sdk_MissionStatusHotpointAdvertiser : public UAdvertiser
{

	GENERATED_UCLASS_BODY()

public:
	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	static U_dji_sdk_MissionStatusHotpointAdvertiser * Create_MissionStatusHotpoint_Advertiser(FString TopicName);

	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	void Publish(F_dji_sdk_MissionStatusHotpoint Data);
};

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(F_dji_sdk_MissionStatusHotpointDelegate, F_dji_sdk_MissionStatusHotpoint, Data);

UCLASS()
class U_dji_sdk_MissionStatusHotpointSubscriber : public USubscriber
{
	GENERATED_UCLASS_BODY()
public:
	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	static U_dji_sdk_MissionStatusHotpointSubscriber * Create_MissionStatusHotpoint_Subscriber(FString _TopicName);

	virtual void ProccessMsg(rapidjson::Value & obj);

	UPROPERTY(BlueprintAssignable, Category = "Robot OS")
	F_dji_sdk_MissionStatusHotpointDelegate OnMissionStatusHotpointData;

	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	virtual void OnRecieve(F_dji_sdk_MissionStatusHotpoint Data);
};









USTRUCT()
struct F_geometry_msgs_Point
{

	GENERATED_USTRUCT_BODY()

    
		
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Robot OS")
		float x;
		
    
		
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Robot OS")
		float y;
		
    
		
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Robot OS")
		float z;
		
    

	rapidjson::Value Serialization(rapidjson::Document & d);
	void Unserialization(rapidjson::Value & v);

	std::string TypeName = "geometry_msgs/Point";

};


UCLASS()
class U_geometry_msgs_PointAdvertiser : public UAdvertiser
{

	GENERATED_UCLASS_BODY()

public:
	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	static U_geometry_msgs_PointAdvertiser * Create_Point_Advertiser(FString TopicName);

	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	void Publish(F_geometry_msgs_Point Data);
};

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(F_geometry_msgs_PointDelegate, F_geometry_msgs_Point, Data);

UCLASS()
class U_geometry_msgs_PointSubscriber : public USubscriber
{
	GENERATED_UCLASS_BODY()
public:
	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	static U_geometry_msgs_PointSubscriber * Create_Point_Subscriber(FString _TopicName);

	virtual void ProccessMsg(rapidjson::Value & obj);

	UPROPERTY(BlueprintAssignable, Category = "Robot OS")
	F_geometry_msgs_PointDelegate OnPointData;

	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	virtual void OnRecieve(F_geometry_msgs_Point Data);
};









USTRUCT()
struct F_std_msgs_Byte
{

	GENERATED_USTRUCT_BODY()

    
		
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Robot OS")
		uint8 data;
		
    

	rapidjson::Value Serialization(rapidjson::Document & d);
	void Unserialization(rapidjson::Value & v);

	std::string TypeName = "std_msgs/Byte";

};


UCLASS()
class U_std_msgs_ByteAdvertiser : public UAdvertiser
{

	GENERATED_UCLASS_BODY()

public:
	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	static U_std_msgs_ByteAdvertiser * Create_Byte_Advertiser(FString TopicName);

	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	void Publish(F_std_msgs_Byte Data);
};

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(F_std_msgs_ByteDelegate, F_std_msgs_Byte, Data);

UCLASS()
class U_std_msgs_ByteSubscriber : public USubscriber
{
	GENERATED_UCLASS_BODY()
public:
	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	static U_std_msgs_ByteSubscriber * Create_Byte_Subscriber(FString _TopicName);

	virtual void ProccessMsg(rapidjson::Value & obj);

	UPROPERTY(BlueprintAssignable, Category = "Robot OS")
	F_std_msgs_ByteDelegate OnByteData;

	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	virtual void OnRecieve(F_std_msgs_Byte Data);
};









USTRUCT()
struct F_dji_sdk_MissionEventWpReach
{

	GENERATED_USTRUCT_BODY()

    
		
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Robot OS")
		uint8 incident_type;
		
    
		
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Robot OS")
		uint8 waypoint_index;
		
    
		
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Robot OS")
		uint8 current_status;
		
    

	rapidjson::Value Serialization(rapidjson::Document & d);
	void Unserialization(rapidjson::Value & v);

	std::string TypeName = "dji_sdk/MissionEventWpReach";

};


UCLASS()
class U_dji_sdk_MissionEventWpReachAdvertiser : public UAdvertiser
{

	GENERATED_UCLASS_BODY()

public:
	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	static U_dji_sdk_MissionEventWpReachAdvertiser * Create_MissionEventWpReach_Advertiser(FString TopicName);

	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	void Publish(F_dji_sdk_MissionEventWpReach Data);
};

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(F_dji_sdk_MissionEventWpReachDelegate, F_dji_sdk_MissionEventWpReach, Data);

UCLASS()
class U_dji_sdk_MissionEventWpReachSubscriber : public USubscriber
{
	GENERATED_UCLASS_BODY()
public:
	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	static U_dji_sdk_MissionEventWpReachSubscriber * Create_MissionEventWpReach_Subscriber(FString _TopicName);

	virtual void ProccessMsg(rapidjson::Value & obj);

	UPROPERTY(BlueprintAssignable, Category = "Robot OS")
	F_dji_sdk_MissionEventWpReachDelegate OnMissionEventWpReachData;

	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	virtual void OnRecieve(F_dji_sdk_MissionEventWpReach Data);
};









USTRUCT()
struct F_std_msgs_Header
{

	GENERATED_USTRUCT_BODY()

    
		
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Robot OS")
		int32 seq;
		
    
		
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Robot OS")
		int32 stamp;
		
    
		
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Robot OS")
		FString frame_id;
		
    

	rapidjson::Value Serialization(rapidjson::Document & d);
	void Unserialization(rapidjson::Value & v);

	std::string TypeName = "std_msgs/Header";

};


UCLASS()
class U_std_msgs_HeaderAdvertiser : public UAdvertiser
{

	GENERATED_UCLASS_BODY()

public:
	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	static U_std_msgs_HeaderAdvertiser * Create_Header_Advertiser(FString TopicName);

	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	void Publish(F_std_msgs_Header Data);
};

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(F_std_msgs_HeaderDelegate, F_std_msgs_Header, Data);

UCLASS()
class U_std_msgs_HeaderSubscriber : public USubscriber
{
	GENERATED_UCLASS_BODY()
public:
	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	static U_std_msgs_HeaderSubscriber * Create_Header_Subscriber(FString _TopicName);

	virtual void ProccessMsg(rapidjson::Value & obj);

	UPROPERTY(BlueprintAssignable, Category = "Robot OS")
	F_std_msgs_HeaderDelegate OnHeaderData;

	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	virtual void OnRecieve(F_std_msgs_Header Data);
};









USTRUCT()
struct F_actionlib_msgs_GoalStatusArray
{

	GENERATED_USTRUCT_BODY()

    
		
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Robot OS")
		F_std_msgs_Header header;
		
    

	rapidjson::Value Serialization(rapidjson::Document & d);
	void Unserialization(rapidjson::Value & v);

	std::string TypeName = "actionlib_msgs/GoalStatusArray";

};


UCLASS()
class U_actionlib_msgs_GoalStatusArrayAdvertiser : public UAdvertiser
{

	GENERATED_UCLASS_BODY()

public:
	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	static U_actionlib_msgs_GoalStatusArrayAdvertiser * Create_GoalStatusArray_Advertiser(FString TopicName);

	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	void Publish(F_actionlib_msgs_GoalStatusArray Data);
};

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(F_actionlib_msgs_GoalStatusArrayDelegate, F_actionlib_msgs_GoalStatusArray, Data);

UCLASS()
class U_actionlib_msgs_GoalStatusArraySubscriber : public USubscriber
{
	GENERATED_UCLASS_BODY()
public:
	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	static U_actionlib_msgs_GoalStatusArraySubscriber * Create_GoalStatusArray_Subscriber(FString _TopicName);

	virtual void ProccessMsg(rapidjson::Value & obj);

	UPROPERTY(BlueprintAssignable, Category = "Robot OS")
	F_actionlib_msgs_GoalStatusArrayDelegate OnGoalStatusArrayData;

	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	virtual void OnRecieve(F_actionlib_msgs_GoalStatusArray Data);
};









USTRUCT()
struct F_dji_sdk_LocalPosition
{

	GENERATED_USTRUCT_BODY()

    
		
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Robot OS")
		F_std_msgs_Header header;
		
    
		
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Robot OS")
		int32 ts;
		
    
		
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Robot OS")
		float x;
		
    
		
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Robot OS")
		float y;
		
    
		
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Robot OS")
		float z;
		
    

	rapidjson::Value Serialization(rapidjson::Document & d);
	void Unserialization(rapidjson::Value & v);

	std::string TypeName = "dji_sdk/LocalPosition";

};


UCLASS()
class U_dji_sdk_LocalPositionAdvertiser : public UAdvertiser
{

	GENERATED_UCLASS_BODY()

public:
	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	static U_dji_sdk_LocalPositionAdvertiser * Create_LocalPosition_Advertiser(FString TopicName);

	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	void Publish(F_dji_sdk_LocalPosition Data);
};

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(F_dji_sdk_LocalPositionDelegate, F_dji_sdk_LocalPosition, Data);

UCLASS()
class U_dji_sdk_LocalPositionSubscriber : public USubscriber
{
	GENERATED_UCLASS_BODY()
public:
	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	static U_dji_sdk_LocalPositionSubscriber * Create_LocalPosition_Subscriber(FString _TopicName);

	virtual void ProccessMsg(rapidjson::Value & obj);

	UPROPERTY(BlueprintAssignable, Category = "Robot OS")
	F_dji_sdk_LocalPositionDelegate OnLocalPositionData;

	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	virtual void OnRecieve(F_dji_sdk_LocalPosition Data);
};









USTRUCT()
struct F_sensor_msgs_Illuminance
{

	GENERATED_USTRUCT_BODY()

    
		
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Robot OS")
		F_std_msgs_Header header;
		
    
		
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Robot OS")
		float illuminance;
		
    
		
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Robot OS")
		float variance;
		
    

	rapidjson::Value Serialization(rapidjson::Document & d);
	void Unserialization(rapidjson::Value & v);

	std::string TypeName = "sensor_msgs/Illuminance";

};


UCLASS()
class U_sensor_msgs_IlluminanceAdvertiser : public UAdvertiser
{

	GENERATED_UCLASS_BODY()

public:
	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	static U_sensor_msgs_IlluminanceAdvertiser * Create_Illuminance_Advertiser(FString TopicName);

	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	void Publish(F_sensor_msgs_Illuminance Data);
};

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(F_sensor_msgs_IlluminanceDelegate, F_sensor_msgs_Illuminance, Data);

UCLASS()
class U_sensor_msgs_IlluminanceSubscriber : public USubscriber
{
	GENERATED_UCLASS_BODY()
public:
	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	static U_sensor_msgs_IlluminanceSubscriber * Create_Illuminance_Subscriber(FString _TopicName);

	virtual void ProccessMsg(rapidjson::Value & obj);

	UPROPERTY(BlueprintAssignable, Category = "Robot OS")
	F_sensor_msgs_IlluminanceDelegate OnIlluminanceData;

	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	virtual void OnRecieve(F_sensor_msgs_Illuminance Data);
};









USTRUCT()
struct F_nav_msgs_GridCells
{

	GENERATED_USTRUCT_BODY()

    
		
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Robot OS")
		F_std_msgs_Header header;
		
    
		
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Robot OS")
		float cell_width;
		
    
		
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Robot OS")
		float cell_height;
		
    

	rapidjson::Value Serialization(rapidjson::Document & d);
	void Unserialization(rapidjson::Value & v);

	std::string TypeName = "nav_msgs/GridCells";

};


UCLASS()
class U_nav_msgs_GridCellsAdvertiser : public UAdvertiser
{

	GENERATED_UCLASS_BODY()

public:
	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	static U_nav_msgs_GridCellsAdvertiser * Create_GridCells_Advertiser(FString TopicName);

	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	void Publish(F_nav_msgs_GridCells Data);
};

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(F_nav_msgs_GridCellsDelegate, F_nav_msgs_GridCells, Data);

UCLASS()
class U_nav_msgs_GridCellsSubscriber : public USubscriber
{
	GENERATED_UCLASS_BODY()
public:
	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	static U_nav_msgs_GridCellsSubscriber * Create_GridCells_Subscriber(FString _TopicName);

	virtual void ProccessMsg(rapidjson::Value & obj);

	UPROPERTY(BlueprintAssignable, Category = "Robot OS")
	F_nav_msgs_GridCellsDelegate OnGridCellsData;

	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	virtual void OnRecieve(F_nav_msgs_GridCells Data);
};









USTRUCT()
struct F_sensor_msgs_Joy
{

	GENERATED_USTRUCT_BODY()

    
		
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Robot OS")
		F_std_msgs_Header header;
		
    
		
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Robot OS")
		TArray<float> axes;
		
    
		
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Robot OS")
		TArray<int32> buttons;
		
    

	rapidjson::Value Serialization(rapidjson::Document & d);
	void Unserialization(rapidjson::Value & v);

	std::string TypeName = "sensor_msgs/Joy";

};


UCLASS()
class U_sensor_msgs_JoyAdvertiser : public UAdvertiser
{

	GENERATED_UCLASS_BODY()

public:
	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	static U_sensor_msgs_JoyAdvertiser * Create_Joy_Advertiser(FString TopicName);

	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	void Publish(F_sensor_msgs_Joy Data);
};

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(F_sensor_msgs_JoyDelegate, F_sensor_msgs_Joy, Data);

UCLASS()
class U_sensor_msgs_JoySubscriber : public USubscriber
{
	GENERATED_UCLASS_BODY()
public:
	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	static U_sensor_msgs_JoySubscriber * Create_Joy_Subscriber(FString _TopicName);

	virtual void ProccessMsg(rapidjson::Value & obj);

	UPROPERTY(BlueprintAssignable, Category = "Robot OS")
	F_sensor_msgs_JoyDelegate OnJoyData;

	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	virtual void OnRecieve(F_sensor_msgs_Joy Data);
};









USTRUCT()
struct F_dji_sdk_RCChannels
{

	GENERATED_USTRUCT_BODY()

    
		
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Robot OS")
		F_std_msgs_Header header;
		
    
		
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Robot OS")
		int32 ts;
		
    
		
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Robot OS")
		float roll;
		
    
		
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Robot OS")
		float pitch;
		
    
		
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Robot OS")
		float yaw;
		
    
		
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Robot OS")
		float throttle;
		
    
		
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Robot OS")
		float mode;
		
    
		
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Robot OS")
		float gear;
		
    

	rapidjson::Value Serialization(rapidjson::Document & d);
	void Unserialization(rapidjson::Value & v);

	std::string TypeName = "dji_sdk/RCChannels";

};


UCLASS()
class U_dji_sdk_RCChannelsAdvertiser : public UAdvertiser
{

	GENERATED_UCLASS_BODY()

public:
	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	static U_dji_sdk_RCChannelsAdvertiser * Create_RCChannels_Advertiser(FString TopicName);

	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	void Publish(F_dji_sdk_RCChannels Data);
};

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(F_dji_sdk_RCChannelsDelegate, F_dji_sdk_RCChannels, Data);

UCLASS()
class U_dji_sdk_RCChannelsSubscriber : public USubscriber
{
	GENERATED_UCLASS_BODY()
public:
	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	static U_dji_sdk_RCChannelsSubscriber * Create_RCChannels_Subscriber(FString _TopicName);

	virtual void ProccessMsg(rapidjson::Value & obj);

	UPROPERTY(BlueprintAssignable, Category = "Robot OS")
	F_dji_sdk_RCChannelsDelegate OnRCChannelsData;

	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	virtual void OnRecieve(F_dji_sdk_RCChannels Data);
};









USTRUCT()
struct F_dji_sdk_Acceleration
{

	GENERATED_USTRUCT_BODY()

    
		
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Robot OS")
		F_std_msgs_Header header;
		
    
		
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Robot OS")
		int32 ts;
		
    
		
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Robot OS")
		float ax;
		
    
		
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Robot OS")
		float ay;
		
    
		
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Robot OS")
		float az;
		
    

	rapidjson::Value Serialization(rapidjson::Document & d);
	void Unserialization(rapidjson::Value & v);

	std::string TypeName = "dji_sdk/Acceleration";

};


UCLASS()
class U_dji_sdk_AccelerationAdvertiser : public UAdvertiser
{

	GENERATED_UCLASS_BODY()

public:
	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	static U_dji_sdk_AccelerationAdvertiser * Create_Acceleration_Advertiser(FString TopicName);

	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	void Publish(F_dji_sdk_Acceleration Data);
};

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(F_dji_sdk_AccelerationDelegate, F_dji_sdk_Acceleration, Data);

UCLASS()
class U_dji_sdk_AccelerationSubscriber : public USubscriber
{
	GENERATED_UCLASS_BODY()
public:
	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	static U_dji_sdk_AccelerationSubscriber * Create_Acceleration_Subscriber(FString _TopicName);

	virtual void ProccessMsg(rapidjson::Value & obj);

	UPROPERTY(BlueprintAssignable, Category = "Robot OS")
	F_dji_sdk_AccelerationDelegate OnAccelerationData;

	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	virtual void OnRecieve(F_dji_sdk_Acceleration Data);
};









USTRUCT()
struct F_geometry_msgs_Point32
{

	GENERATED_USTRUCT_BODY()

    
		
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Robot OS")
		float x;
		
    
		
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Robot OS")
		float y;
		
    
		
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Robot OS")
		float z;
		
    

	rapidjson::Value Serialization(rapidjson::Document & d);
	void Unserialization(rapidjson::Value & v);

	std::string TypeName = "geometry_msgs/Point32";

};


UCLASS()
class U_geometry_msgs_Point32Advertiser : public UAdvertiser
{

	GENERATED_UCLASS_BODY()

public:
	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	static U_geometry_msgs_Point32Advertiser * Create_Point32_Advertiser(FString TopicName);

	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	void Publish(F_geometry_msgs_Point32 Data);
};

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(F_geometry_msgs_Point32Delegate, F_geometry_msgs_Point32, Data);

UCLASS()
class U_geometry_msgs_Point32Subscriber : public USubscriber
{
	GENERATED_UCLASS_BODY()
public:
	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	static U_geometry_msgs_Point32Subscriber * Create_Point32_Subscriber(FString _TopicName);

	virtual void ProccessMsg(rapidjson::Value & obj);

	UPROPERTY(BlueprintAssignable, Category = "Robot OS")
	F_geometry_msgs_Point32Delegate OnPoint32Data;

	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	virtual void OnRecieve(F_geometry_msgs_Point32 Data);
};









USTRUCT()
struct F_trajectory_msgs_MultiDOFJointTrajectory
{

	GENERATED_USTRUCT_BODY()

    
		
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Robot OS")
		F_std_msgs_Header header;
		
    

	rapidjson::Value Serialization(rapidjson::Document & d);
	void Unserialization(rapidjson::Value & v);

	std::string TypeName = "trajectory_msgs/MultiDOFJointTrajectory";

};


UCLASS()
class U_trajectory_msgs_MultiDOFJointTrajectoryAdvertiser : public UAdvertiser
{

	GENERATED_UCLASS_BODY()

public:
	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	static U_trajectory_msgs_MultiDOFJointTrajectoryAdvertiser * Create_MultiDOFJointTrajectory_Advertiser(FString TopicName);

	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	void Publish(F_trajectory_msgs_MultiDOFJointTrajectory Data);
};

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(F_trajectory_msgs_MultiDOFJointTrajectoryDelegate, F_trajectory_msgs_MultiDOFJointTrajectory, Data);

UCLASS()
class U_trajectory_msgs_MultiDOFJointTrajectorySubscriber : public USubscriber
{
	GENERATED_UCLASS_BODY()
public:
	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	static U_trajectory_msgs_MultiDOFJointTrajectorySubscriber * Create_MultiDOFJointTrajectory_Subscriber(FString _TopicName);

	virtual void ProccessMsg(rapidjson::Value & obj);

	UPROPERTY(BlueprintAssignable, Category = "Robot OS")
	F_trajectory_msgs_MultiDOFJointTrajectoryDelegate OnMultiDOFJointTrajectoryData;

	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	virtual void OnRecieve(F_trajectory_msgs_MultiDOFJointTrajectory Data);
};









USTRUCT()
struct F_std_msgs_Float32
{

	GENERATED_USTRUCT_BODY()

    
		
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Robot OS")
		float data;
		
    

	rapidjson::Value Serialization(rapidjson::Document & d);
	void Unserialization(rapidjson::Value & v);

	std::string TypeName = "std_msgs/Float32";

};


UCLASS()
class U_std_msgs_Float32Advertiser : public UAdvertiser
{

	GENERATED_UCLASS_BODY()

public:
	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	static U_std_msgs_Float32Advertiser * Create_Float32_Advertiser(FString TopicName);

	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	void Publish(F_std_msgs_Float32 Data);
};

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(F_std_msgs_Float32Delegate, F_std_msgs_Float32, Data);

UCLASS()
class U_std_msgs_Float32Subscriber : public USubscriber
{
	GENERATED_UCLASS_BODY()
public:
	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	static U_std_msgs_Float32Subscriber * Create_Float32_Subscriber(FString _TopicName);

	virtual void ProccessMsg(rapidjson::Value & obj);

	UPROPERTY(BlueprintAssignable, Category = "Robot OS")
	F_std_msgs_Float32Delegate OnFloat32Data;

	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	virtual void OnRecieve(F_std_msgs_Float32 Data);
};









USTRUCT()
struct F_dji_sdk_TimeStamp
{

	GENERATED_USTRUCT_BODY()

    
		
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Robot OS")
		F_std_msgs_Header header;
		
    
		
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Robot OS")
		int32 time;
		
    
		
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Robot OS")
		int32 time_ns;
		
    
		
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Robot OS")
		uint8 sync_flag;
		
    

	rapidjson::Value Serialization(rapidjson::Document & d);
	void Unserialization(rapidjson::Value & v);

	std::string TypeName = "dji_sdk/TimeStamp";

};


UCLASS()
class U_dji_sdk_TimeStampAdvertiser : public UAdvertiser
{

	GENERATED_UCLASS_BODY()

public:
	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	static U_dji_sdk_TimeStampAdvertiser * Create_TimeStamp_Advertiser(FString TopicName);

	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	void Publish(F_dji_sdk_TimeStamp Data);
};

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(F_dji_sdk_TimeStampDelegate, F_dji_sdk_TimeStamp, Data);

UCLASS()
class U_dji_sdk_TimeStampSubscriber : public USubscriber
{
	GENERATED_UCLASS_BODY()
public:
	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	static U_dji_sdk_TimeStampSubscriber * Create_TimeStamp_Subscriber(FString _TopicName);

	virtual void ProccessMsg(rapidjson::Value & obj);

	UPROPERTY(BlueprintAssignable, Category = "Robot OS")
	F_dji_sdk_TimeStampDelegate OnTimeStampData;

	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	virtual void OnRecieve(F_dji_sdk_TimeStamp Data);
};









USTRUCT()
struct F_sensor_msgs_NavSatStatus
{

	GENERATED_USTRUCT_BODY()

    
		
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Robot OS")
		int32 status;
		
    
		
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Robot OS")
		int32 service;
		
    
		
		UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Robot OS")
		int32 CONSTANT_SERVICE_GPS = 1;
		
    
		
		UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Robot OS")
		int32 CONSTANT_SERVICE_GLONASS = 2;
		
    
		
		UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Robot OS")
		int32 CONSTANT_SERVICE_GALILEO = 8;
		
    

	rapidjson::Value Serialization(rapidjson::Document & d);
	void Unserialization(rapidjson::Value & v);

	std::string TypeName = "sensor_msgs/NavSatStatus";

};


UCLASS()
class U_sensor_msgs_NavSatStatusAdvertiser : public UAdvertiser
{

	GENERATED_UCLASS_BODY()

public:
	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	static U_sensor_msgs_NavSatStatusAdvertiser * Create_NavSatStatus_Advertiser(FString TopicName);

	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	void Publish(F_sensor_msgs_NavSatStatus Data);
};

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(F_sensor_msgs_NavSatStatusDelegate, F_sensor_msgs_NavSatStatus, Data);

UCLASS()
class U_sensor_msgs_NavSatStatusSubscriber : public USubscriber
{
	GENERATED_UCLASS_BODY()
public:
	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	static U_sensor_msgs_NavSatStatusSubscriber * Create_NavSatStatus_Subscriber(FString _TopicName);

	virtual void ProccessMsg(rapidjson::Value & obj);

	UPROPERTY(BlueprintAssignable, Category = "Robot OS")
	F_sensor_msgs_NavSatStatusDelegate OnNavSatStatusData;

	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	virtual void OnRecieve(F_sensor_msgs_NavSatStatus Data);
};









USTRUCT()
struct F_dji_sdk_MissionFollowmeTask
{

	GENERATED_USTRUCT_BODY()

    
		
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Robot OS")
		uint8 mode;
		
    
		
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Robot OS")
		uint8 yaw_mode;
		
    
		
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Robot OS")
		float initial_latitude;
		
    
		
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Robot OS")
		float initial_longitude;
		
    
		
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Robot OS")
		int32 initial_altitude;
		
    
		
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Robot OS")
		uint8 sensitivity;
		
    

	rapidjson::Value Serialization(rapidjson::Document & d);
	void Unserialization(rapidjson::Value & v);

	std::string TypeName = "dji_sdk/MissionFollowmeTask";

};


UCLASS()
class U_dji_sdk_MissionFollowmeTaskAdvertiser : public UAdvertiser
{

	GENERATED_UCLASS_BODY()

public:
	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	static U_dji_sdk_MissionFollowmeTaskAdvertiser * Create_MissionFollowmeTask_Advertiser(FString TopicName);

	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	void Publish(F_dji_sdk_MissionFollowmeTask Data);
};

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(F_dji_sdk_MissionFollowmeTaskDelegate, F_dji_sdk_MissionFollowmeTask, Data);

UCLASS()
class U_dji_sdk_MissionFollowmeTaskSubscriber : public USubscriber
{
	GENERATED_UCLASS_BODY()
public:
	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	static U_dji_sdk_MissionFollowmeTaskSubscriber * Create_MissionFollowmeTask_Subscriber(FString _TopicName);

	virtual void ProccessMsg(rapidjson::Value & obj);

	UPROPERTY(BlueprintAssignable, Category = "Robot OS")
	F_dji_sdk_MissionFollowmeTaskDelegate OnMissionFollowmeTaskData;

	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	virtual void OnRecieve(F_dji_sdk_MissionFollowmeTask Data);
};









USTRUCT()
struct F_dji_sdk_MissionStatusOther
{

	GENERATED_USTRUCT_BODY()

    
		
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Robot OS")
		uint8 mission_type;
		
    
		
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Robot OS")
		uint8 last_mission_type;
		
    
		
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Robot OS")
		uint8 is_broken;
		
    
		
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Robot OS")
		uint8 error_code;
		
    

	rapidjson::Value Serialization(rapidjson::Document & d);
	void Unserialization(rapidjson::Value & v);

	std::string TypeName = "dji_sdk/MissionStatusOther";

};


UCLASS()
class U_dji_sdk_MissionStatusOtherAdvertiser : public UAdvertiser
{

	GENERATED_UCLASS_BODY()

public:
	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	static U_dji_sdk_MissionStatusOtherAdvertiser * Create_MissionStatusOther_Advertiser(FString TopicName);

	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	void Publish(F_dji_sdk_MissionStatusOther Data);
};

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(F_dji_sdk_MissionStatusOtherDelegate, F_dji_sdk_MissionStatusOther, Data);

UCLASS()
class U_dji_sdk_MissionStatusOtherSubscriber : public USubscriber
{
	GENERATED_UCLASS_BODY()
public:
	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	static U_dji_sdk_MissionStatusOtherSubscriber * Create_MissionStatusOther_Subscriber(FString _TopicName);

	virtual void ProccessMsg(rapidjson::Value & obj);

	UPROPERTY(BlueprintAssignable, Category = "Robot OS")
	F_dji_sdk_MissionStatusOtherDelegate OnMissionStatusOtherData;

	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	virtual void OnRecieve(F_dji_sdk_MissionStatusOther Data);
};









USTRUCT()
struct F_geometry_msgs_PointStamped
{

	GENERATED_USTRUCT_BODY()

    
		
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Robot OS")
		F_std_msgs_Header header;
		
    
		
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Robot OS")
		F_geometry_msgs_Point point;
		
    

	rapidjson::Value Serialization(rapidjson::Document & d);
	void Unserialization(rapidjson::Value & v);

	std::string TypeName = "geometry_msgs/PointStamped";

};


UCLASS()
class U_geometry_msgs_PointStampedAdvertiser : public UAdvertiser
{

	GENERATED_UCLASS_BODY()

public:
	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	static U_geometry_msgs_PointStampedAdvertiser * Create_PointStamped_Advertiser(FString TopicName);

	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	void Publish(F_geometry_msgs_PointStamped Data);
};

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(F_geometry_msgs_PointStampedDelegate, F_geometry_msgs_PointStamped, Data);

UCLASS()
class U_geometry_msgs_PointStampedSubscriber : public USubscriber
{
	GENERATED_UCLASS_BODY()
public:
	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	static U_geometry_msgs_PointStampedSubscriber * Create_PointStamped_Subscriber(FString _TopicName);

	virtual void ProccessMsg(rapidjson::Value & obj);

	UPROPERTY(BlueprintAssignable, Category = "Robot OS")
	F_geometry_msgs_PointStampedDelegate OnPointStampedData;

	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	virtual void OnRecieve(F_geometry_msgs_PointStamped Data);
};









USTRUCT()
struct F_sensor_msgs_Range
{

	GENERATED_USTRUCT_BODY()

    
		
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Robot OS")
		F_std_msgs_Header header;
		
    
		
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Robot OS")
		uint8 radiation_type;
		
    
		
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Robot OS")
		float field_of_view;
		
    
		
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Robot OS")
		float min_range;
		
    
		
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Robot OS")
		float max_range;
		
    
		
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Robot OS")
		float range;
		
    
		
		UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Robot OS")
		uint8 CONSTANT_ULTRASOUND = 0;
		
    
		
		UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Robot OS")
		uint8 CONSTANT_INFRARED = 1;
		
    

	rapidjson::Value Serialization(rapidjson::Document & d);
	void Unserialization(rapidjson::Value & v);

	std::string TypeName = "sensor_msgs/Range";

};


UCLASS()
class U_sensor_msgs_RangeAdvertiser : public UAdvertiser
{

	GENERATED_UCLASS_BODY()

public:
	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	static U_sensor_msgs_RangeAdvertiser * Create_Range_Advertiser(FString TopicName);

	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	void Publish(F_sensor_msgs_Range Data);
};

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(F_sensor_msgs_RangeDelegate, F_sensor_msgs_Range, Data);

UCLASS()
class U_sensor_msgs_RangeSubscriber : public USubscriber
{
	GENERATED_UCLASS_BODY()
public:
	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	static U_sensor_msgs_RangeSubscriber * Create_Range_Subscriber(FString _TopicName);

	virtual void ProccessMsg(rapidjson::Value & obj);

	UPROPERTY(BlueprintAssignable, Category = "Robot OS")
	F_sensor_msgs_RangeDelegate OnRangeData;

	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	virtual void OnRecieve(F_sensor_msgs_Range Data);
};









USTRUCT()
struct F_geometry_msgs_Quaternion
{

	GENERATED_USTRUCT_BODY()

    
		
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Robot OS")
		float x;
		
    
		
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Robot OS")
		float y;
		
    
		
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Robot OS")
		float z;
		
    
		
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Robot OS")
		float w;
		
    

	rapidjson::Value Serialization(rapidjson::Document & d);
	void Unserialization(rapidjson::Value & v);

	std::string TypeName = "geometry_msgs/Quaternion";

};


UCLASS()
class U_geometry_msgs_QuaternionAdvertiser : public UAdvertiser
{

	GENERATED_UCLASS_BODY()

public:
	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	static U_geometry_msgs_QuaternionAdvertiser * Create_Quaternion_Advertiser(FString TopicName);

	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	void Publish(F_geometry_msgs_Quaternion Data);
};

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(F_geometry_msgs_QuaternionDelegate, F_geometry_msgs_Quaternion, Data);

UCLASS()
class U_geometry_msgs_QuaternionSubscriber : public USubscriber
{
	GENERATED_UCLASS_BODY()
public:
	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	static U_geometry_msgs_QuaternionSubscriber * Create_Quaternion_Subscriber(FString _TopicName);

	virtual void ProccessMsg(rapidjson::Value & obj);

	UPROPERTY(BlueprintAssignable, Category = "Robot OS")
	F_geometry_msgs_QuaternionDelegate OnQuaternionData;

	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	virtual void OnRecieve(F_geometry_msgs_Quaternion Data);
};









USTRUCT()
struct F_geometry_msgs_Pose2D
{

	GENERATED_USTRUCT_BODY()

    
		
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Robot OS")
		float x;
		
    
		
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Robot OS")
		float y;
		
    
		
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Robot OS")
		float theta;
		
    

	rapidjson::Value Serialization(rapidjson::Document & d);
	void Unserialization(rapidjson::Value & v);

	std::string TypeName = "geometry_msgs/Pose2D";

};


UCLASS()
class U_geometry_msgs_Pose2DAdvertiser : public UAdvertiser
{

	GENERATED_UCLASS_BODY()

public:
	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	static U_geometry_msgs_Pose2DAdvertiser * Create_Pose2D_Advertiser(FString TopicName);

	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	void Publish(F_geometry_msgs_Pose2D Data);
};

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(F_geometry_msgs_Pose2DDelegate, F_geometry_msgs_Pose2D, Data);

UCLASS()
class U_geometry_msgs_Pose2DSubscriber : public USubscriber
{
	GENERATED_UCLASS_BODY()
public:
	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	static U_geometry_msgs_Pose2DSubscriber * Create_Pose2D_Subscriber(FString _TopicName);

	virtual void ProccessMsg(rapidjson::Value & obj);

	UPROPERTY(BlueprintAssignable, Category = "Robot OS")
	F_geometry_msgs_Pose2DDelegate OnPose2DData;

	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	virtual void OnRecieve(F_geometry_msgs_Pose2D Data);
};









USTRUCT()
struct F_std_msgs_Int8
{

	GENERATED_USTRUCT_BODY()

    
		
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Robot OS")
		int32 data;
		
    

	rapidjson::Value Serialization(rapidjson::Document & d);
	void Unserialization(rapidjson::Value & v);

	std::string TypeName = "std_msgs/Int8";

};


UCLASS()
class U_std_msgs_Int8Advertiser : public UAdvertiser
{

	GENERATED_UCLASS_BODY()

public:
	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	static U_std_msgs_Int8Advertiser * Create_Int8_Advertiser(FString TopicName);

	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	void Publish(F_std_msgs_Int8 Data);
};

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(F_std_msgs_Int8Delegate, F_std_msgs_Int8, Data);

UCLASS()
class U_std_msgs_Int8Subscriber : public USubscriber
{
	GENERATED_UCLASS_BODY()
public:
	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	static U_std_msgs_Int8Subscriber * Create_Int8_Subscriber(FString _TopicName);

	virtual void ProccessMsg(rapidjson::Value & obj);

	UPROPERTY(BlueprintAssignable, Category = "Robot OS")
	F_std_msgs_Int8Delegate OnInt8Data;

	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	virtual void OnRecieve(F_std_msgs_Int8 Data);
};









USTRUCT()
struct F_sensor_msgs_LaserEcho
{

	GENERATED_USTRUCT_BODY()

    
		
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Robot OS")
		TArray<float> echoes;
		
    

	rapidjson::Value Serialization(rapidjson::Document & d);
	void Unserialization(rapidjson::Value & v);

	std::string TypeName = "sensor_msgs/LaserEcho";

};


UCLASS()
class U_sensor_msgs_LaserEchoAdvertiser : public UAdvertiser
{

	GENERATED_UCLASS_BODY()

public:
	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	static U_sensor_msgs_LaserEchoAdvertiser * Create_LaserEcho_Advertiser(FString TopicName);

	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	void Publish(F_sensor_msgs_LaserEcho Data);
};

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(F_sensor_msgs_LaserEchoDelegate, F_sensor_msgs_LaserEcho, Data);

UCLASS()
class U_sensor_msgs_LaserEchoSubscriber : public USubscriber
{
	GENERATED_UCLASS_BODY()
public:
	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	static U_sensor_msgs_LaserEchoSubscriber * Create_LaserEcho_Subscriber(FString _TopicName);

	virtual void ProccessMsg(rapidjson::Value & obj);

	UPROPERTY(BlueprintAssignable, Category = "Robot OS")
	F_sensor_msgs_LaserEchoDelegate OnLaserEchoData;

	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	virtual void OnRecieve(F_sensor_msgs_LaserEcho Data);
};









USTRUCT()
struct F_std_msgs_String
{

	GENERATED_USTRUCT_BODY()

    
		
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Robot OS")
		FString data;
		
    

	rapidjson::Value Serialization(rapidjson::Document & d);
	void Unserialization(rapidjson::Value & v);

	std::string TypeName = "std_msgs/String";

};


UCLASS()
class U_std_msgs_StringAdvertiser : public UAdvertiser
{

	GENERATED_UCLASS_BODY()

public:
	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	static U_std_msgs_StringAdvertiser * Create_String_Advertiser(FString TopicName);

	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	void Publish(F_std_msgs_String Data);
};

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(F_std_msgs_StringDelegate, F_std_msgs_String, Data);

UCLASS()
class U_std_msgs_StringSubscriber : public USubscriber
{
	GENERATED_UCLASS_BODY()
public:
	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	static U_std_msgs_StringSubscriber * Create_String_Subscriber(FString _TopicName);

	virtual void ProccessMsg(rapidjson::Value & obj);

	UPROPERTY(BlueprintAssignable, Category = "Robot OS")
	F_std_msgs_StringDelegate OnStringData;

	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	virtual void OnRecieve(F_std_msgs_String Data);
};









USTRUCT()
struct F_geometry_msgs_Polygon
{

	GENERATED_USTRUCT_BODY()

    

	rapidjson::Value Serialization(rapidjson::Document & d);
	void Unserialization(rapidjson::Value & v);

	std::string TypeName = "geometry_msgs/Polygon";

};


UCLASS()
class U_geometry_msgs_PolygonAdvertiser : public UAdvertiser
{

	GENERATED_UCLASS_BODY()

public:
	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	static U_geometry_msgs_PolygonAdvertiser * Create_Polygon_Advertiser(FString TopicName);

	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	void Publish(F_geometry_msgs_Polygon Data);
};

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(F_geometry_msgs_PolygonDelegate, F_geometry_msgs_Polygon, Data);

UCLASS()
class U_geometry_msgs_PolygonSubscriber : public USubscriber
{
	GENERATED_UCLASS_BODY()
public:
	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	static U_geometry_msgs_PolygonSubscriber * Create_Polygon_Subscriber(FString _TopicName);

	virtual void ProccessMsg(rapidjson::Value & obj);

	UPROPERTY(BlueprintAssignable, Category = "Robot OS")
	F_geometry_msgs_PolygonDelegate OnPolygonData;

	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	virtual void OnRecieve(F_geometry_msgs_Polygon Data);
};









USTRUCT()
struct F_sensor_msgs_JointState
{

	GENERATED_USTRUCT_BODY()

    
		
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Robot OS")
		F_std_msgs_Header header;
		
    

	rapidjson::Value Serialization(rapidjson::Document & d);
	void Unserialization(rapidjson::Value & v);

	std::string TypeName = "sensor_msgs/JointState";

};


UCLASS()
class U_sensor_msgs_JointStateAdvertiser : public UAdvertiser
{

	GENERATED_UCLASS_BODY()

public:
	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	static U_sensor_msgs_JointStateAdvertiser * Create_JointState_Advertiser(FString TopicName);

	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	void Publish(F_sensor_msgs_JointState Data);
};

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(F_sensor_msgs_JointStateDelegate, F_sensor_msgs_JointState, Data);

UCLASS()
class U_sensor_msgs_JointStateSubscriber : public USubscriber
{
	GENERATED_UCLASS_BODY()
public:
	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	static U_sensor_msgs_JointStateSubscriber * Create_JointState_Subscriber(FString _TopicName);

	virtual void ProccessMsg(rapidjson::Value & obj);

	UPROPERTY(BlueprintAssignable, Category = "Robot OS")
	F_sensor_msgs_JointStateDelegate OnJointStateData;

	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	virtual void OnRecieve(F_sensor_msgs_JointState Data);
};









USTRUCT()
struct F_sensor_msgs_RelativeHumidity
{

	GENERATED_USTRUCT_BODY()

    
		
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Robot OS")
		F_std_msgs_Header header;
		
    
		
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Robot OS")
		float relative_humidity;
		
    
		
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Robot OS")
		float variance;
		
    

	rapidjson::Value Serialization(rapidjson::Document & d);
	void Unserialization(rapidjson::Value & v);

	std::string TypeName = "sensor_msgs/RelativeHumidity";

};


UCLASS()
class U_sensor_msgs_RelativeHumidityAdvertiser : public UAdvertiser
{

	GENERATED_UCLASS_BODY()

public:
	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	static U_sensor_msgs_RelativeHumidityAdvertiser * Create_RelativeHumidity_Advertiser(FString TopicName);

	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	void Publish(F_sensor_msgs_RelativeHumidity Data);
};

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(F_sensor_msgs_RelativeHumidityDelegate, F_sensor_msgs_RelativeHumidity, Data);

UCLASS()
class U_sensor_msgs_RelativeHumiditySubscriber : public USubscriber
{
	GENERATED_UCLASS_BODY()
public:
	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	static U_sensor_msgs_RelativeHumiditySubscriber * Create_RelativeHumidity_Subscriber(FString _TopicName);

	virtual void ProccessMsg(rapidjson::Value & obj);

	UPROPERTY(BlueprintAssignable, Category = "Robot OS")
	F_sensor_msgs_RelativeHumidityDelegate OnRelativeHumidityData;

	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	virtual void OnRecieve(F_sensor_msgs_RelativeHumidity Data);
};









USTRUCT()
struct F_dji_sdk_MissionWaypointTask
{

	GENERATED_USTRUCT_BODY()

    
		
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Robot OS")
		float velocity_range;
		
    
		
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Robot OS")
		float idle_velocity;
		
    
		
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Robot OS")
		uint8 action_on_finish;
		
    
		
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Robot OS")
		uint8 mission_exec_times;
		
    
		
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Robot OS")
		uint8 yaw_mode;
		
    
		
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Robot OS")
		uint8 trace_mode;
		
    
		
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Robot OS")
		uint8 action_on_rc_lost;
		
    
		
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Robot OS")
		uint8 gimbal_pitch_mode;
		
    

	rapidjson::Value Serialization(rapidjson::Document & d);
	void Unserialization(rapidjson::Value & v);

	std::string TypeName = "dji_sdk/MissionWaypointTask";

};


UCLASS()
class U_dji_sdk_MissionWaypointTaskAdvertiser : public UAdvertiser
{

	GENERATED_UCLASS_BODY()

public:
	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	static U_dji_sdk_MissionWaypointTaskAdvertiser * Create_MissionWaypointTask_Advertiser(FString TopicName);

	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	void Publish(F_dji_sdk_MissionWaypointTask Data);
};

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(F_dji_sdk_MissionWaypointTaskDelegate, F_dji_sdk_MissionWaypointTask, Data);

UCLASS()
class U_dji_sdk_MissionWaypointTaskSubscriber : public USubscriber
{
	GENERATED_UCLASS_BODY()
public:
	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	static U_dji_sdk_MissionWaypointTaskSubscriber * Create_MissionWaypointTask_Subscriber(FString _TopicName);

	virtual void ProccessMsg(rapidjson::Value & obj);

	UPROPERTY(BlueprintAssignable, Category = "Robot OS")
	F_dji_sdk_MissionWaypointTaskDelegate OnMissionWaypointTaskData;

	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	virtual void OnRecieve(F_dji_sdk_MissionWaypointTask Data);
};









USTRUCT()
struct F_std_msgs_Empty
{

	GENERATED_USTRUCT_BODY()

    

	rapidjson::Value Serialization(rapidjson::Document & d);
	void Unserialization(rapidjson::Value & v);

	std::string TypeName = "std_msgs/Empty";

};


UCLASS()
class U_std_msgs_EmptyAdvertiser : public UAdvertiser
{

	GENERATED_UCLASS_BODY()

public:
	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	static U_std_msgs_EmptyAdvertiser * Create_Empty_Advertiser(FString TopicName);

	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	void Publish(F_std_msgs_Empty Data);
};

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(F_std_msgs_EmptyDelegate, F_std_msgs_Empty, Data);

UCLASS()
class U_std_msgs_EmptySubscriber : public USubscriber
{
	GENERATED_UCLASS_BODY()
public:
	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	static U_std_msgs_EmptySubscriber * Create_Empty_Subscriber(FString _TopicName);

	virtual void ProccessMsg(rapidjson::Value & obj);

	UPROPERTY(BlueprintAssignable, Category = "Robot OS")
	F_std_msgs_EmptyDelegate OnEmptyData;

	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	virtual void OnRecieve(F_std_msgs_Empty Data);
};









USTRUCT()
struct F_nav_msgs_Path
{

	GENERATED_USTRUCT_BODY()

    
		
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Robot OS")
		F_std_msgs_Header header;
		
    

	rapidjson::Value Serialization(rapidjson::Document & d);
	void Unserialization(rapidjson::Value & v);

	std::string TypeName = "nav_msgs/Path";

};


UCLASS()
class U_nav_msgs_PathAdvertiser : public UAdvertiser
{

	GENERATED_UCLASS_BODY()

public:
	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	static U_nav_msgs_PathAdvertiser * Create_Path_Advertiser(FString TopicName);

	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	void Publish(F_nav_msgs_Path Data);
};

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(F_nav_msgs_PathDelegate, F_nav_msgs_Path, Data);

UCLASS()
class U_nav_msgs_PathSubscriber : public USubscriber
{
	GENERATED_UCLASS_BODY()
public:
	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	static U_nav_msgs_PathSubscriber * Create_Path_Subscriber(FString _TopicName);

	virtual void ProccessMsg(rapidjson::Value & obj);

	UPROPERTY(BlueprintAssignable, Category = "Robot OS")
	F_nav_msgs_PathDelegate OnPathData;

	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	virtual void OnRecieve(F_nav_msgs_Path Data);
};









USTRUCT()
struct F_std_msgs_Int64
{

	GENERATED_USTRUCT_BODY()

    
		
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Robot OS")
		int32 data;
		
    

	rapidjson::Value Serialization(rapidjson::Document & d);
	void Unserialization(rapidjson::Value & v);

	std::string TypeName = "std_msgs/Int64";

};


UCLASS()
class U_std_msgs_Int64Advertiser : public UAdvertiser
{

	GENERATED_UCLASS_BODY()

public:
	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	static U_std_msgs_Int64Advertiser * Create_Int64_Advertiser(FString TopicName);

	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	void Publish(F_std_msgs_Int64 Data);
};

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(F_std_msgs_Int64Delegate, F_std_msgs_Int64, Data);

UCLASS()
class U_std_msgs_Int64Subscriber : public USubscriber
{
	GENERATED_UCLASS_BODY()
public:
	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	static U_std_msgs_Int64Subscriber * Create_Int64_Subscriber(FString _TopicName);

	virtual void ProccessMsg(rapidjson::Value & obj);

	UPROPERTY(BlueprintAssignable, Category = "Robot OS")
	F_std_msgs_Int64Delegate OnInt64Data;

	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	virtual void OnRecieve(F_std_msgs_Int64 Data);
};









USTRUCT()
struct F_sensor_msgs_PointCloud2
{

	GENERATED_USTRUCT_BODY()

    
		
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Robot OS")
		F_std_msgs_Header header;
		
    
		
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Robot OS")
		int32 height;
		
    
		
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Robot OS")
		int32 width;
		
    
		
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Robot OS")
		bool is_bigendian;
		
    
		
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Robot OS")
		int32 point_step;
		
    
		
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Robot OS")
		int32 row_step;
		
    
		
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Robot OS")
		bool is_dense;
		
    
		
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Robot OS")
		TArray<uint8> data;
		
    

	rapidjson::Value Serialization(rapidjson::Document & d);
	void Unserialization(rapidjson::Value & v);

	std::string TypeName = "sensor_msgs/PointCloud2";

};


UCLASS()
class U_sensor_msgs_PointCloud2Advertiser : public UAdvertiser
{

	GENERATED_UCLASS_BODY()

public:
	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	static U_sensor_msgs_PointCloud2Advertiser * Create_PointCloud2_Advertiser(FString TopicName);

	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	void Publish(F_sensor_msgs_PointCloud2 Data);
};

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(F_sensor_msgs_PointCloud2Delegate, F_sensor_msgs_PointCloud2, Data);

UCLASS()
class U_sensor_msgs_PointCloud2Subscriber : public USubscriber
{
	GENERATED_UCLASS_BODY()
public:
	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	static U_sensor_msgs_PointCloud2Subscriber * Create_PointCloud2_Subscriber(FString _TopicName);

	virtual void ProccessMsg(rapidjson::Value & obj);

	UPROPERTY(BlueprintAssignable, Category = "Robot OS")
	F_sensor_msgs_PointCloud2Delegate OnPointCloud2Data;

	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	virtual void OnRecieve(F_sensor_msgs_PointCloud2 Data);
};









USTRUCT()
struct F_std_msgs_MultiArrayDimension
{

	GENERATED_USTRUCT_BODY()

    
		
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Robot OS")
		FString label;
		
    
		
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Robot OS")
		int32 size;
		
    
		
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Robot OS")
		int32 stride;
		
    

	rapidjson::Value Serialization(rapidjson::Document & d);
	void Unserialization(rapidjson::Value & v);

	std::string TypeName = "std_msgs/MultiArrayDimension";

};


UCLASS()
class U_std_msgs_MultiArrayDimensionAdvertiser : public UAdvertiser
{

	GENERATED_UCLASS_BODY()

public:
	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	static U_std_msgs_MultiArrayDimensionAdvertiser * Create_MultiArrayDimension_Advertiser(FString TopicName);

	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	void Publish(F_std_msgs_MultiArrayDimension Data);
};

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(F_std_msgs_MultiArrayDimensionDelegate, F_std_msgs_MultiArrayDimension, Data);

UCLASS()
class U_std_msgs_MultiArrayDimensionSubscriber : public USubscriber
{
	GENERATED_UCLASS_BODY()
public:
	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	static U_std_msgs_MultiArrayDimensionSubscriber * Create_MultiArrayDimension_Subscriber(FString _TopicName);

	virtual void ProccessMsg(rapidjson::Value & obj);

	UPROPERTY(BlueprintAssignable, Category = "Robot OS")
	F_std_msgs_MultiArrayDimensionDelegate OnMultiArrayDimensionData;

	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	virtual void OnRecieve(F_std_msgs_MultiArrayDimension Data);
};









USTRUCT()
struct F_geometry_msgs_QuaternionStamped
{

	GENERATED_USTRUCT_BODY()

    
		
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Robot OS")
		F_std_msgs_Header header;
		
    
		
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Robot OS")
		F_geometry_msgs_Quaternion quaternion;
		
    

	rapidjson::Value Serialization(rapidjson::Document & d);
	void Unserialization(rapidjson::Value & v);

	std::string TypeName = "geometry_msgs/QuaternionStamped";

};


UCLASS()
class U_geometry_msgs_QuaternionStampedAdvertiser : public UAdvertiser
{

	GENERATED_UCLASS_BODY()

public:
	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	static U_geometry_msgs_QuaternionStampedAdvertiser * Create_QuaternionStamped_Advertiser(FString TopicName);

	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	void Publish(F_geometry_msgs_QuaternionStamped Data);
};

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(F_geometry_msgs_QuaternionStampedDelegate, F_geometry_msgs_QuaternionStamped, Data);

UCLASS()
class U_geometry_msgs_QuaternionStampedSubscriber : public USubscriber
{
	GENERATED_UCLASS_BODY()
public:
	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	static U_geometry_msgs_QuaternionStampedSubscriber * Create_QuaternionStamped_Subscriber(FString _TopicName);

	virtual void ProccessMsg(rapidjson::Value & obj);

	UPROPERTY(BlueprintAssignable, Category = "Robot OS")
	F_geometry_msgs_QuaternionStampedDelegate OnQuaternionStampedData;

	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	virtual void OnRecieve(F_geometry_msgs_QuaternionStamped Data);
};









USTRUCT()
struct F_std_msgs_Int32
{

	GENERATED_USTRUCT_BODY()

    
		
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Robot OS")
		int32 data;
		
    

	rapidjson::Value Serialization(rapidjson::Document & d);
	void Unserialization(rapidjson::Value & v);

	std::string TypeName = "std_msgs/Int32";

};


UCLASS()
class U_std_msgs_Int32Advertiser : public UAdvertiser
{

	GENERATED_UCLASS_BODY()

public:
	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	static U_std_msgs_Int32Advertiser * Create_Int32_Advertiser(FString TopicName);

	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	void Publish(F_std_msgs_Int32 Data);
};

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(F_std_msgs_Int32Delegate, F_std_msgs_Int32, Data);

UCLASS()
class U_std_msgs_Int32Subscriber : public USubscriber
{
	GENERATED_UCLASS_BODY()
public:
	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	static U_std_msgs_Int32Subscriber * Create_Int32_Subscriber(FString _TopicName);

	virtual void ProccessMsg(rapidjson::Value & obj);

	UPROPERTY(BlueprintAssignable, Category = "Robot OS")
	F_std_msgs_Int32Delegate OnInt32Data;

	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	virtual void OnRecieve(F_std_msgs_Int32 Data);
};









USTRUCT()
struct F_sensor_msgs_Image
{

	GENERATED_USTRUCT_BODY()

    
		
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Robot OS")
		F_std_msgs_Header header;
		
    
		
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Robot OS")
		int32 height;
		
    
		
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Robot OS")
		int32 width;
		
    
		
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Robot OS")
		FString encoding;
		
    
		
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Robot OS")
		uint8 is_bigendian;
		
    
		
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Robot OS")
		int32 step;
		
    
		
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Robot OS")
		TArray<uint8> data;
		
    

	rapidjson::Value Serialization(rapidjson::Document & d);
	void Unserialization(rapidjson::Value & v);

	std::string TypeName = "sensor_msgs/Image";

};


UCLASS()
class U_sensor_msgs_ImageAdvertiser : public UAdvertiser
{

	GENERATED_UCLASS_BODY()

public:
	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	static U_sensor_msgs_ImageAdvertiser * Create_Image_Advertiser(FString TopicName);

	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	void Publish(F_sensor_msgs_Image Data);
};

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(F_sensor_msgs_ImageDelegate, F_sensor_msgs_Image, Data);

UCLASS()
class U_sensor_msgs_ImageSubscriber : public USubscriber
{
	GENERATED_UCLASS_BODY()
public:
	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	static U_sensor_msgs_ImageSubscriber * Create_Image_Subscriber(FString _TopicName);

	virtual void ProccessMsg(rapidjson::Value & obj);

	UPROPERTY(BlueprintAssignable, Category = "Robot OS")
	F_sensor_msgs_ImageDelegate OnImageData;

	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	virtual void OnRecieve(F_sensor_msgs_Image Data);
};









USTRUCT()
struct F_geometry_msgs_Pose
{

	GENERATED_USTRUCT_BODY()

    
		
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Robot OS")
		F_geometry_msgs_Point position;
		
    
		
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Robot OS")
		F_geometry_msgs_Quaternion orientation;
		
    

	rapidjson::Value Serialization(rapidjson::Document & d);
	void Unserialization(rapidjson::Value & v);

	std::string TypeName = "geometry_msgs/Pose";

};


UCLASS()
class U_geometry_msgs_PoseAdvertiser : public UAdvertiser
{

	GENERATED_UCLASS_BODY()

public:
	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	static U_geometry_msgs_PoseAdvertiser * Create_Pose_Advertiser(FString TopicName);

	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	void Publish(F_geometry_msgs_Pose Data);
};

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(F_geometry_msgs_PoseDelegate, F_geometry_msgs_Pose, Data);

UCLASS()
class U_geometry_msgs_PoseSubscriber : public USubscriber
{
	GENERATED_UCLASS_BODY()
public:
	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	static U_geometry_msgs_PoseSubscriber * Create_Pose_Subscriber(FString _TopicName);

	virtual void ProccessMsg(rapidjson::Value & obj);

	UPROPERTY(BlueprintAssignable, Category = "Robot OS")
	F_geometry_msgs_PoseDelegate OnPoseData;

	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	virtual void OnRecieve(F_geometry_msgs_Pose Data);
};









USTRUCT()
struct F_nav_msgs_MapMetaData
{

	GENERATED_USTRUCT_BODY()

    
		
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Robot OS")
		int32 map_load_time;
		
    
		
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Robot OS")
		float resolution;
		
    
		
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Robot OS")
		int32 width;
		
    
		
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Robot OS")
		int32 height;
		
    
		
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Robot OS")
		F_geometry_msgs_Pose origin;
		
    

	rapidjson::Value Serialization(rapidjson::Document & d);
	void Unserialization(rapidjson::Value & v);

	std::string TypeName = "nav_msgs/MapMetaData";

};


UCLASS()
class U_nav_msgs_MapMetaDataAdvertiser : public UAdvertiser
{

	GENERATED_UCLASS_BODY()

public:
	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	static U_nav_msgs_MapMetaDataAdvertiser * Create_MapMetaData_Advertiser(FString TopicName);

	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	void Publish(F_nav_msgs_MapMetaData Data);
};

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(F_nav_msgs_MapMetaDataDelegate, F_nav_msgs_MapMetaData, Data);

UCLASS()
class U_nav_msgs_MapMetaDataSubscriber : public USubscriber
{
	GENERATED_UCLASS_BODY()
public:
	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	static U_nav_msgs_MapMetaDataSubscriber * Create_MapMetaData_Subscriber(FString _TopicName);

	virtual void ProccessMsg(rapidjson::Value & obj);

	UPROPERTY(BlueprintAssignable, Category = "Robot OS")
	F_nav_msgs_MapMetaDataDelegate OnMapMetaDataData;

	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	virtual void OnRecieve(F_nav_msgs_MapMetaData Data);
};









USTRUCT()
struct F_nav_msgs_OccupancyGrid
{

	GENERATED_USTRUCT_BODY()

    
		
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Robot OS")
		F_std_msgs_Header header;
		
    
		
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Robot OS")
		F_nav_msgs_MapMetaData info;
		
    

	rapidjson::Value Serialization(rapidjson::Document & d);
	void Unserialization(rapidjson::Value & v);

	std::string TypeName = "nav_msgs/OccupancyGrid";

};


UCLASS()
class U_nav_msgs_OccupancyGridAdvertiser : public UAdvertiser
{

	GENERATED_UCLASS_BODY()

public:
	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	static U_nav_msgs_OccupancyGridAdvertiser * Create_OccupancyGrid_Advertiser(FString TopicName);

	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	void Publish(F_nav_msgs_OccupancyGrid Data);
};

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(F_nav_msgs_OccupancyGridDelegate, F_nav_msgs_OccupancyGrid, Data);

UCLASS()
class U_nav_msgs_OccupancyGridSubscriber : public USubscriber
{
	GENERATED_UCLASS_BODY()
public:
	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	static U_nav_msgs_OccupancyGridSubscriber * Create_OccupancyGrid_Subscriber(FString _TopicName);

	virtual void ProccessMsg(rapidjson::Value & obj);

	UPROPERTY(BlueprintAssignable, Category = "Robot OS")
	F_nav_msgs_OccupancyGridDelegate OnOccupancyGridData;

	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	virtual void OnRecieve(F_nav_msgs_OccupancyGrid Data);
};









USTRUCT()
struct F_geometry_msgs_PoseStamped
{

	GENERATED_USTRUCT_BODY()

    
		
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Robot OS")
		F_std_msgs_Header header;
		
    
		
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Robot OS")
		F_geometry_msgs_Pose pose;
		
    

	rapidjson::Value Serialization(rapidjson::Document & d);
	void Unserialization(rapidjson::Value & v);

	std::string TypeName = "geometry_msgs/PoseStamped";

};


UCLASS()
class U_geometry_msgs_PoseStampedAdvertiser : public UAdvertiser
{

	GENERATED_UCLASS_BODY()

public:
	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	static U_geometry_msgs_PoseStampedAdvertiser * Create_PoseStamped_Advertiser(FString TopicName);

	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	void Publish(F_geometry_msgs_PoseStamped Data);
};

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(F_geometry_msgs_PoseStampedDelegate, F_geometry_msgs_PoseStamped, Data);

UCLASS()
class U_geometry_msgs_PoseStampedSubscriber : public USubscriber
{
	GENERATED_UCLASS_BODY()
public:
	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	static U_geometry_msgs_PoseStampedSubscriber * Create_PoseStamped_Subscriber(FString _TopicName);

	virtual void ProccessMsg(rapidjson::Value & obj);

	UPROPERTY(BlueprintAssignable, Category = "Robot OS")
	F_geometry_msgs_PoseStampedDelegate OnPoseStampedData;

	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	virtual void OnRecieve(F_geometry_msgs_PoseStamped Data);
};









USTRUCT()
struct F_sensor_msgs_JoyFeedback
{

	GENERATED_USTRUCT_BODY()

    
		
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Robot OS")
		uint8 type;
		
    
		
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Robot OS")
		uint8 id;
		
    
		
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Robot OS")
		float intensity;
		
    
		
		UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Robot OS")
		uint8 CONSTANT_TYPE_LED = 0;
		
    
		
		UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Robot OS")
		uint8 CONSTANT_TYPE_RUMBLE = 1;
		
    
		
		UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Robot OS")
		uint8 CONSTANT_TYPE_BUZZER = 2;
		
    

	rapidjson::Value Serialization(rapidjson::Document & d);
	void Unserialization(rapidjson::Value & v);

	std::string TypeName = "sensor_msgs/JoyFeedback";

};


UCLASS()
class U_sensor_msgs_JoyFeedbackAdvertiser : public UAdvertiser
{

	GENERATED_UCLASS_BODY()

public:
	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	static U_sensor_msgs_JoyFeedbackAdvertiser * Create_JoyFeedback_Advertiser(FString TopicName);

	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	void Publish(F_sensor_msgs_JoyFeedback Data);
};

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(F_sensor_msgs_JoyFeedbackDelegate, F_sensor_msgs_JoyFeedback, Data);

UCLASS()
class U_sensor_msgs_JoyFeedbackSubscriber : public USubscriber
{
	GENERATED_UCLASS_BODY()
public:
	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	static U_sensor_msgs_JoyFeedbackSubscriber * Create_JoyFeedback_Subscriber(FString _TopicName);

	virtual void ProccessMsg(rapidjson::Value & obj);

	UPROPERTY(BlueprintAssignable, Category = "Robot OS")
	F_sensor_msgs_JoyFeedbackDelegate OnJoyFeedbackData;

	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	virtual void OnRecieve(F_sensor_msgs_JoyFeedback Data);
};









USTRUCT()
struct F_trajectory_msgs_JointTrajectory
{

	GENERATED_USTRUCT_BODY()

    
		
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Robot OS")
		F_std_msgs_Header header;
		
    

	rapidjson::Value Serialization(rapidjson::Document & d);
	void Unserialization(rapidjson::Value & v);

	std::string TypeName = "trajectory_msgs/JointTrajectory";

};


UCLASS()
class U_trajectory_msgs_JointTrajectoryAdvertiser : public UAdvertiser
{

	GENERATED_UCLASS_BODY()

public:
	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	static U_trajectory_msgs_JointTrajectoryAdvertiser * Create_JointTrajectory_Advertiser(FString TopicName);

	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	void Publish(F_trajectory_msgs_JointTrajectory Data);
};

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(F_trajectory_msgs_JointTrajectoryDelegate, F_trajectory_msgs_JointTrajectory, Data);

UCLASS()
class U_trajectory_msgs_JointTrajectorySubscriber : public USubscriber
{
	GENERATED_UCLASS_BODY()
public:
	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	static U_trajectory_msgs_JointTrajectorySubscriber * Create_JointTrajectory_Subscriber(FString _TopicName);

	virtual void ProccessMsg(rapidjson::Value & obj);

	UPROPERTY(BlueprintAssignable, Category = "Robot OS")
	F_trajectory_msgs_JointTrajectoryDelegate OnJointTrajectoryData;

	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	virtual void OnRecieve(F_trajectory_msgs_JointTrajectory Data);
};









USTRUCT()
struct F_dji_sdk_MissionFollowmeTarget
{

	GENERATED_USTRUCT_BODY()

    
		
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Robot OS")
		float latitude;
		
    
		
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Robot OS")
		float longitude;
		
    
		
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Robot OS")
		int32 altitude;
		
    

	rapidjson::Value Serialization(rapidjson::Document & d);
	void Unserialization(rapidjson::Value & v);

	std::string TypeName = "dji_sdk/MissionFollowmeTarget";

};


UCLASS()
class U_dji_sdk_MissionFollowmeTargetAdvertiser : public UAdvertiser
{

	GENERATED_UCLASS_BODY()

public:
	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	static U_dji_sdk_MissionFollowmeTargetAdvertiser * Create_MissionFollowmeTarget_Advertiser(FString TopicName);

	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	void Publish(F_dji_sdk_MissionFollowmeTarget Data);
};

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(F_dji_sdk_MissionFollowmeTargetDelegate, F_dji_sdk_MissionFollowmeTarget, Data);

UCLASS()
class U_dji_sdk_MissionFollowmeTargetSubscriber : public USubscriber
{
	GENERATED_UCLASS_BODY()
public:
	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	static U_dji_sdk_MissionFollowmeTargetSubscriber * Create_MissionFollowmeTarget_Subscriber(FString _TopicName);

	virtual void ProccessMsg(rapidjson::Value & obj);

	UPROPERTY(BlueprintAssignable, Category = "Robot OS")
	F_dji_sdk_MissionFollowmeTargetDelegate OnMissionFollowmeTargetData;

	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	virtual void OnRecieve(F_dji_sdk_MissionFollowmeTarget Data);
};









USTRUCT()
struct F_dji_sdk_WaypointList
{

	GENERATED_USTRUCT_BODY()

    

	rapidjson::Value Serialization(rapidjson::Document & d);
	void Unserialization(rapidjson::Value & v);

	std::string TypeName = "dji_sdk/WaypointList";

};


UCLASS()
class U_dji_sdk_WaypointListAdvertiser : public UAdvertiser
{

	GENERATED_UCLASS_BODY()

public:
	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	static U_dji_sdk_WaypointListAdvertiser * Create_WaypointList_Advertiser(FString TopicName);

	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	void Publish(F_dji_sdk_WaypointList Data);
};

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(F_dji_sdk_WaypointListDelegate, F_dji_sdk_WaypointList, Data);

UCLASS()
class U_dji_sdk_WaypointListSubscriber : public USubscriber
{
	GENERATED_UCLASS_BODY()
public:
	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	static U_dji_sdk_WaypointListSubscriber * Create_WaypointList_Subscriber(FString _TopicName);

	virtual void ProccessMsg(rapidjson::Value & obj);

	UPROPERTY(BlueprintAssignable, Category = "Robot OS")
	F_dji_sdk_WaypointListDelegate OnWaypointListData;

	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	virtual void OnRecieve(F_dji_sdk_WaypointList Data);
};









USTRUCT()
struct F_dji_sdk_MissionPushInfo
{

	GENERATED_USTRUCT_BODY()

    
		
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Robot OS")
		uint8 type;
		
    
		
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Robot OS")
		uint8 data_1;
		
    
		
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Robot OS")
		uint8 data_2;
		
    
		
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Robot OS")
		uint8 data_3;
		
    
		
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Robot OS")
		uint8 data_4;
		
    
		
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Robot OS")
		uint8 data_5;
		
    

	rapidjson::Value Serialization(rapidjson::Document & d);
	void Unserialization(rapidjson::Value & v);

	std::string TypeName = "dji_sdk/MissionPushInfo";

};


UCLASS()
class U_dji_sdk_MissionPushInfoAdvertiser : public UAdvertiser
{

	GENERATED_UCLASS_BODY()

public:
	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	static U_dji_sdk_MissionPushInfoAdvertiser * Create_MissionPushInfo_Advertiser(FString TopicName);

	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	void Publish(F_dji_sdk_MissionPushInfo Data);
};

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(F_dji_sdk_MissionPushInfoDelegate, F_dji_sdk_MissionPushInfo, Data);

UCLASS()
class U_dji_sdk_MissionPushInfoSubscriber : public USubscriber
{
	GENERATED_UCLASS_BODY()
public:
	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	static U_dji_sdk_MissionPushInfoSubscriber * Create_MissionPushInfo_Subscriber(FString _TopicName);

	virtual void ProccessMsg(rapidjson::Value & obj);

	UPROPERTY(BlueprintAssignable, Category = "Robot OS")
	F_dji_sdk_MissionPushInfoDelegate OnMissionPushInfoData;

	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	virtual void OnRecieve(F_dji_sdk_MissionPushInfo Data);
};









USTRUCT()
struct F_std_msgs_MultiArrayLayout
{

	GENERATED_USTRUCT_BODY()

    
		
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Robot OS")
		int32 data_offset;
		
    
		
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Robot OS")
		TArray<F_std_msgs_MultiArrayDimension> dim;
		
    

	rapidjson::Value Serialization(rapidjson::Document & d);
	void Unserialization(rapidjson::Value & v);

	std::string TypeName = "std_msgs/MultiArrayLayout";

};


UCLASS()
class U_std_msgs_MultiArrayLayoutAdvertiser : public UAdvertiser
{

	GENERATED_UCLASS_BODY()

public:
	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	static U_std_msgs_MultiArrayLayoutAdvertiser * Create_MultiArrayLayout_Advertiser(FString TopicName);

	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	void Publish(F_std_msgs_MultiArrayLayout Data);
};

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(F_std_msgs_MultiArrayLayoutDelegate, F_std_msgs_MultiArrayLayout, Data);

UCLASS()
class U_std_msgs_MultiArrayLayoutSubscriber : public USubscriber
{
	GENERATED_UCLASS_BODY()
public:
	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	static U_std_msgs_MultiArrayLayoutSubscriber * Create_MultiArrayLayout_Subscriber(FString _TopicName);

	virtual void ProccessMsg(rapidjson::Value & obj);

	UPROPERTY(BlueprintAssignable, Category = "Robot OS")
	F_std_msgs_MultiArrayLayoutDelegate OnMultiArrayLayoutData;

	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	virtual void OnRecieve(F_std_msgs_MultiArrayLayout Data);
};









USTRUCT()
struct F_std_msgs_Float32MultiArray
{

	GENERATED_USTRUCT_BODY()

    
		
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Robot OS")
		F_std_msgs_MultiArrayLayout layout;
		
    
		
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Robot OS")
		TArray<float> data;
		
    

	rapidjson::Value Serialization(rapidjson::Document & d);
	void Unserialization(rapidjson::Value & v);

	std::string TypeName = "std_msgs/Float32MultiArray";

};


UCLASS()
class U_std_msgs_Float32MultiArrayAdvertiser : public UAdvertiser
{

	GENERATED_UCLASS_BODY()

public:
	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	static U_std_msgs_Float32MultiArrayAdvertiser * Create_Float32MultiArray_Advertiser(FString TopicName);

	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	void Publish(F_std_msgs_Float32MultiArray Data);
};

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(F_std_msgs_Float32MultiArrayDelegate, F_std_msgs_Float32MultiArray, Data);

UCLASS()
class U_std_msgs_Float32MultiArraySubscriber : public USubscriber
{
	GENERATED_UCLASS_BODY()
public:
	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	static U_std_msgs_Float32MultiArraySubscriber * Create_Float32MultiArray_Subscriber(FString _TopicName);

	virtual void ProccessMsg(rapidjson::Value & obj);

	UPROPERTY(BlueprintAssignable, Category = "Robot OS")
	F_std_msgs_Float32MultiArrayDelegate OnFloat32MultiArrayData;

	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	virtual void OnRecieve(F_std_msgs_Float32MultiArray Data);
};









USTRUCT()
struct F_std_msgs_ByteMultiArray
{

	GENERATED_USTRUCT_BODY()

    
		
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Robot OS")
		F_std_msgs_MultiArrayLayout layout;
		
    
		
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Robot OS")
		TArray<uint8> data;
		
    

	rapidjson::Value Serialization(rapidjson::Document & d);
	void Unserialization(rapidjson::Value & v);

	std::string TypeName = "std_msgs/ByteMultiArray";

};


UCLASS()
class U_std_msgs_ByteMultiArrayAdvertiser : public UAdvertiser
{

	GENERATED_UCLASS_BODY()

public:
	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	static U_std_msgs_ByteMultiArrayAdvertiser * Create_ByteMultiArray_Advertiser(FString TopicName);

	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	void Publish(F_std_msgs_ByteMultiArray Data);
};

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(F_std_msgs_ByteMultiArrayDelegate, F_std_msgs_ByteMultiArray, Data);

UCLASS()
class U_std_msgs_ByteMultiArraySubscriber : public USubscriber
{
	GENERATED_UCLASS_BODY()
public:
	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	static U_std_msgs_ByteMultiArraySubscriber * Create_ByteMultiArray_Subscriber(FString _TopicName);

	virtual void ProccessMsg(rapidjson::Value & obj);

	UPROPERTY(BlueprintAssignable, Category = "Robot OS")
	F_std_msgs_ByteMultiArrayDelegate OnByteMultiArrayData;

	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	virtual void OnRecieve(F_std_msgs_ByteMultiArray Data);
};









USTRUCT()
struct F_std_msgs_UInt8MultiArray
{

	GENERATED_USTRUCT_BODY()

    
		
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Robot OS")
		F_std_msgs_MultiArrayLayout layout;
		
    
		
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Robot OS")
		TArray<uint8> data;
		
    

	rapidjson::Value Serialization(rapidjson::Document & d);
	void Unserialization(rapidjson::Value & v);

	std::string TypeName = "std_msgs/UInt8MultiArray";

};


UCLASS()
class U_std_msgs_UInt8MultiArrayAdvertiser : public UAdvertiser
{

	GENERATED_UCLASS_BODY()

public:
	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	static U_std_msgs_UInt8MultiArrayAdvertiser * Create_UInt8MultiArray_Advertiser(FString TopicName);

	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	void Publish(F_std_msgs_UInt8MultiArray Data);
};

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(F_std_msgs_UInt8MultiArrayDelegate, F_std_msgs_UInt8MultiArray, Data);

UCLASS()
class U_std_msgs_UInt8MultiArraySubscriber : public USubscriber
{
	GENERATED_UCLASS_BODY()
public:
	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	static U_std_msgs_UInt8MultiArraySubscriber * Create_UInt8MultiArray_Subscriber(FString _TopicName);

	virtual void ProccessMsg(rapidjson::Value & obj);

	UPROPERTY(BlueprintAssignable, Category = "Robot OS")
	F_std_msgs_UInt8MultiArrayDelegate OnUInt8MultiArrayData;

	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	virtual void OnRecieve(F_std_msgs_UInt8MultiArray Data);
};









USTRUCT()
struct F_std_msgs_Int32MultiArray
{

	GENERATED_USTRUCT_BODY()

    
		
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Robot OS")
		F_std_msgs_MultiArrayLayout layout;
		
    
		
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Robot OS")
		TArray<int32> data;
		
    

	rapidjson::Value Serialization(rapidjson::Document & d);
	void Unserialization(rapidjson::Value & v);

	std::string TypeName = "std_msgs/Int32MultiArray";

};


UCLASS()
class U_std_msgs_Int32MultiArrayAdvertiser : public UAdvertiser
{

	GENERATED_UCLASS_BODY()

public:
	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	static U_std_msgs_Int32MultiArrayAdvertiser * Create_Int32MultiArray_Advertiser(FString TopicName);

	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	void Publish(F_std_msgs_Int32MultiArray Data);
};

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(F_std_msgs_Int32MultiArrayDelegate, F_std_msgs_Int32MultiArray, Data);

UCLASS()
class U_std_msgs_Int32MultiArraySubscriber : public USubscriber
{
	GENERATED_UCLASS_BODY()
public:
	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	static U_std_msgs_Int32MultiArraySubscriber * Create_Int32MultiArray_Subscriber(FString _TopicName);

	virtual void ProccessMsg(rapidjson::Value & obj);

	UPROPERTY(BlueprintAssignable, Category = "Robot OS")
	F_std_msgs_Int32MultiArrayDelegate OnInt32MultiArrayData;

	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	virtual void OnRecieve(F_std_msgs_Int32MultiArray Data);
};









USTRUCT()
struct F_std_msgs_UInt32MultiArray
{

	GENERATED_USTRUCT_BODY()

    
		
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Robot OS")
		F_std_msgs_MultiArrayLayout layout;
		
    
		
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Robot OS")
		TArray<int32> data;
		
    

	rapidjson::Value Serialization(rapidjson::Document & d);
	void Unserialization(rapidjson::Value & v);

	std::string TypeName = "std_msgs/UInt32MultiArray";

};


UCLASS()
class U_std_msgs_UInt32MultiArrayAdvertiser : public UAdvertiser
{

	GENERATED_UCLASS_BODY()

public:
	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	static U_std_msgs_UInt32MultiArrayAdvertiser * Create_UInt32MultiArray_Advertiser(FString TopicName);

	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	void Publish(F_std_msgs_UInt32MultiArray Data);
};

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(F_std_msgs_UInt32MultiArrayDelegate, F_std_msgs_UInt32MultiArray, Data);

UCLASS()
class U_std_msgs_UInt32MultiArraySubscriber : public USubscriber
{
	GENERATED_UCLASS_BODY()
public:
	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	static U_std_msgs_UInt32MultiArraySubscriber * Create_UInt32MultiArray_Subscriber(FString _TopicName);

	virtual void ProccessMsg(rapidjson::Value & obj);

	UPROPERTY(BlueprintAssignable, Category = "Robot OS")
	F_std_msgs_UInt32MultiArrayDelegate OnUInt32MultiArrayData;

	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	virtual void OnRecieve(F_std_msgs_UInt32MultiArray Data);
};









USTRUCT()
struct F_std_msgs_Float64MultiArray
{

	GENERATED_USTRUCT_BODY()

    
		
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Robot OS")
		F_std_msgs_MultiArrayLayout layout;
		
    
		
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Robot OS")
		TArray<float> data;
		
    

	rapidjson::Value Serialization(rapidjson::Document & d);
	void Unserialization(rapidjson::Value & v);

	std::string TypeName = "std_msgs/Float64MultiArray";

};


UCLASS()
class U_std_msgs_Float64MultiArrayAdvertiser : public UAdvertiser
{

	GENERATED_UCLASS_BODY()

public:
	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	static U_std_msgs_Float64MultiArrayAdvertiser * Create_Float64MultiArray_Advertiser(FString TopicName);

	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	void Publish(F_std_msgs_Float64MultiArray Data);
};

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(F_std_msgs_Float64MultiArrayDelegate, F_std_msgs_Float64MultiArray, Data);

UCLASS()
class U_std_msgs_Float64MultiArraySubscriber : public USubscriber
{
	GENERATED_UCLASS_BODY()
public:
	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	static U_std_msgs_Float64MultiArraySubscriber * Create_Float64MultiArray_Subscriber(FString _TopicName);

	virtual void ProccessMsg(rapidjson::Value & obj);

	UPROPERTY(BlueprintAssignable, Category = "Robot OS")
	F_std_msgs_Float64MultiArrayDelegate OnFloat64MultiArrayData;

	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	virtual void OnRecieve(F_std_msgs_Float64MultiArray Data);
};









USTRUCT()
struct F_sensor_msgs_NavSatFix
{

	GENERATED_USTRUCT_BODY()

    
		
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Robot OS")
		F_std_msgs_Header header;
		
    
		
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Robot OS")
		F_sensor_msgs_NavSatStatus status;
		
    
		
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Robot OS")
		float latitude;
		
    
		
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Robot OS")
		float longitude;
		
    
		
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Robot OS")
		float altitude;
		
    
		
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Robot OS")
		uint8 position_covariance_type;
		
    
		
		UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Robot OS")
		uint8 CONSTANT_COVARIANCE_TYPE_UNKNOWN = 0;
		
    
		
		UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Robot OS")
		uint8 CONSTANT_COVARIANCE_TYPE_APPROXIMATED = 1;
		
    
		
		UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Robot OS")
		uint8 CONSTANT_COVARIANCE_TYPE_DIAGONAL_KNOWN = 2;
		
    
		
		UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Robot OS")
		uint8 CONSTANT_COVARIANCE_TYPE_KNOWN = 3;
		
    

	rapidjson::Value Serialization(rapidjson::Document & d);
	void Unserialization(rapidjson::Value & v);

	std::string TypeName = "sensor_msgs/NavSatFix";

};


UCLASS()
class U_sensor_msgs_NavSatFixAdvertiser : public UAdvertiser
{

	GENERATED_UCLASS_BODY()

public:
	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	static U_sensor_msgs_NavSatFixAdvertiser * Create_NavSatFix_Advertiser(FString TopicName);

	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	void Publish(F_sensor_msgs_NavSatFix Data);
};

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(F_sensor_msgs_NavSatFixDelegate, F_sensor_msgs_NavSatFix, Data);

UCLASS()
class U_sensor_msgs_NavSatFixSubscriber : public USubscriber
{
	GENERATED_UCLASS_BODY()
public:
	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	static U_sensor_msgs_NavSatFixSubscriber * Create_NavSatFix_Subscriber(FString _TopicName);

	virtual void ProccessMsg(rapidjson::Value & obj);

	UPROPERTY(BlueprintAssignable, Category = "Robot OS")
	F_sensor_msgs_NavSatFixDelegate OnNavSatFixData;

	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	virtual void OnRecieve(F_sensor_msgs_NavSatFix Data);
};









USTRUCT()
struct F_std_msgs_Float64
{

	GENERATED_USTRUCT_BODY()

    
		
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Robot OS")
		float data;
		
    

	rapidjson::Value Serialization(rapidjson::Document & d);
	void Unserialization(rapidjson::Value & v);

	std::string TypeName = "std_msgs/Float64";

};


UCLASS()
class U_std_msgs_Float64Advertiser : public UAdvertiser
{

	GENERATED_UCLASS_BODY()

public:
	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	static U_std_msgs_Float64Advertiser * Create_Float64_Advertiser(FString TopicName);

	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	void Publish(F_std_msgs_Float64 Data);
};

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(F_std_msgs_Float64Delegate, F_std_msgs_Float64, Data);

UCLASS()
class U_std_msgs_Float64Subscriber : public USubscriber
{
	GENERATED_UCLASS_BODY()
public:
	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	static U_std_msgs_Float64Subscriber * Create_Float64_Subscriber(FString _TopicName);

	virtual void ProccessMsg(rapidjson::Value & obj);

	UPROPERTY(BlueprintAssignable, Category = "Robot OS")
	F_std_msgs_Float64Delegate OnFloat64Data;

	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	virtual void OnRecieve(F_std_msgs_Float64 Data);
};









USTRUCT()
struct F_sensor_msgs_FluidPressure
{

	GENERATED_USTRUCT_BODY()

    
		
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Robot OS")
		F_std_msgs_Header header;
		
    
		
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Robot OS")
		float fluid_pressure;
		
    
		
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Robot OS")
		float variance;
		
    

	rapidjson::Value Serialization(rapidjson::Document & d);
	void Unserialization(rapidjson::Value & v);

	std::string TypeName = "sensor_msgs/FluidPressure";

};


UCLASS()
class U_sensor_msgs_FluidPressureAdvertiser : public UAdvertiser
{

	GENERATED_UCLASS_BODY()

public:
	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	static U_sensor_msgs_FluidPressureAdvertiser * Create_FluidPressure_Advertiser(FString TopicName);

	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	void Publish(F_sensor_msgs_FluidPressure Data);
};

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(F_sensor_msgs_FluidPressureDelegate, F_sensor_msgs_FluidPressure, Data);

UCLASS()
class U_sensor_msgs_FluidPressureSubscriber : public USubscriber
{
	GENERATED_UCLASS_BODY()
public:
	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	static U_sensor_msgs_FluidPressureSubscriber * Create_FluidPressure_Subscriber(FString _TopicName);

	virtual void ProccessMsg(rapidjson::Value & obj);

	UPROPERTY(BlueprintAssignable, Category = "Robot OS")
	F_sensor_msgs_FluidPressureDelegate OnFluidPressureData;

	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	virtual void OnRecieve(F_sensor_msgs_FluidPressure Data);
};









USTRUCT()
struct F_std_msgs_Int64MultiArray
{

	GENERATED_USTRUCT_BODY()

    
		
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Robot OS")
		F_std_msgs_MultiArrayLayout layout;
		
    
		
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Robot OS")
		TArray<int32> data;
		
    

	rapidjson::Value Serialization(rapidjson::Document & d);
	void Unserialization(rapidjson::Value & v);

	std::string TypeName = "std_msgs/Int64MultiArray";

};


UCLASS()
class U_std_msgs_Int64MultiArrayAdvertiser : public UAdvertiser
{

	GENERATED_UCLASS_BODY()

public:
	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	static U_std_msgs_Int64MultiArrayAdvertiser * Create_Int64MultiArray_Advertiser(FString TopicName);

	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	void Publish(F_std_msgs_Int64MultiArray Data);
};

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(F_std_msgs_Int64MultiArrayDelegate, F_std_msgs_Int64MultiArray, Data);

UCLASS()
class U_std_msgs_Int64MultiArraySubscriber : public USubscriber
{
	GENERATED_UCLASS_BODY()
public:
	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	static U_std_msgs_Int64MultiArraySubscriber * Create_Int64MultiArray_Subscriber(FString _TopicName);

	virtual void ProccessMsg(rapidjson::Value & obj);

	UPROPERTY(BlueprintAssignable, Category = "Robot OS")
	F_std_msgs_Int64MultiArrayDelegate OnInt64MultiArrayData;

	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	virtual void OnRecieve(F_std_msgs_Int64MultiArray Data);
};









USTRUCT()
struct F_sensor_msgs_PointField
{

	GENERATED_USTRUCT_BODY()

    
		
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Robot OS")
		FString name;
		
    
		
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Robot OS")
		int32 offset;
		
    
		
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Robot OS")
		uint8 datatype;
		
    
		
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Robot OS")
		int32 count;
		
    
		
		UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Robot OS")
		uint8 CONSTANT_INT8 = 1;
		
    
		
		UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Robot OS")
		uint8 CONSTANT_UINT8 = 2;
		
    
		
		UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Robot OS")
		uint8 CONSTANT_INT16 = 3;
		
    
		
		UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Robot OS")
		uint8 CONSTANT_UINT16 = 4;
		
    
		
		UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Robot OS")
		uint8 CONSTANT_INT32 = 5;
		
    
		
		UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Robot OS")
		uint8 CONSTANT_UINT32 = 6;
		
    
		
		UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Robot OS")
		uint8 CONSTANT_FLOAT32 = 7;
		
    
		
		UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Robot OS")
		uint8 CONSTANT_FLOAT64 = 8;
		
    

	rapidjson::Value Serialization(rapidjson::Document & d);
	void Unserialization(rapidjson::Value & v);

	std::string TypeName = "sensor_msgs/PointField";

};


UCLASS()
class U_sensor_msgs_PointFieldAdvertiser : public UAdvertiser
{

	GENERATED_UCLASS_BODY()

public:
	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	static U_sensor_msgs_PointFieldAdvertiser * Create_PointField_Advertiser(FString TopicName);

	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	void Publish(F_sensor_msgs_PointField Data);
};

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(F_sensor_msgs_PointFieldDelegate, F_sensor_msgs_PointField, Data);

UCLASS()
class U_sensor_msgs_PointFieldSubscriber : public USubscriber
{
	GENERATED_UCLASS_BODY()
public:
	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	static U_sensor_msgs_PointFieldSubscriber * Create_PointField_Subscriber(FString _TopicName);

	virtual void ProccessMsg(rapidjson::Value & obj);

	UPROPERTY(BlueprintAssignable, Category = "Robot OS")
	F_sensor_msgs_PointFieldDelegate OnPointFieldData;

	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	virtual void OnRecieve(F_sensor_msgs_PointField Data);
};









USTRUCT()
struct F_sensor_msgs_ChannelFloat32
{

	GENERATED_USTRUCT_BODY()

    
		
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Robot OS")
		FString name;
		
    

	rapidjson::Value Serialization(rapidjson::Document & d);
	void Unserialization(rapidjson::Value & v);

	std::string TypeName = "sensor_msgs/ChannelFloat32";

};


UCLASS()
class U_sensor_msgs_ChannelFloat32Advertiser : public UAdvertiser
{

	GENERATED_UCLASS_BODY()

public:
	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	static U_sensor_msgs_ChannelFloat32Advertiser * Create_ChannelFloat32_Advertiser(FString TopicName);

	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	void Publish(F_sensor_msgs_ChannelFloat32 Data);
};

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(F_sensor_msgs_ChannelFloat32Delegate, F_sensor_msgs_ChannelFloat32, Data);

UCLASS()
class U_sensor_msgs_ChannelFloat32Subscriber : public USubscriber
{
	GENERATED_UCLASS_BODY()
public:
	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	static U_sensor_msgs_ChannelFloat32Subscriber * Create_ChannelFloat32_Subscriber(FString _TopicName);

	virtual void ProccessMsg(rapidjson::Value & obj);

	UPROPERTY(BlueprintAssignable, Category = "Robot OS")
	F_sensor_msgs_ChannelFloat32Delegate OnChannelFloat32Data;

	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	virtual void OnRecieve(F_sensor_msgs_ChannelFloat32 Data);
};









USTRUCT()
struct F_std_msgs_ColorRGBA
{

	GENERATED_USTRUCT_BODY()

    
		
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Robot OS")
		float r;
		
    
		
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Robot OS")
		float g;
		
    
		
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Robot OS")
		float b;
		
    
		
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Robot OS")
		float a;
		
    

	rapidjson::Value Serialization(rapidjson::Document & d);
	void Unserialization(rapidjson::Value & v);

	std::string TypeName = "std_msgs/ColorRGBA";

};


UCLASS()
class U_std_msgs_ColorRGBAAdvertiser : public UAdvertiser
{

	GENERATED_UCLASS_BODY()

public:
	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	static U_std_msgs_ColorRGBAAdvertiser * Create_ColorRGBA_Advertiser(FString TopicName);

	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	void Publish(F_std_msgs_ColorRGBA Data);
};

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(F_std_msgs_ColorRGBADelegate, F_std_msgs_ColorRGBA, Data);

UCLASS()
class U_std_msgs_ColorRGBASubscriber : public USubscriber
{
	GENERATED_UCLASS_BODY()
public:
	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	static U_std_msgs_ColorRGBASubscriber * Create_ColorRGBA_Subscriber(FString _TopicName);

	virtual void ProccessMsg(rapidjson::Value & obj);

	UPROPERTY(BlueprintAssignable, Category = "Robot OS")
	F_std_msgs_ColorRGBADelegate OnColorRGBAData;

	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	virtual void OnRecieve(F_std_msgs_ColorRGBA Data);
};









USTRUCT()
struct F_sensor_msgs_Temperature
{

	GENERATED_USTRUCT_BODY()

    
		
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Robot OS")
		F_std_msgs_Header header;
		
    
		
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Robot OS")
		float temperature;
		
    
		
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Robot OS")
		float variance;
		
    

	rapidjson::Value Serialization(rapidjson::Document & d);
	void Unserialization(rapidjson::Value & v);

	std::string TypeName = "sensor_msgs/Temperature";

};


UCLASS()
class U_sensor_msgs_TemperatureAdvertiser : public UAdvertiser
{

	GENERATED_UCLASS_BODY()

public:
	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	static U_sensor_msgs_TemperatureAdvertiser * Create_Temperature_Advertiser(FString TopicName);

	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	void Publish(F_sensor_msgs_Temperature Data);
};

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(F_sensor_msgs_TemperatureDelegate, F_sensor_msgs_Temperature, Data);

UCLASS()
class U_sensor_msgs_TemperatureSubscriber : public USubscriber
{
	GENERATED_UCLASS_BODY()
public:
	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	static U_sensor_msgs_TemperatureSubscriber * Create_Temperature_Subscriber(FString _TopicName);

	virtual void ProccessMsg(rapidjson::Value & obj);

	UPROPERTY(BlueprintAssignable, Category = "Robot OS")
	F_sensor_msgs_TemperatureDelegate OnTemperatureData;

	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	virtual void OnRecieve(F_sensor_msgs_Temperature Data);
};









USTRUCT()
struct F_dji_sdk_MissionWaypointAction
{

	GENERATED_USTRUCT_BODY()

    
		
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Robot OS")
		uint8 action_repeat;
		
    

	rapidjson::Value Serialization(rapidjson::Document & d);
	void Unserialization(rapidjson::Value & v);

	std::string TypeName = "dji_sdk/MissionWaypointAction";

};


UCLASS()
class U_dji_sdk_MissionWaypointActionAdvertiser : public UAdvertiser
{

	GENERATED_UCLASS_BODY()

public:
	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	static U_dji_sdk_MissionWaypointActionAdvertiser * Create_MissionWaypointAction_Advertiser(FString TopicName);

	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	void Publish(F_dji_sdk_MissionWaypointAction Data);
};

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(F_dji_sdk_MissionWaypointActionDelegate, F_dji_sdk_MissionWaypointAction, Data);

UCLASS()
class U_dji_sdk_MissionWaypointActionSubscriber : public USubscriber
{
	GENERATED_UCLASS_BODY()
public:
	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	static U_dji_sdk_MissionWaypointActionSubscriber * Create_MissionWaypointAction_Subscriber(FString _TopicName);

	virtual void ProccessMsg(rapidjson::Value & obj);

	UPROPERTY(BlueprintAssignable, Category = "Robot OS")
	F_dji_sdk_MissionWaypointActionDelegate OnMissionWaypointActionData;

	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	virtual void OnRecieve(F_dji_sdk_MissionWaypointAction Data);
};









USTRUCT()
struct F_dji_sdk_Compass
{

	GENERATED_USTRUCT_BODY()

    
		
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Robot OS")
		F_std_msgs_Header header;
		
    
		
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Robot OS")
		int32 ts;
		
    
		
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Robot OS")
		int32 x;
		
    
		
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Robot OS")
		int32 y;
		
    
		
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Robot OS")
		int32 z;
		
    

	rapidjson::Value Serialization(rapidjson::Document & d);
	void Unserialization(rapidjson::Value & v);

	std::string TypeName = "dji_sdk/Compass";

};


UCLASS()
class U_dji_sdk_CompassAdvertiser : public UAdvertiser
{

	GENERATED_UCLASS_BODY()

public:
	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	static U_dji_sdk_CompassAdvertiser * Create_Compass_Advertiser(FString TopicName);

	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	void Publish(F_dji_sdk_Compass Data);
};

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(F_dji_sdk_CompassDelegate, F_dji_sdk_Compass, Data);

UCLASS()
class U_dji_sdk_CompassSubscriber : public USubscriber
{
	GENERATED_UCLASS_BODY()
public:
	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	static U_dji_sdk_CompassSubscriber * Create_Compass_Subscriber(FString _TopicName);

	virtual void ProccessMsg(rapidjson::Value & obj);

	UPROPERTY(BlueprintAssignable, Category = "Robot OS")
	F_dji_sdk_CompassDelegate OnCompassData;

	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	virtual void OnRecieve(F_dji_sdk_Compass Data);
};









USTRUCT()
struct F_sensor_msgs_MultiDOFJointState
{

	GENERATED_USTRUCT_BODY()

    
		
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Robot OS")
		F_std_msgs_Header header;
		
    

	rapidjson::Value Serialization(rapidjson::Document & d);
	void Unserialization(rapidjson::Value & v);

	std::string TypeName = "sensor_msgs/MultiDOFJointState";

};


UCLASS()
class U_sensor_msgs_MultiDOFJointStateAdvertiser : public UAdvertiser
{

	GENERATED_UCLASS_BODY()

public:
	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	static U_sensor_msgs_MultiDOFJointStateAdvertiser * Create_MultiDOFJointState_Advertiser(FString TopicName);

	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	void Publish(F_sensor_msgs_MultiDOFJointState Data);
};

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(F_sensor_msgs_MultiDOFJointStateDelegate, F_sensor_msgs_MultiDOFJointState, Data);

UCLASS()
class U_sensor_msgs_MultiDOFJointStateSubscriber : public USubscriber
{
	GENERATED_UCLASS_BODY()
public:
	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	static U_sensor_msgs_MultiDOFJointStateSubscriber * Create_MultiDOFJointState_Subscriber(FString _TopicName);

	virtual void ProccessMsg(rapidjson::Value & obj);

	UPROPERTY(BlueprintAssignable, Category = "Robot OS")
	F_sensor_msgs_MultiDOFJointStateDelegate OnMultiDOFJointStateData;

	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	virtual void OnRecieve(F_sensor_msgs_MultiDOFJointState Data);
};









USTRUCT()
struct F_geometry_msgs_Vector3
{

	GENERATED_USTRUCT_BODY()

    
		
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Robot OS")
		float x;
		
    
		
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Robot OS")
		float y;
		
    
		
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Robot OS")
		float z;
		
    

	rapidjson::Value Serialization(rapidjson::Document & d);
	void Unserialization(rapidjson::Value & v);

	std::string TypeName = "geometry_msgs/Vector3";

};


UCLASS()
class U_geometry_msgs_Vector3Advertiser : public UAdvertiser
{

	GENERATED_UCLASS_BODY()

public:
	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	static U_geometry_msgs_Vector3Advertiser * Create_Vector3_Advertiser(FString TopicName);

	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	void Publish(F_geometry_msgs_Vector3 Data);
};

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(F_geometry_msgs_Vector3Delegate, F_geometry_msgs_Vector3, Data);

UCLASS()
class U_geometry_msgs_Vector3Subscriber : public USubscriber
{
	GENERATED_UCLASS_BODY()
public:
	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	static U_geometry_msgs_Vector3Subscriber * Create_Vector3_Subscriber(FString _TopicName);

	virtual void ProccessMsg(rapidjson::Value & obj);

	UPROPERTY(BlueprintAssignable, Category = "Robot OS")
	F_geometry_msgs_Vector3Delegate OnVector3Data;

	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	virtual void OnRecieve(F_geometry_msgs_Vector3 Data);
};









USTRUCT()
struct F_geometry_msgs_Inertia
{

	GENERATED_USTRUCT_BODY()

    
		
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Robot OS")
		float m;
		
    
		
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Robot OS")
		F_geometry_msgs_Vector3 com;
		
    
		
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Robot OS")
		float ixx;
		
    
		
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Robot OS")
		float ixy;
		
    
		
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Robot OS")
		float ixz;
		
    
		
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Robot OS")
		float iyy;
		
    
		
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Robot OS")
		float iyz;
		
    
		
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Robot OS")
		float izz;
		
    

	rapidjson::Value Serialization(rapidjson::Document & d);
	void Unserialization(rapidjson::Value & v);

	std::string TypeName = "geometry_msgs/Inertia";

};


UCLASS()
class U_geometry_msgs_InertiaAdvertiser : public UAdvertiser
{

	GENERATED_UCLASS_BODY()

public:
	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	static U_geometry_msgs_InertiaAdvertiser * Create_Inertia_Advertiser(FString TopicName);

	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	void Publish(F_geometry_msgs_Inertia Data);
};

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(F_geometry_msgs_InertiaDelegate, F_geometry_msgs_Inertia, Data);

UCLASS()
class U_geometry_msgs_InertiaSubscriber : public USubscriber
{
	GENERATED_UCLASS_BODY()
public:
	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	static U_geometry_msgs_InertiaSubscriber * Create_Inertia_Subscriber(FString _TopicName);

	virtual void ProccessMsg(rapidjson::Value & obj);

	UPROPERTY(BlueprintAssignable, Category = "Robot OS")
	F_geometry_msgs_InertiaDelegate OnInertiaData;

	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	virtual void OnRecieve(F_geometry_msgs_Inertia Data);
};









USTRUCT()
struct F_geometry_msgs_Vector3Stamped
{

	GENERATED_USTRUCT_BODY()

    
		
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Robot OS")
		F_std_msgs_Header header;
		
    
		
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Robot OS")
		F_geometry_msgs_Vector3 vector;
		
    

	rapidjson::Value Serialization(rapidjson::Document & d);
	void Unserialization(rapidjson::Value & v);

	std::string TypeName = "geometry_msgs/Vector3Stamped";

};


UCLASS()
class U_geometry_msgs_Vector3StampedAdvertiser : public UAdvertiser
{

	GENERATED_UCLASS_BODY()

public:
	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	static U_geometry_msgs_Vector3StampedAdvertiser * Create_Vector3Stamped_Advertiser(FString TopicName);

	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	void Publish(F_geometry_msgs_Vector3Stamped Data);
};

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(F_geometry_msgs_Vector3StampedDelegate, F_geometry_msgs_Vector3Stamped, Data);

UCLASS()
class U_geometry_msgs_Vector3StampedSubscriber : public USubscriber
{
	GENERATED_UCLASS_BODY()
public:
	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	static U_geometry_msgs_Vector3StampedSubscriber * Create_Vector3Stamped_Subscriber(FString _TopicName);

	virtual void ProccessMsg(rapidjson::Value & obj);

	UPROPERTY(BlueprintAssignable, Category = "Robot OS")
	F_geometry_msgs_Vector3StampedDelegate OnVector3StampedData;

	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	virtual void OnRecieve(F_geometry_msgs_Vector3Stamped Data);
};









USTRUCT()
struct F_geometry_msgs_InertiaStamped
{

	GENERATED_USTRUCT_BODY()

    
		
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Robot OS")
		F_std_msgs_Header header;
		
    
		
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Robot OS")
		F_geometry_msgs_Inertia inertia;
		
    

	rapidjson::Value Serialization(rapidjson::Document & d);
	void Unserialization(rapidjson::Value & v);

	std::string TypeName = "geometry_msgs/InertiaStamped";

};


UCLASS()
class U_geometry_msgs_InertiaStampedAdvertiser : public UAdvertiser
{

	GENERATED_UCLASS_BODY()

public:
	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	static U_geometry_msgs_InertiaStampedAdvertiser * Create_InertiaStamped_Advertiser(FString TopicName);

	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	void Publish(F_geometry_msgs_InertiaStamped Data);
};

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(F_geometry_msgs_InertiaStampedDelegate, F_geometry_msgs_InertiaStamped, Data);

UCLASS()
class U_geometry_msgs_InertiaStampedSubscriber : public USubscriber
{
	GENERATED_UCLASS_BODY()
public:
	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	static U_geometry_msgs_InertiaStampedSubscriber * Create_InertiaStamped_Subscriber(FString _TopicName);

	virtual void ProccessMsg(rapidjson::Value & obj);

	UPROPERTY(BlueprintAssignable, Category = "Robot OS")
	F_geometry_msgs_InertiaStampedDelegate OnInertiaStampedData;

	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	virtual void OnRecieve(F_geometry_msgs_InertiaStamped Data);
};









USTRUCT()
struct F_geometry_msgs_Accel
{

	GENERATED_USTRUCT_BODY()

    
		
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Robot OS")
		F_geometry_msgs_Vector3 linear;
		
    
		
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Robot OS")
		F_geometry_msgs_Vector3 angular;
		
    

	rapidjson::Value Serialization(rapidjson::Document & d);
	void Unserialization(rapidjson::Value & v);

	std::string TypeName = "geometry_msgs/Accel";

};


UCLASS()
class U_geometry_msgs_AccelAdvertiser : public UAdvertiser
{

	GENERATED_UCLASS_BODY()

public:
	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	static U_geometry_msgs_AccelAdvertiser * Create_Accel_Advertiser(FString TopicName);

	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	void Publish(F_geometry_msgs_Accel Data);
};

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(F_geometry_msgs_AccelDelegate, F_geometry_msgs_Accel, Data);

UCLASS()
class U_geometry_msgs_AccelSubscriber : public USubscriber
{
	GENERATED_UCLASS_BODY()
public:
	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	static U_geometry_msgs_AccelSubscriber * Create_Accel_Subscriber(FString _TopicName);

	virtual void ProccessMsg(rapidjson::Value & obj);

	UPROPERTY(BlueprintAssignable, Category = "Robot OS")
	F_geometry_msgs_AccelDelegate OnAccelData;

	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	virtual void OnRecieve(F_geometry_msgs_Accel Data);
};









USTRUCT()
struct F_geometry_msgs_AccelStamped
{

	GENERATED_USTRUCT_BODY()

    
		
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Robot OS")
		F_std_msgs_Header header;
		
    
		
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Robot OS")
		F_geometry_msgs_Accel accel;
		
    

	rapidjson::Value Serialization(rapidjson::Document & d);
	void Unserialization(rapidjson::Value & v);

	std::string TypeName = "geometry_msgs/AccelStamped";

};


UCLASS()
class U_geometry_msgs_AccelStampedAdvertiser : public UAdvertiser
{

	GENERATED_UCLASS_BODY()

public:
	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	static U_geometry_msgs_AccelStampedAdvertiser * Create_AccelStamped_Advertiser(FString TopicName);

	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	void Publish(F_geometry_msgs_AccelStamped Data);
};

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(F_geometry_msgs_AccelStampedDelegate, F_geometry_msgs_AccelStamped, Data);

UCLASS()
class U_geometry_msgs_AccelStampedSubscriber : public USubscriber
{
	GENERATED_UCLASS_BODY()
public:
	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	static U_geometry_msgs_AccelStampedSubscriber * Create_AccelStamped_Subscriber(FString _TopicName);

	virtual void ProccessMsg(rapidjson::Value & obj);

	UPROPERTY(BlueprintAssignable, Category = "Robot OS")
	F_geometry_msgs_AccelStampedDelegate OnAccelStampedData;

	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	virtual void OnRecieve(F_geometry_msgs_AccelStamped Data);
};









USTRUCT()
struct F_geometry_msgs_Twist
{

	GENERATED_USTRUCT_BODY()

    
		
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Robot OS")
		F_geometry_msgs_Vector3 linear;
		
    
		
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Robot OS")
		F_geometry_msgs_Vector3 angular;
		
    

	rapidjson::Value Serialization(rapidjson::Document & d);
	void Unserialization(rapidjson::Value & v);

	std::string TypeName = "geometry_msgs/Twist";

};


UCLASS()
class U_geometry_msgs_TwistAdvertiser : public UAdvertiser
{

	GENERATED_UCLASS_BODY()

public:
	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	static U_geometry_msgs_TwistAdvertiser * Create_Twist_Advertiser(FString TopicName);

	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	void Publish(F_geometry_msgs_Twist Data);
};

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(F_geometry_msgs_TwistDelegate, F_geometry_msgs_Twist, Data);

UCLASS()
class U_geometry_msgs_TwistSubscriber : public USubscriber
{
	GENERATED_UCLASS_BODY()
public:
	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	static U_geometry_msgs_TwistSubscriber * Create_Twist_Subscriber(FString _TopicName);

	virtual void ProccessMsg(rapidjson::Value & obj);

	UPROPERTY(BlueprintAssignable, Category = "Robot OS")
	F_geometry_msgs_TwistDelegate OnTwistData;

	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	virtual void OnRecieve(F_geometry_msgs_Twist Data);
};









USTRUCT()
struct F_geometry_msgs_TwistStamped
{

	GENERATED_USTRUCT_BODY()

    
		
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Robot OS")
		F_std_msgs_Header header;
		
    
		
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Robot OS")
		F_geometry_msgs_Twist twist;
		
    

	rapidjson::Value Serialization(rapidjson::Document & d);
	void Unserialization(rapidjson::Value & v);

	std::string TypeName = "geometry_msgs/TwistStamped";

};


UCLASS()
class U_geometry_msgs_TwistStampedAdvertiser : public UAdvertiser
{

	GENERATED_UCLASS_BODY()

public:
	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	static U_geometry_msgs_TwistStampedAdvertiser * Create_TwistStamped_Advertiser(FString TopicName);

	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	void Publish(F_geometry_msgs_TwistStamped Data);
};

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(F_geometry_msgs_TwistStampedDelegate, F_geometry_msgs_TwistStamped, Data);

UCLASS()
class U_geometry_msgs_TwistStampedSubscriber : public USubscriber
{
	GENERATED_UCLASS_BODY()
public:
	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	static U_geometry_msgs_TwistStampedSubscriber * Create_TwistStamped_Subscriber(FString _TopicName);

	virtual void ProccessMsg(rapidjson::Value & obj);

	UPROPERTY(BlueprintAssignable, Category = "Robot OS")
	F_geometry_msgs_TwistStampedDelegate OnTwistStampedData;

	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	virtual void OnRecieve(F_geometry_msgs_TwistStamped Data);
};









USTRUCT()
struct F_sensor_msgs_Imu
{

	GENERATED_USTRUCT_BODY()

    
		
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Robot OS")
		F_std_msgs_Header header;
		
    
		
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Robot OS")
		F_geometry_msgs_Quaternion orientation;
		
    
		
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Robot OS")
		F_geometry_msgs_Vector3 angular_velocity;
		
    
		
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Robot OS")
		F_geometry_msgs_Vector3 linear_acceleration;
		
    

	rapidjson::Value Serialization(rapidjson::Document & d);
	void Unserialization(rapidjson::Value & v);

	std::string TypeName = "sensor_msgs/Imu";

};


UCLASS()
class U_sensor_msgs_ImuAdvertiser : public UAdvertiser
{

	GENERATED_UCLASS_BODY()

public:
	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	static U_sensor_msgs_ImuAdvertiser * Create_Imu_Advertiser(FString TopicName);

	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	void Publish(F_sensor_msgs_Imu Data);
};

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(F_sensor_msgs_ImuDelegate, F_sensor_msgs_Imu, Data);

UCLASS()
class U_sensor_msgs_ImuSubscriber : public USubscriber
{
	GENERATED_UCLASS_BODY()
public:
	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	static U_sensor_msgs_ImuSubscriber * Create_Imu_Subscriber(FString _TopicName);

	virtual void ProccessMsg(rapidjson::Value & obj);

	UPROPERTY(BlueprintAssignable, Category = "Robot OS")
	F_sensor_msgs_ImuDelegate OnImuData;

	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	virtual void OnRecieve(F_sensor_msgs_Imu Data);
};









USTRUCT()
struct F_geometry_msgs_TwistWithCovariance
{

	GENERATED_USTRUCT_BODY()

    
		
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Robot OS")
		F_geometry_msgs_Twist twist;
		
    

	rapidjson::Value Serialization(rapidjson::Document & d);
	void Unserialization(rapidjson::Value & v);

	std::string TypeName = "geometry_msgs/TwistWithCovariance";

};


UCLASS()
class U_geometry_msgs_TwistWithCovarianceAdvertiser : public UAdvertiser
{

	GENERATED_UCLASS_BODY()

public:
	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	static U_geometry_msgs_TwistWithCovarianceAdvertiser * Create_TwistWithCovariance_Advertiser(FString TopicName);

	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	void Publish(F_geometry_msgs_TwistWithCovariance Data);
};

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(F_geometry_msgs_TwistWithCovarianceDelegate, F_geometry_msgs_TwistWithCovariance, Data);

UCLASS()
class U_geometry_msgs_TwistWithCovarianceSubscriber : public USubscriber
{
	GENERATED_UCLASS_BODY()
public:
	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	static U_geometry_msgs_TwistWithCovarianceSubscriber * Create_TwistWithCovariance_Subscriber(FString _TopicName);

	virtual void ProccessMsg(rapidjson::Value & obj);

	UPROPERTY(BlueprintAssignable, Category = "Robot OS")
	F_geometry_msgs_TwistWithCovarianceDelegate OnTwistWithCovarianceData;

	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	virtual void OnRecieve(F_geometry_msgs_TwistWithCovariance Data);
};









USTRUCT()
struct F_geometry_msgs_Transform
{

	GENERATED_USTRUCT_BODY()

    
		
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Robot OS")
		F_geometry_msgs_Vector3 translation;
		
    
		
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Robot OS")
		F_geometry_msgs_Quaternion rotation;
		
    

	rapidjson::Value Serialization(rapidjson::Document & d);
	void Unserialization(rapidjson::Value & v);

	std::string TypeName = "geometry_msgs/Transform";

};


UCLASS()
class U_geometry_msgs_TransformAdvertiser : public UAdvertiser
{

	GENERATED_UCLASS_BODY()

public:
	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	static U_geometry_msgs_TransformAdvertiser * Create_Transform_Advertiser(FString TopicName);

	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	void Publish(F_geometry_msgs_Transform Data);
};

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(F_geometry_msgs_TransformDelegate, F_geometry_msgs_Transform, Data);

UCLASS()
class U_geometry_msgs_TransformSubscriber : public USubscriber
{
	GENERATED_UCLASS_BODY()
public:
	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	static U_geometry_msgs_TransformSubscriber * Create_Transform_Subscriber(FString _TopicName);

	virtual void ProccessMsg(rapidjson::Value & obj);

	UPROPERTY(BlueprintAssignable, Category = "Robot OS")
	F_geometry_msgs_TransformDelegate OnTransformData;

	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	virtual void OnRecieve(F_geometry_msgs_Transform Data);
};









USTRUCT()
struct F_trajectory_msgs_MultiDOFJointTrajectoryPoint
{

	GENERATED_USTRUCT_BODY()

    
		
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Robot OS")
		int32 time_from_start;
		
    
		
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Robot OS")
		TArray<F_geometry_msgs_Transform> transforms;
		
    
		
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Robot OS")
		TArray<F_geometry_msgs_Twist> velocities;
		
    

	rapidjson::Value Serialization(rapidjson::Document & d);
	void Unserialization(rapidjson::Value & v);

	std::string TypeName = "trajectory_msgs/MultiDOFJointTrajectoryPoint";

};


UCLASS()
class U_trajectory_msgs_MultiDOFJointTrajectoryPointAdvertiser : public UAdvertiser
{

	GENERATED_UCLASS_BODY()

public:
	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	static U_trajectory_msgs_MultiDOFJointTrajectoryPointAdvertiser * Create_MultiDOFJointTrajectoryPoint_Advertiser(FString TopicName);

	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	void Publish(F_trajectory_msgs_MultiDOFJointTrajectoryPoint Data);
};

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(F_trajectory_msgs_MultiDOFJointTrajectoryPointDelegate, F_trajectory_msgs_MultiDOFJointTrajectoryPoint, Data);

UCLASS()
class U_trajectory_msgs_MultiDOFJointTrajectoryPointSubscriber : public USubscriber
{
	GENERATED_UCLASS_BODY()
public:
	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	static U_trajectory_msgs_MultiDOFJointTrajectoryPointSubscriber * Create_MultiDOFJointTrajectoryPoint_Subscriber(FString _TopicName);

	virtual void ProccessMsg(rapidjson::Value & obj);

	UPROPERTY(BlueprintAssignable, Category = "Robot OS")
	F_trajectory_msgs_MultiDOFJointTrajectoryPointDelegate OnMultiDOFJointTrajectoryPointData;

	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	virtual void OnRecieve(F_trajectory_msgs_MultiDOFJointTrajectoryPoint Data);
};









USTRUCT()
struct F_geometry_msgs_TransformStamped
{

	GENERATED_USTRUCT_BODY()

    
		
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Robot OS")
		F_std_msgs_Header header;
		
    
		
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Robot OS")
		FString child_frame_id;
		
    
		
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Robot OS")
		F_geometry_msgs_Transform transform;
		
    

	rapidjson::Value Serialization(rapidjson::Document & d);
	void Unserialization(rapidjson::Value & v);

	std::string TypeName = "geometry_msgs/TransformStamped";

};


UCLASS()
class U_geometry_msgs_TransformStampedAdvertiser : public UAdvertiser
{

	GENERATED_UCLASS_BODY()

public:
	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	static U_geometry_msgs_TransformStampedAdvertiser * Create_TransformStamped_Advertiser(FString TopicName);

	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	void Publish(F_geometry_msgs_TransformStamped Data);
};

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(F_geometry_msgs_TransformStampedDelegate, F_geometry_msgs_TransformStamped, Data);

UCLASS()
class U_geometry_msgs_TransformStampedSubscriber : public USubscriber
{
	GENERATED_UCLASS_BODY()
public:
	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	static U_geometry_msgs_TransformStampedSubscriber * Create_TransformStamped_Subscriber(FString _TopicName);

	virtual void ProccessMsg(rapidjson::Value & obj);

	UPROPERTY(BlueprintAssignable, Category = "Robot OS")
	F_geometry_msgs_TransformStampedDelegate OnTransformStampedData;

	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	virtual void OnRecieve(F_geometry_msgs_TransformStamped Data);
};









USTRUCT()
struct F_geometry_msgs_TwistWithCovarianceStamped
{

	GENERATED_USTRUCT_BODY()

    
		
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Robot OS")
		F_std_msgs_Header header;
		
    
		
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Robot OS")
		F_geometry_msgs_TwistWithCovariance twist;
		
    

	rapidjson::Value Serialization(rapidjson::Document & d);
	void Unserialization(rapidjson::Value & v);

	std::string TypeName = "geometry_msgs/TwistWithCovarianceStamped";

};


UCLASS()
class U_geometry_msgs_TwistWithCovarianceStampedAdvertiser : public UAdvertiser
{

	GENERATED_UCLASS_BODY()

public:
	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	static U_geometry_msgs_TwistWithCovarianceStampedAdvertiser * Create_TwistWithCovarianceStamped_Advertiser(FString TopicName);

	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	void Publish(F_geometry_msgs_TwistWithCovarianceStamped Data);
};

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(F_geometry_msgs_TwistWithCovarianceStampedDelegate, F_geometry_msgs_TwistWithCovarianceStamped, Data);

UCLASS()
class U_geometry_msgs_TwistWithCovarianceStampedSubscriber : public USubscriber
{
	GENERATED_UCLASS_BODY()
public:
	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	static U_geometry_msgs_TwistWithCovarianceStampedSubscriber * Create_TwistWithCovarianceStamped_Subscriber(FString _TopicName);

	virtual void ProccessMsg(rapidjson::Value & obj);

	UPROPERTY(BlueprintAssignable, Category = "Robot OS")
	F_geometry_msgs_TwistWithCovarianceStampedDelegate OnTwistWithCovarianceStampedData;

	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	virtual void OnRecieve(F_geometry_msgs_TwistWithCovarianceStamped Data);
};









USTRUCT()
struct F_geometry_msgs_AccelWithCovariance
{

	GENERATED_USTRUCT_BODY()

    
		
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Robot OS")
		F_geometry_msgs_Accel accel;
		
    

	rapidjson::Value Serialization(rapidjson::Document & d);
	void Unserialization(rapidjson::Value & v);

	std::string TypeName = "geometry_msgs/AccelWithCovariance";

};


UCLASS()
class U_geometry_msgs_AccelWithCovarianceAdvertiser : public UAdvertiser
{

	GENERATED_UCLASS_BODY()

public:
	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	static U_geometry_msgs_AccelWithCovarianceAdvertiser * Create_AccelWithCovariance_Advertiser(FString TopicName);

	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	void Publish(F_geometry_msgs_AccelWithCovariance Data);
};

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(F_geometry_msgs_AccelWithCovarianceDelegate, F_geometry_msgs_AccelWithCovariance, Data);

UCLASS()
class U_geometry_msgs_AccelWithCovarianceSubscriber : public USubscriber
{
	GENERATED_UCLASS_BODY()
public:
	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	static U_geometry_msgs_AccelWithCovarianceSubscriber * Create_AccelWithCovariance_Subscriber(FString _TopicName);

	virtual void ProccessMsg(rapidjson::Value & obj);

	UPROPERTY(BlueprintAssignable, Category = "Robot OS")
	F_geometry_msgs_AccelWithCovarianceDelegate OnAccelWithCovarianceData;

	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	virtual void OnRecieve(F_geometry_msgs_AccelWithCovariance Data);
};









USTRUCT()
struct F_std_msgs_Int8MultiArray
{

	GENERATED_USTRUCT_BODY()

    
		
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Robot OS")
		F_std_msgs_MultiArrayLayout layout;
		
    
		
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Robot OS")
		TArray<int32> data;
		
    

	rapidjson::Value Serialization(rapidjson::Document & d);
	void Unserialization(rapidjson::Value & v);

	std::string TypeName = "std_msgs/Int8MultiArray";

};


UCLASS()
class U_std_msgs_Int8MultiArrayAdvertiser : public UAdvertiser
{

	GENERATED_UCLASS_BODY()

public:
	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	static U_std_msgs_Int8MultiArrayAdvertiser * Create_Int8MultiArray_Advertiser(FString TopicName);

	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	void Publish(F_std_msgs_Int8MultiArray Data);
};

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(F_std_msgs_Int8MultiArrayDelegate, F_std_msgs_Int8MultiArray, Data);

UCLASS()
class U_std_msgs_Int8MultiArraySubscriber : public USubscriber
{
	GENERATED_UCLASS_BODY()
public:
	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	static U_std_msgs_Int8MultiArraySubscriber * Create_Int8MultiArray_Subscriber(FString _TopicName);

	virtual void ProccessMsg(rapidjson::Value & obj);

	UPROPERTY(BlueprintAssignable, Category = "Robot OS")
	F_std_msgs_Int8MultiArrayDelegate OnInt8MultiArrayData;

	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	virtual void OnRecieve(F_std_msgs_Int8MultiArray Data);
};









USTRUCT()
struct F_geometry_msgs_PoseArray
{

	GENERATED_USTRUCT_BODY()

    
		
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Robot OS")
		F_std_msgs_Header header;
		
    

	rapidjson::Value Serialization(rapidjson::Document & d);
	void Unserialization(rapidjson::Value & v);

	std::string TypeName = "geometry_msgs/PoseArray";

};


UCLASS()
class U_geometry_msgs_PoseArrayAdvertiser : public UAdvertiser
{

	GENERATED_UCLASS_BODY()

public:
	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	static U_geometry_msgs_PoseArrayAdvertiser * Create_PoseArray_Advertiser(FString TopicName);

	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	void Publish(F_geometry_msgs_PoseArray Data);
};

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(F_geometry_msgs_PoseArrayDelegate, F_geometry_msgs_PoseArray, Data);

UCLASS()
class U_geometry_msgs_PoseArraySubscriber : public USubscriber
{
	GENERATED_UCLASS_BODY()
public:
	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	static U_geometry_msgs_PoseArraySubscriber * Create_PoseArray_Subscriber(FString _TopicName);

	virtual void ProccessMsg(rapidjson::Value & obj);

	UPROPERTY(BlueprintAssignable, Category = "Robot OS")
	F_geometry_msgs_PoseArrayDelegate OnPoseArrayData;

	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	virtual void OnRecieve(F_geometry_msgs_PoseArray Data);
};









USTRUCT()
struct F_std_msgs_Time
{

	GENERATED_USTRUCT_BODY()

    
		
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Robot OS")
		int32 data;
		
    

	rapidjson::Value Serialization(rapidjson::Document & d);
	void Unserialization(rapidjson::Value & v);

	std::string TypeName = "std_msgs/Time";

};


UCLASS()
class U_std_msgs_TimeAdvertiser : public UAdvertiser
{

	GENERATED_UCLASS_BODY()

public:
	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	static U_std_msgs_TimeAdvertiser * Create_Time_Advertiser(FString TopicName);

	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	void Publish(F_std_msgs_Time Data);
};

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(F_std_msgs_TimeDelegate, F_std_msgs_Time, Data);

UCLASS()
class U_std_msgs_TimeSubscriber : public USubscriber
{
	GENERATED_UCLASS_BODY()
public:
	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	static U_std_msgs_TimeSubscriber * Create_Time_Subscriber(FString _TopicName);

	virtual void ProccessMsg(rapidjson::Value & obj);

	UPROPERTY(BlueprintAssignable, Category = "Robot OS")
	F_std_msgs_TimeDelegate OnTimeData;

	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	virtual void OnRecieve(F_std_msgs_Time Data);
};









USTRUCT()
struct F_dji_sdk_TransparentTransmissionData
{

	GENERATED_USTRUCT_BODY()

    

	rapidjson::Value Serialization(rapidjson::Document & d);
	void Unserialization(rapidjson::Value & v);

	std::string TypeName = "dji_sdk/TransparentTransmissionData";

};


UCLASS()
class U_dji_sdk_TransparentTransmissionDataAdvertiser : public UAdvertiser
{

	GENERATED_UCLASS_BODY()

public:
	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	static U_dji_sdk_TransparentTransmissionDataAdvertiser * Create_TransparentTransmissionData_Advertiser(FString TopicName);

	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	void Publish(F_dji_sdk_TransparentTransmissionData Data);
};

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(F_dji_sdk_TransparentTransmissionDataDelegate, F_dji_sdk_TransparentTransmissionData, Data);

UCLASS()
class U_dji_sdk_TransparentTransmissionDataSubscriber : public USubscriber
{
	GENERATED_UCLASS_BODY()
public:
	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	static U_dji_sdk_TransparentTransmissionDataSubscriber * Create_TransparentTransmissionData_Subscriber(FString _TopicName);

	virtual void ProccessMsg(rapidjson::Value & obj);

	UPROPERTY(BlueprintAssignable, Category = "Robot OS")
	F_dji_sdk_TransparentTransmissionDataDelegate OnTransparentTransmissionDataData;

	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	virtual void OnRecieve(F_dji_sdk_TransparentTransmissionData Data);
};









USTRUCT()
struct F_dji_sdk_MissionStatusWaypoint
{

	GENERATED_USTRUCT_BODY()

    
		
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Robot OS")
		uint8 mission_type;
		
    
		
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Robot OS")
		uint8 target_waypoint;
		
    
		
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Robot OS")
		uint8 current_status;
		
    
		
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Robot OS")
		uint8 error_code;
		
    

	rapidjson::Value Serialization(rapidjson::Document & d);
	void Unserialization(rapidjson::Value & v);

	std::string TypeName = "dji_sdk/MissionStatusWaypoint";

};


UCLASS()
class U_dji_sdk_MissionStatusWaypointAdvertiser : public UAdvertiser
{

	GENERATED_UCLASS_BODY()

public:
	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	static U_dji_sdk_MissionStatusWaypointAdvertiser * Create_MissionStatusWaypoint_Advertiser(FString TopicName);

	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	void Publish(F_dji_sdk_MissionStatusWaypoint Data);
};

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(F_dji_sdk_MissionStatusWaypointDelegate, F_dji_sdk_MissionStatusWaypoint, Data);

UCLASS()
class U_dji_sdk_MissionStatusWaypointSubscriber : public USubscriber
{
	GENERATED_UCLASS_BODY()
public:
	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	static U_dji_sdk_MissionStatusWaypointSubscriber * Create_MissionStatusWaypoint_Subscriber(FString _TopicName);

	virtual void ProccessMsg(rapidjson::Value & obj);

	UPROPERTY(BlueprintAssignable, Category = "Robot OS")
	F_dji_sdk_MissionStatusWaypointDelegate OnMissionStatusWaypointData;

	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	virtual void OnRecieve(F_dji_sdk_MissionStatusWaypoint Data);
};









USTRUCT()
struct F_sensor_msgs_PointCloud
{

	GENERATED_USTRUCT_BODY()

    
		
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Robot OS")
		F_std_msgs_Header header;
		
    
		
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Robot OS")
		TArray<F_geometry_msgs_Point32> points;
		
    

	rapidjson::Value Serialization(rapidjson::Document & d);
	void Unserialization(rapidjson::Value & v);

	std::string TypeName = "sensor_msgs/PointCloud";

};


UCLASS()
class U_sensor_msgs_PointCloudAdvertiser : public UAdvertiser
{

	GENERATED_UCLASS_BODY()

public:
	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	static U_sensor_msgs_PointCloudAdvertiser * Create_PointCloud_Advertiser(FString TopicName);

	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	void Publish(F_sensor_msgs_PointCloud Data);
};

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(F_sensor_msgs_PointCloudDelegate, F_sensor_msgs_PointCloud, Data);

UCLASS()
class U_sensor_msgs_PointCloudSubscriber : public USubscriber
{
	GENERATED_UCLASS_BODY()
public:
	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	static U_sensor_msgs_PointCloudSubscriber * Create_PointCloud_Subscriber(FString _TopicName);

	virtual void ProccessMsg(rapidjson::Value & obj);

	UPROPERTY(BlueprintAssignable, Category = "Robot OS")
	F_sensor_msgs_PointCloudDelegate OnPointCloudData;

	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	virtual void OnRecieve(F_sensor_msgs_PointCloud Data);
};









USTRUCT()
struct F_std_msgs_UInt8
{

	GENERATED_USTRUCT_BODY()

    
		
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Robot OS")
		uint8 data;
		
    

	rapidjson::Value Serialization(rapidjson::Document & d);
	void Unserialization(rapidjson::Value & v);

	std::string TypeName = "std_msgs/UInt8";

};


UCLASS()
class U_std_msgs_UInt8Advertiser : public UAdvertiser
{

	GENERATED_UCLASS_BODY()

public:
	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	static U_std_msgs_UInt8Advertiser * Create_UInt8_Advertiser(FString TopicName);

	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	void Publish(F_std_msgs_UInt8 Data);
};

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(F_std_msgs_UInt8Delegate, F_std_msgs_UInt8, Data);

UCLASS()
class U_std_msgs_UInt8Subscriber : public USubscriber
{
	GENERATED_UCLASS_BODY()
public:
	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	static U_std_msgs_UInt8Subscriber * Create_UInt8_Subscriber(FString _TopicName);

	virtual void ProccessMsg(rapidjson::Value & obj);

	UPROPERTY(BlueprintAssignable, Category = "Robot OS")
	F_std_msgs_UInt8Delegate OnUInt8Data;

	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	virtual void OnRecieve(F_std_msgs_UInt8 Data);
};









USTRUCT()
struct F_sensor_msgs_CompressedImage
{

	GENERATED_USTRUCT_BODY()

    
		
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Robot OS")
		F_std_msgs_Header header;
		
    
		
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Robot OS")
		FString format;
		
    
		
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Robot OS")
		TArray<uint8> data;
		
    

	rapidjson::Value Serialization(rapidjson::Document & d);
	void Unserialization(rapidjson::Value & v);

	std::string TypeName = "sensor_msgs/CompressedImage";

};


UCLASS()
class U_sensor_msgs_CompressedImageAdvertiser : public UAdvertiser
{

	GENERATED_UCLASS_BODY()

public:
	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	static U_sensor_msgs_CompressedImageAdvertiser * Create_CompressedImage_Advertiser(FString TopicName);

	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	void Publish(F_sensor_msgs_CompressedImage Data);
};

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(F_sensor_msgs_CompressedImageDelegate, F_sensor_msgs_CompressedImage, Data);

UCLASS()
class U_sensor_msgs_CompressedImageSubscriber : public USubscriber
{
	GENERATED_UCLASS_BODY()
public:
	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	static U_sensor_msgs_CompressedImageSubscriber * Create_CompressedImage_Subscriber(FString _TopicName);

	virtual void ProccessMsg(rapidjson::Value & obj);

	UPROPERTY(BlueprintAssignable, Category = "Robot OS")
	F_sensor_msgs_CompressedImageDelegate OnCompressedImageData;

	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	virtual void OnRecieve(F_sensor_msgs_CompressedImage Data);
};









USTRUCT()
struct F_sensor_msgs_JoyFeedbackArray
{

	GENERATED_USTRUCT_BODY()

    

	rapidjson::Value Serialization(rapidjson::Document & d);
	void Unserialization(rapidjson::Value & v);

	std::string TypeName = "sensor_msgs/JoyFeedbackArray";

};


UCLASS()
class U_sensor_msgs_JoyFeedbackArrayAdvertiser : public UAdvertiser
{

	GENERATED_UCLASS_BODY()

public:
	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	static U_sensor_msgs_JoyFeedbackArrayAdvertiser * Create_JoyFeedbackArray_Advertiser(FString TopicName);

	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	void Publish(F_sensor_msgs_JoyFeedbackArray Data);
};

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(F_sensor_msgs_JoyFeedbackArrayDelegate, F_sensor_msgs_JoyFeedbackArray, Data);

UCLASS()
class U_sensor_msgs_JoyFeedbackArraySubscriber : public USubscriber
{
	GENERATED_UCLASS_BODY()
public:
	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	static U_sensor_msgs_JoyFeedbackArraySubscriber * Create_JoyFeedbackArray_Subscriber(FString _TopicName);

	virtual void ProccessMsg(rapidjson::Value & obj);

	UPROPERTY(BlueprintAssignable, Category = "Robot OS")
	F_sensor_msgs_JoyFeedbackArrayDelegate OnJoyFeedbackArrayData;

	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	virtual void OnRecieve(F_sensor_msgs_JoyFeedbackArray Data);
};









USTRUCT()
struct F_dji_sdk_Waypoint
{

	GENERATED_USTRUCT_BODY()

    
		
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Robot OS")
		float latitude;
		
    
		
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Robot OS")
		float longitude;
		
    
		
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Robot OS")
		float altitude;
		
    
		
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Robot OS")
		int32 heading;
		
    
		
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Robot OS")
		int32 staytime;
		
    

	rapidjson::Value Serialization(rapidjson::Document & d);
	void Unserialization(rapidjson::Value & v);

	std::string TypeName = "dji_sdk/Waypoint";

};


UCLASS()
class U_dji_sdk_WaypointAdvertiser : public UAdvertiser
{

	GENERATED_UCLASS_BODY()

public:
	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	static U_dji_sdk_WaypointAdvertiser * Create_Waypoint_Advertiser(FString TopicName);

	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	void Publish(F_dji_sdk_Waypoint Data);
};

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(F_dji_sdk_WaypointDelegate, F_dji_sdk_Waypoint, Data);

UCLASS()
class U_dji_sdk_WaypointSubscriber : public USubscriber
{
	GENERATED_UCLASS_BODY()
public:
	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	static U_dji_sdk_WaypointSubscriber * Create_Waypoint_Subscriber(FString _TopicName);

	virtual void ProccessMsg(rapidjson::Value & obj);

	UPROPERTY(BlueprintAssignable, Category = "Robot OS")
	F_dji_sdk_WaypointDelegate OnWaypointData;

	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	virtual void OnRecieve(F_dji_sdk_Waypoint Data);
};









USTRUCT()
struct F_dji_sdk_Gimbal
{

	GENERATED_USTRUCT_BODY()

    
		
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Robot OS")
		F_std_msgs_Header header;
		
    
		
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Robot OS")
		int32 ts;
		
    
		
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Robot OS")
		float pitch;
		
    
		
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Robot OS")
		float yaw;
		
    
		
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Robot OS")
		float roll;
		
    

	rapidjson::Value Serialization(rapidjson::Document & d);
	void Unserialization(rapidjson::Value & v);

	std::string TypeName = "dji_sdk/Gimbal";

};


UCLASS()
class U_dji_sdk_GimbalAdvertiser : public UAdvertiser
{

	GENERATED_UCLASS_BODY()

public:
	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	static U_dji_sdk_GimbalAdvertiser * Create_Gimbal_Advertiser(FString TopicName);

	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	void Publish(F_dji_sdk_Gimbal Data);
};

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(F_dji_sdk_GimbalDelegate, F_dji_sdk_Gimbal, Data);

UCLASS()
class U_dji_sdk_GimbalSubscriber : public USubscriber
{
	GENERATED_UCLASS_BODY()
public:
	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	static U_dji_sdk_GimbalSubscriber * Create_Gimbal_Subscriber(FString _TopicName);

	virtual void ProccessMsg(rapidjson::Value & obj);

	UPROPERTY(BlueprintAssignable, Category = "Robot OS")
	F_dji_sdk_GimbalDelegate OnGimbalData;

	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	virtual void OnRecieve(F_dji_sdk_Gimbal Data);
};









USTRUCT()
struct F_dji_sdk_MissionEventWpUpload
{

	GENERATED_USTRUCT_BODY()

    
		
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Robot OS")
		uint8 incident_type;
		
    
		
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Robot OS")
		uint8 mission_valid;
		
    
		
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Robot OS")
		int32 estimated_runtime;
		
    

	rapidjson::Value Serialization(rapidjson::Document & d);
	void Unserialization(rapidjson::Value & v);

	std::string TypeName = "dji_sdk/MissionEventWpUpload";

};


UCLASS()
class U_dji_sdk_MissionEventWpUploadAdvertiser : public UAdvertiser
{

	GENERATED_UCLASS_BODY()

public:
	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	static U_dji_sdk_MissionEventWpUploadAdvertiser * Create_MissionEventWpUpload_Advertiser(FString TopicName);

	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	void Publish(F_dji_sdk_MissionEventWpUpload Data);
};

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(F_dji_sdk_MissionEventWpUploadDelegate, F_dji_sdk_MissionEventWpUpload, Data);

UCLASS()
class U_dji_sdk_MissionEventWpUploadSubscriber : public USubscriber
{
	GENERATED_UCLASS_BODY()
public:
	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	static U_dji_sdk_MissionEventWpUploadSubscriber * Create_MissionEventWpUpload_Subscriber(FString _TopicName);

	virtual void ProccessMsg(rapidjson::Value & obj);

	UPROPERTY(BlueprintAssignable, Category = "Robot OS")
	F_dji_sdk_MissionEventWpUploadDelegate OnMissionEventWpUploadData;

	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	virtual void OnRecieve(F_dji_sdk_MissionEventWpUpload Data);
};









USTRUCT()
struct F_std_msgs_Char
{

	GENERATED_USTRUCT_BODY()

    
		
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Robot OS")
		uint8 data;
		
    

	rapidjson::Value Serialization(rapidjson::Document & d);
	void Unserialization(rapidjson::Value & v);

	std::string TypeName = "std_msgs/Char";

};


UCLASS()
class U_std_msgs_CharAdvertiser : public UAdvertiser
{

	GENERATED_UCLASS_BODY()

public:
	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	static U_std_msgs_CharAdvertiser * Create_Char_Advertiser(FString TopicName);

	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	void Publish(F_std_msgs_Char Data);
};

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(F_std_msgs_CharDelegate, F_std_msgs_Char, Data);

UCLASS()
class U_std_msgs_CharSubscriber : public USubscriber
{
	GENERATED_UCLASS_BODY()
public:
	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	static U_std_msgs_CharSubscriber * Create_Char_Subscriber(FString _TopicName);

	virtual void ProccessMsg(rapidjson::Value & obj);

	UPROPERTY(BlueprintAssignable, Category = "Robot OS")
	F_std_msgs_CharDelegate OnCharData;

	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	virtual void OnRecieve(F_std_msgs_Char Data);
};









USTRUCT()
struct F_geometry_msgs_PoseWithCovariance
{

	GENERATED_USTRUCT_BODY()

    
		
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Robot OS")
		F_geometry_msgs_Pose pose;
		
    

	rapidjson::Value Serialization(rapidjson::Document & d);
	void Unserialization(rapidjson::Value & v);

	std::string TypeName = "geometry_msgs/PoseWithCovariance";

};


UCLASS()
class U_geometry_msgs_PoseWithCovarianceAdvertiser : public UAdvertiser
{

	GENERATED_UCLASS_BODY()

public:
	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	static U_geometry_msgs_PoseWithCovarianceAdvertiser * Create_PoseWithCovariance_Advertiser(FString TopicName);

	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	void Publish(F_geometry_msgs_PoseWithCovariance Data);
};

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(F_geometry_msgs_PoseWithCovarianceDelegate, F_geometry_msgs_PoseWithCovariance, Data);

UCLASS()
class U_geometry_msgs_PoseWithCovarianceSubscriber : public USubscriber
{
	GENERATED_UCLASS_BODY()
public:
	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	static U_geometry_msgs_PoseWithCovarianceSubscriber * Create_PoseWithCovariance_Subscriber(FString _TopicName);

	virtual void ProccessMsg(rapidjson::Value & obj);

	UPROPERTY(BlueprintAssignable, Category = "Robot OS")
	F_geometry_msgs_PoseWithCovarianceDelegate OnPoseWithCovarianceData;

	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	virtual void OnRecieve(F_geometry_msgs_PoseWithCovariance Data);
};









USTRUCT()
struct F_nav_msgs_Odometry
{

	GENERATED_USTRUCT_BODY()

    
		
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Robot OS")
		F_std_msgs_Header header;
		
    
		
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Robot OS")
		FString child_frame_id;
		
    
		
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Robot OS")
		F_geometry_msgs_PoseWithCovariance pose;
		
    
		
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Robot OS")
		F_geometry_msgs_TwistWithCovariance twist;
		
    

	rapidjson::Value Serialization(rapidjson::Document & d);
	void Unserialization(rapidjson::Value & v);

	std::string TypeName = "nav_msgs/Odometry";

};


UCLASS()
class U_nav_msgs_OdometryAdvertiser : public UAdvertiser
{

	GENERATED_UCLASS_BODY()

public:
	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	static U_nav_msgs_OdometryAdvertiser * Create_Odometry_Advertiser(FString TopicName);

	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	void Publish(F_nav_msgs_Odometry Data);
};

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(F_nav_msgs_OdometryDelegate, F_nav_msgs_Odometry, Data);

UCLASS()
class U_nav_msgs_OdometrySubscriber : public USubscriber
{
	GENERATED_UCLASS_BODY()
public:
	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	static U_nav_msgs_OdometrySubscriber * Create_Odometry_Subscriber(FString _TopicName);

	virtual void ProccessMsg(rapidjson::Value & obj);

	UPROPERTY(BlueprintAssignable, Category = "Robot OS")
	F_nav_msgs_OdometryDelegate OnOdometryData;

	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	virtual void OnRecieve(F_nav_msgs_Odometry Data);
};









USTRUCT()
struct F_geometry_msgs_PoseWithCovarianceStamped
{

	GENERATED_USTRUCT_BODY()

    
		
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Robot OS")
		F_std_msgs_Header header;
		
    
		
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Robot OS")
		F_geometry_msgs_PoseWithCovariance pose;
		
    

	rapidjson::Value Serialization(rapidjson::Document & d);
	void Unserialization(rapidjson::Value & v);

	std::string TypeName = "geometry_msgs/PoseWithCovarianceStamped";

};


UCLASS()
class U_geometry_msgs_PoseWithCovarianceStampedAdvertiser : public UAdvertiser
{

	GENERATED_UCLASS_BODY()

public:
	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	static U_geometry_msgs_PoseWithCovarianceStampedAdvertiser * Create_PoseWithCovarianceStamped_Advertiser(FString TopicName);

	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	void Publish(F_geometry_msgs_PoseWithCovarianceStamped Data);
};

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(F_geometry_msgs_PoseWithCovarianceStampedDelegate, F_geometry_msgs_PoseWithCovarianceStamped, Data);

UCLASS()
class U_geometry_msgs_PoseWithCovarianceStampedSubscriber : public USubscriber
{
	GENERATED_UCLASS_BODY()
public:
	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	static U_geometry_msgs_PoseWithCovarianceStampedSubscriber * Create_PoseWithCovarianceStamped_Subscriber(FString _TopicName);

	virtual void ProccessMsg(rapidjson::Value & obj);

	UPROPERTY(BlueprintAssignable, Category = "Robot OS")
	F_geometry_msgs_PoseWithCovarianceStampedDelegate OnPoseWithCovarianceStampedData;

	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	virtual void OnRecieve(F_geometry_msgs_PoseWithCovarianceStamped Data);
};









USTRUCT()
struct F_dji_sdk_MissionHotpointTask
{

	GENERATED_USTRUCT_BODY()

    
		
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Robot OS")
		float latitude;
		
    
		
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Robot OS")
		float longitude;
		
    
		
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Robot OS")
		float altitude;
		
    
		
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Robot OS")
		float radius;
		
    
		
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Robot OS")
		float angular_speed;
		
    
		
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Robot OS")
		uint8 is_clockwise;
		
    
		
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Robot OS")
		uint8 start_point;
		
    
		
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Robot OS")
		uint8 yaw_mode;
		
    

	rapidjson::Value Serialization(rapidjson::Document & d);
	void Unserialization(rapidjson::Value & v);

	std::string TypeName = "dji_sdk/MissionHotpointTask";

};


UCLASS()
class U_dji_sdk_MissionHotpointTaskAdvertiser : public UAdvertiser
{

	GENERATED_UCLASS_BODY()

public:
	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	static U_dji_sdk_MissionHotpointTaskAdvertiser * Create_MissionHotpointTask_Advertiser(FString TopicName);

	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	void Publish(F_dji_sdk_MissionHotpointTask Data);
};

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(F_dji_sdk_MissionHotpointTaskDelegate, F_dji_sdk_MissionHotpointTask, Data);

UCLASS()
class U_dji_sdk_MissionHotpointTaskSubscriber : public USubscriber
{
	GENERATED_UCLASS_BODY()
public:
	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	static U_dji_sdk_MissionHotpointTaskSubscriber * Create_MissionHotpointTask_Subscriber(FString _TopicName);

	virtual void ProccessMsg(rapidjson::Value & obj);

	UPROPERTY(BlueprintAssignable, Category = "Robot OS")
	F_dji_sdk_MissionHotpointTaskDelegate OnMissionHotpointTaskData;

	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	virtual void OnRecieve(F_dji_sdk_MissionHotpointTask Data);
};









USTRUCT()
struct F_std_msgs_Int16MultiArray
{

	GENERATED_USTRUCT_BODY()

    
		
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Robot OS")
		F_std_msgs_MultiArrayLayout layout;
		
    
		
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Robot OS")
		TArray<int32> data;
		
    

	rapidjson::Value Serialization(rapidjson::Document & d);
	void Unserialization(rapidjson::Value & v);

	std::string TypeName = "std_msgs/Int16MultiArray";

};


UCLASS()
class U_std_msgs_Int16MultiArrayAdvertiser : public UAdvertiser
{

	GENERATED_UCLASS_BODY()

public:
	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	static U_std_msgs_Int16MultiArrayAdvertiser * Create_Int16MultiArray_Advertiser(FString TopicName);

	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	void Publish(F_std_msgs_Int16MultiArray Data);
};

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(F_std_msgs_Int16MultiArrayDelegate, F_std_msgs_Int16MultiArray, Data);

UCLASS()
class U_std_msgs_Int16MultiArraySubscriber : public USubscriber
{
	GENERATED_UCLASS_BODY()
public:
	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	static U_std_msgs_Int16MultiArraySubscriber * Create_Int16MultiArray_Subscriber(FString _TopicName);

	virtual void ProccessMsg(rapidjson::Value & obj);

	UPROPERTY(BlueprintAssignable, Category = "Robot OS")
	F_std_msgs_Int16MultiArrayDelegate OnInt16MultiArrayData;

	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	virtual void OnRecieve(F_std_msgs_Int16MultiArray Data);
};









USTRUCT()
struct F_dji_sdk_PowerStatus
{

	GENERATED_USTRUCT_BODY()

    
		
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Robot OS")
		uint8 percentage;
		
    

	rapidjson::Value Serialization(rapidjson::Document & d);
	void Unserialization(rapidjson::Value & v);

	std::string TypeName = "dji_sdk/PowerStatus";

};


UCLASS()
class U_dji_sdk_PowerStatusAdvertiser : public UAdvertiser
{

	GENERATED_UCLASS_BODY()

public:
	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	static U_dji_sdk_PowerStatusAdvertiser * Create_PowerStatus_Advertiser(FString TopicName);

	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	void Publish(F_dji_sdk_PowerStatus Data);
};

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(F_dji_sdk_PowerStatusDelegate, F_dji_sdk_PowerStatus, Data);

UCLASS()
class U_dji_sdk_PowerStatusSubscriber : public USubscriber
{
	GENERATED_UCLASS_BODY()
public:
	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	static U_dji_sdk_PowerStatusSubscriber * Create_PowerStatus_Subscriber(FString _TopicName);

	virtual void ProccessMsg(rapidjson::Value & obj);

	UPROPERTY(BlueprintAssignable, Category = "Robot OS")
	F_dji_sdk_PowerStatusDelegate OnPowerStatusData;

	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	virtual void OnRecieve(F_dji_sdk_PowerStatus Data);
};









USTRUCT()
struct F_std_msgs_UInt64MultiArray
{

	GENERATED_USTRUCT_BODY()

    
		
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Robot OS")
		F_std_msgs_MultiArrayLayout layout;
		
    
		
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Robot OS")
		TArray<int32> data;
		
    

	rapidjson::Value Serialization(rapidjson::Document & d);
	void Unserialization(rapidjson::Value & v);

	std::string TypeName = "std_msgs/UInt64MultiArray";

};


UCLASS()
class U_std_msgs_UInt64MultiArrayAdvertiser : public UAdvertiser
{

	GENERATED_UCLASS_BODY()

public:
	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	static U_std_msgs_UInt64MultiArrayAdvertiser * Create_UInt64MultiArray_Advertiser(FString TopicName);

	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	void Publish(F_std_msgs_UInt64MultiArray Data);
};

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(F_std_msgs_UInt64MultiArrayDelegate, F_std_msgs_UInt64MultiArray, Data);

UCLASS()
class U_std_msgs_UInt64MultiArraySubscriber : public USubscriber
{
	GENERATED_UCLASS_BODY()
public:
	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	static U_std_msgs_UInt64MultiArraySubscriber * Create_UInt64MultiArray_Subscriber(FString _TopicName);

	virtual void ProccessMsg(rapidjson::Value & obj);

	UPROPERTY(BlueprintAssignable, Category = "Robot OS")
	F_std_msgs_UInt64MultiArrayDelegate OnUInt64MultiArrayData;

	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	virtual void OnRecieve(F_std_msgs_UInt64MultiArray Data);
};









USTRUCT()
struct F_std_msgs_UInt16MultiArray
{

	GENERATED_USTRUCT_BODY()

    
		
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Robot OS")
		F_std_msgs_MultiArrayLayout layout;
		
    
		
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Robot OS")
		TArray<int32> data;
		
    

	rapidjson::Value Serialization(rapidjson::Document & d);
	void Unserialization(rapidjson::Value & v);

	std::string TypeName = "std_msgs/UInt16MultiArray";

};


UCLASS()
class U_std_msgs_UInt16MultiArrayAdvertiser : public UAdvertiser
{

	GENERATED_UCLASS_BODY()

public:
	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	static U_std_msgs_UInt16MultiArrayAdvertiser * Create_UInt16MultiArray_Advertiser(FString TopicName);

	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	void Publish(F_std_msgs_UInt16MultiArray Data);
};

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(F_std_msgs_UInt16MultiArrayDelegate, F_std_msgs_UInt16MultiArray, Data);

UCLASS()
class U_std_msgs_UInt16MultiArraySubscriber : public USubscriber
{
	GENERATED_UCLASS_BODY()
public:
	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	static U_std_msgs_UInt16MultiArraySubscriber * Create_UInt16MultiArray_Subscriber(FString _TopicName);

	virtual void ProccessMsg(rapidjson::Value & obj);

	UPROPERTY(BlueprintAssignable, Category = "Robot OS")
	F_std_msgs_UInt16MultiArrayDelegate OnUInt16MultiArrayData;

	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	virtual void OnRecieve(F_std_msgs_UInt16MultiArray Data);
};









USTRUCT()
struct F_sensor_msgs_RegionOfInterest
{

	GENERATED_USTRUCT_BODY()

    
		
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Robot OS")
		int32 x_offset;
		
    
		
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Robot OS")
		int32 y_offset;
		
    
		
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Robot OS")
		int32 height;
		
    
		
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Robot OS")
		int32 width;
		
    
		
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Robot OS")
		bool do_rectify;
		
    

	rapidjson::Value Serialization(rapidjson::Document & d);
	void Unserialization(rapidjson::Value & v);

	std::string TypeName = "sensor_msgs/RegionOfInterest";

};


UCLASS()
class U_sensor_msgs_RegionOfInterestAdvertiser : public UAdvertiser
{

	GENERATED_UCLASS_BODY()

public:
	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	static U_sensor_msgs_RegionOfInterestAdvertiser * Create_RegionOfInterest_Advertiser(FString TopicName);

	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	void Publish(F_sensor_msgs_RegionOfInterest Data);
};

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(F_sensor_msgs_RegionOfInterestDelegate, F_sensor_msgs_RegionOfInterest, Data);

UCLASS()
class U_sensor_msgs_RegionOfInterestSubscriber : public USubscriber
{
	GENERATED_UCLASS_BODY()
public:
	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	static U_sensor_msgs_RegionOfInterestSubscriber * Create_RegionOfInterest_Subscriber(FString _TopicName);

	virtual void ProccessMsg(rapidjson::Value & obj);

	UPROPERTY(BlueprintAssignable, Category = "Robot OS")
	F_sensor_msgs_RegionOfInterestDelegate OnRegionOfInterestData;

	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	virtual void OnRecieve(F_sensor_msgs_RegionOfInterest Data);
};









USTRUCT()
struct F_sensor_msgs_CameraInfo
{

	GENERATED_USTRUCT_BODY()

    
		
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Robot OS")
		F_std_msgs_Header header;
		
    
		
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Robot OS")
		int32 height;
		
    
		
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Robot OS")
		int32 width;
		
    
		
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Robot OS")
		FString distortion_model;
		
    
		
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Robot OS")
		int32 binning_x;
		
    
		
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Robot OS")
		int32 binning_y;
		
    
		
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Robot OS")
		F_sensor_msgs_RegionOfInterest roi;
		
    
		
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Robot OS")
		TArray<float> D;
		
    

	rapidjson::Value Serialization(rapidjson::Document & d);
	void Unserialization(rapidjson::Value & v);

	std::string TypeName = "sensor_msgs/CameraInfo";

};


UCLASS()
class U_sensor_msgs_CameraInfoAdvertiser : public UAdvertiser
{

	GENERATED_UCLASS_BODY()

public:
	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	static U_sensor_msgs_CameraInfoAdvertiser * Create_CameraInfo_Advertiser(FString TopicName);

	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	void Publish(F_sensor_msgs_CameraInfo Data);
};

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(F_sensor_msgs_CameraInfoDelegate, F_sensor_msgs_CameraInfo, Data);

UCLASS()
class U_sensor_msgs_CameraInfoSubscriber : public USubscriber
{
	GENERATED_UCLASS_BODY()
public:
	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	static U_sensor_msgs_CameraInfoSubscriber * Create_CameraInfo_Subscriber(FString _TopicName);

	virtual void ProccessMsg(rapidjson::Value & obj);

	UPROPERTY(BlueprintAssignable, Category = "Robot OS")
	F_sensor_msgs_CameraInfoDelegate OnCameraInfoData;

	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	virtual void OnRecieve(F_sensor_msgs_CameraInfo Data);
};









USTRUCT()
struct F_stereo_msgs_DisparityImage
{

	GENERATED_USTRUCT_BODY()

    
		
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Robot OS")
		F_std_msgs_Header header;
		
    
		
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Robot OS")
		F_sensor_msgs_Image image;
		
    
		
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Robot OS")
		float f;
		
    
		
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Robot OS")
		float T;
		
    
		
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Robot OS")
		F_sensor_msgs_RegionOfInterest valid_window;
		
    
		
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Robot OS")
		float min_disparity;
		
    
		
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Robot OS")
		float max_disparity;
		
    
		
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Robot OS")
		float delta_d;
		
    

	rapidjson::Value Serialization(rapidjson::Document & d);
	void Unserialization(rapidjson::Value & v);

	std::string TypeName = "stereo_msgs/DisparityImage";

};


UCLASS()
class U_stereo_msgs_DisparityImageAdvertiser : public UAdvertiser
{

	GENERATED_UCLASS_BODY()

public:
	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	static U_stereo_msgs_DisparityImageAdvertiser * Create_DisparityImage_Advertiser(FString TopicName);

	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	void Publish(F_stereo_msgs_DisparityImage Data);
};

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(F_stereo_msgs_DisparityImageDelegate, F_stereo_msgs_DisparityImage, Data);

UCLASS()
class U_stereo_msgs_DisparityImageSubscriber : public USubscriber
{
	GENERATED_UCLASS_BODY()
public:
	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	static U_stereo_msgs_DisparityImageSubscriber * Create_DisparityImage_Subscriber(FString _TopicName);

	virtual void ProccessMsg(rapidjson::Value & obj);

	UPROPERTY(BlueprintAssignable, Category = "Robot OS")
	F_stereo_msgs_DisparityImageDelegate OnDisparityImageData;

	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	virtual void OnRecieve(F_stereo_msgs_DisparityImage Data);
};









USTRUCT()
struct F_sensor_msgs_LaserScan
{

	GENERATED_USTRUCT_BODY()

    
		
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Robot OS")
		F_std_msgs_Header header;
		
    
		
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Robot OS")
		float angle_min;
		
    
		
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Robot OS")
		float angle_max;
		
    
		
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Robot OS")
		float angle_increment;
		
    
		
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Robot OS")
		float time_increment;
		
    
		
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Robot OS")
		float scan_time;
		
    
		
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Robot OS")
		float range_min;
		
    
		
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Robot OS")
		float range_max;
		
    
		
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Robot OS")
		TArray<float> ranges;
		
    
		
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Robot OS")
		TArray<float> intensities;
		
    

	rapidjson::Value Serialization(rapidjson::Document & d);
	void Unserialization(rapidjson::Value & v);

	std::string TypeName = "sensor_msgs/LaserScan";

};


UCLASS()
class U_sensor_msgs_LaserScanAdvertiser : public UAdvertiser
{

	GENERATED_UCLASS_BODY()

public:
	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	static U_sensor_msgs_LaserScanAdvertiser * Create_LaserScan_Advertiser(FString TopicName);

	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	void Publish(F_sensor_msgs_LaserScan Data);
};

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(F_sensor_msgs_LaserScanDelegate, F_sensor_msgs_LaserScan, Data);

UCLASS()
class U_sensor_msgs_LaserScanSubscriber : public USubscriber
{
	GENERATED_UCLASS_BODY()
public:
	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	static U_sensor_msgs_LaserScanSubscriber * Create_LaserScan_Subscriber(FString _TopicName);

	virtual void ProccessMsg(rapidjson::Value & obj);

	UPROPERTY(BlueprintAssignable, Category = "Robot OS")
	F_sensor_msgs_LaserScanDelegate OnLaserScanData;

	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	virtual void OnRecieve(F_sensor_msgs_LaserScan Data);
};









USTRUCT()
struct F_dji_sdk_GlobalPosition
{

	GENERATED_USTRUCT_BODY()

    
		
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Robot OS")
		F_std_msgs_Header header;
		
    
		
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Robot OS")
		int32 ts;
		
    
		
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Robot OS")
		float latitude;
		
    
		
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Robot OS")
		float longitude;
		
    
		
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Robot OS")
		float altitude;
		
    
		
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Robot OS")
		float height;
		
    
		
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Robot OS")
		int32 health;
		
    

	rapidjson::Value Serialization(rapidjson::Document & d);
	void Unserialization(rapidjson::Value & v);

	std::string TypeName = "dji_sdk/GlobalPosition";

};


UCLASS()
class U_dji_sdk_GlobalPositionAdvertiser : public UAdvertiser
{

	GENERATED_UCLASS_BODY()

public:
	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	static U_dji_sdk_GlobalPositionAdvertiser * Create_GlobalPosition_Advertiser(FString TopicName);

	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	void Publish(F_dji_sdk_GlobalPosition Data);
};

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(F_dji_sdk_GlobalPositionDelegate, F_dji_sdk_GlobalPosition, Data);

UCLASS()
class U_dji_sdk_GlobalPositionSubscriber : public USubscriber
{
	GENERATED_UCLASS_BODY()
public:
	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	static U_dji_sdk_GlobalPositionSubscriber * Create_GlobalPosition_Subscriber(FString _TopicName);

	virtual void ProccessMsg(rapidjson::Value & obj);

	UPROPERTY(BlueprintAssignable, Category = "Robot OS")
	F_dji_sdk_GlobalPositionDelegate OnGlobalPositionData;

	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	virtual void OnRecieve(F_dji_sdk_GlobalPosition Data);
};









USTRUCT()
struct F_sensor_msgs_TimeReference
{

	GENERATED_USTRUCT_BODY()

    
		
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Robot OS")
		F_std_msgs_Header header;
		
    
		
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Robot OS")
		int32 time_ref;
		
    
		
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Robot OS")
		FString source;
		
    

	rapidjson::Value Serialization(rapidjson::Document & d);
	void Unserialization(rapidjson::Value & v);

	std::string TypeName = "sensor_msgs/TimeReference";

};


UCLASS()
class U_sensor_msgs_TimeReferenceAdvertiser : public UAdvertiser
{

	GENERATED_UCLASS_BODY()

public:
	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	static U_sensor_msgs_TimeReferenceAdvertiser * Create_TimeReference_Advertiser(FString TopicName);

	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	void Publish(F_sensor_msgs_TimeReference Data);
};

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(F_sensor_msgs_TimeReferenceDelegate, F_sensor_msgs_TimeReference, Data);

UCLASS()
class U_sensor_msgs_TimeReferenceSubscriber : public USubscriber
{
	GENERATED_UCLASS_BODY()
public:
	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	static U_sensor_msgs_TimeReferenceSubscriber * Create_TimeReference_Subscriber(FString _TopicName);

	virtual void ProccessMsg(rapidjson::Value & obj);

	UPROPERTY(BlueprintAssignable, Category = "Robot OS")
	F_sensor_msgs_TimeReferenceDelegate OnTimeReferenceData;

	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	virtual void OnRecieve(F_sensor_msgs_TimeReference Data);
};









USTRUCT()
struct F_geometry_msgs_PolygonStamped
{

	GENERATED_USTRUCT_BODY()

    
		
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Robot OS")
		F_std_msgs_Header header;
		
    
		
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Robot OS")
		F_geometry_msgs_Polygon polygon;
		
    

	rapidjson::Value Serialization(rapidjson::Document & d);
	void Unserialization(rapidjson::Value & v);

	std::string TypeName = "geometry_msgs/PolygonStamped";

};


UCLASS()
class U_geometry_msgs_PolygonStampedAdvertiser : public UAdvertiser
{

	GENERATED_UCLASS_BODY()

public:
	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	static U_geometry_msgs_PolygonStampedAdvertiser * Create_PolygonStamped_Advertiser(FString TopicName);

	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	void Publish(F_geometry_msgs_PolygonStamped Data);
};

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(F_geometry_msgs_PolygonStampedDelegate, F_geometry_msgs_PolygonStamped, Data);

UCLASS()
class U_geometry_msgs_PolygonStampedSubscriber : public USubscriber
{
	GENERATED_UCLASS_BODY()
public:
	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	static U_geometry_msgs_PolygonStampedSubscriber * Create_PolygonStamped_Subscriber(FString _TopicName);

	virtual void ProccessMsg(rapidjson::Value & obj);

	UPROPERTY(BlueprintAssignable, Category = "Robot OS")
	F_geometry_msgs_PolygonStampedDelegate OnPolygonStampedData;

	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	virtual void OnRecieve(F_geometry_msgs_PolygonStamped Data);
};









USTRUCT()
struct F_std_msgs_Duration
{

	GENERATED_USTRUCT_BODY()

    
		
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Robot OS")
		int32 data;
		
    

	rapidjson::Value Serialization(rapidjson::Document & d);
	void Unserialization(rapidjson::Value & v);

	std::string TypeName = "std_msgs/Duration";

};


UCLASS()
class U_std_msgs_DurationAdvertiser : public UAdvertiser
{

	GENERATED_UCLASS_BODY()

public:
	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	static U_std_msgs_DurationAdvertiser * Create_Duration_Advertiser(FString TopicName);

	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	void Publish(F_std_msgs_Duration Data);
};

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(F_std_msgs_DurationDelegate, F_std_msgs_Duration, Data);

UCLASS()
class U_std_msgs_DurationSubscriber : public USubscriber
{
	GENERATED_UCLASS_BODY()
public:
	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	static U_std_msgs_DurationSubscriber * Create_Duration_Subscriber(FString _TopicName);

	virtual void ProccessMsg(rapidjson::Value & obj);

	UPROPERTY(BlueprintAssignable, Category = "Robot OS")
	F_std_msgs_DurationDelegate OnDurationData;

	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	virtual void OnRecieve(F_std_msgs_Duration Data);
};









USTRUCT()
struct F_dji_sdk_MissionWaypoint
{

	GENERATED_USTRUCT_BODY()

    
		
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Robot OS")
		float latitude;
		
    
		
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Robot OS")
		float longitude;
		
    
		
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Robot OS")
		float altitude;
		
    
		
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Robot OS")
		float damping_distance;
		
    
		
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Robot OS")
		int32 target_yaw;
		
    
		
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Robot OS")
		int32 target_gimbal_pitch;
		
    
		
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Robot OS")
		uint8 turn_mode;
		
    
		
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Robot OS")
		uint8 has_action;
		
    
		
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Robot OS")
		int32 action_time_limit;
		
    
		
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Robot OS")
		F_dji_sdk_MissionWaypointAction waypoint_action;
		
    

	rapidjson::Value Serialization(rapidjson::Document & d);
	void Unserialization(rapidjson::Value & v);

	std::string TypeName = "dji_sdk/MissionWaypoint";

};


UCLASS()
class U_dji_sdk_MissionWaypointAdvertiser : public UAdvertiser
{

	GENERATED_UCLASS_BODY()

public:
	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	static U_dji_sdk_MissionWaypointAdvertiser * Create_MissionWaypoint_Advertiser(FString TopicName);

	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	void Publish(F_dji_sdk_MissionWaypoint Data);
};

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(F_dji_sdk_MissionWaypointDelegate, F_dji_sdk_MissionWaypoint, Data);

UCLASS()
class U_dji_sdk_MissionWaypointSubscriber : public USubscriber
{
	GENERATED_UCLASS_BODY()
public:
	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	static U_dji_sdk_MissionWaypointSubscriber * Create_MissionWaypoint_Subscriber(FString _TopicName);

	virtual void ProccessMsg(rapidjson::Value & obj);

	UPROPERTY(BlueprintAssignable, Category = "Robot OS")
	F_dji_sdk_MissionWaypointDelegate OnMissionWaypointData;

	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	virtual void OnRecieve(F_dji_sdk_MissionWaypoint Data);
};









USTRUCT()
struct F_geometry_msgs_Wrench
{

	GENERATED_USTRUCT_BODY()

    
		
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Robot OS")
		F_geometry_msgs_Vector3 force;
		
    
		
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Robot OS")
		F_geometry_msgs_Vector3 torque;
		
    

	rapidjson::Value Serialization(rapidjson::Document & d);
	void Unserialization(rapidjson::Value & v);

	std::string TypeName = "geometry_msgs/Wrench";

};


UCLASS()
class U_geometry_msgs_WrenchAdvertiser : public UAdvertiser
{

	GENERATED_UCLASS_BODY()

public:
	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	static U_geometry_msgs_WrenchAdvertiser * Create_Wrench_Advertiser(FString TopicName);

	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	void Publish(F_geometry_msgs_Wrench Data);
};

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(F_geometry_msgs_WrenchDelegate, F_geometry_msgs_Wrench, Data);

UCLASS()
class U_geometry_msgs_WrenchSubscriber : public USubscriber
{
	GENERATED_UCLASS_BODY()
public:
	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	static U_geometry_msgs_WrenchSubscriber * Create_Wrench_Subscriber(FString _TopicName);

	virtual void ProccessMsg(rapidjson::Value & obj);

	UPROPERTY(BlueprintAssignable, Category = "Robot OS")
	F_geometry_msgs_WrenchDelegate OnWrenchData;

	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	virtual void OnRecieve(F_geometry_msgs_Wrench Data);
};









USTRUCT()
struct F_geometry_msgs_WrenchStamped
{

	GENERATED_USTRUCT_BODY()

    
		
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Robot OS")
		F_std_msgs_Header header;
		
    
		
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Robot OS")
		F_geometry_msgs_Wrench wrench;
		
    

	rapidjson::Value Serialization(rapidjson::Document & d);
	void Unserialization(rapidjson::Value & v);

	std::string TypeName = "geometry_msgs/WrenchStamped";

};


UCLASS()
class U_geometry_msgs_WrenchStampedAdvertiser : public UAdvertiser
{

	GENERATED_UCLASS_BODY()

public:
	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	static U_geometry_msgs_WrenchStampedAdvertiser * Create_WrenchStamped_Advertiser(FString TopicName);

	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	void Publish(F_geometry_msgs_WrenchStamped Data);
};

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(F_geometry_msgs_WrenchStampedDelegate, F_geometry_msgs_WrenchStamped, Data);

UCLASS()
class U_geometry_msgs_WrenchStampedSubscriber : public USubscriber
{
	GENERATED_UCLASS_BODY()
public:
	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	static U_geometry_msgs_WrenchStampedSubscriber * Create_WrenchStamped_Subscriber(FString _TopicName);

	virtual void ProccessMsg(rapidjson::Value & obj);

	UPROPERTY(BlueprintAssignable, Category = "Robot OS")
	F_geometry_msgs_WrenchStampedDelegate OnWrenchStampedData;

	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	virtual void OnRecieve(F_geometry_msgs_WrenchStamped Data);
};









USTRUCT()
struct F_geometry_msgs_AccelWithCovarianceStamped
{

	GENERATED_USTRUCT_BODY()

    
		
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Robot OS")
		F_std_msgs_Header header;
		
    
		
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Robot OS")
		F_geometry_msgs_AccelWithCovariance accel;
		
    

	rapidjson::Value Serialization(rapidjson::Document & d);
	void Unserialization(rapidjson::Value & v);

	std::string TypeName = "geometry_msgs/AccelWithCovarianceStamped";

};


UCLASS()
class U_geometry_msgs_AccelWithCovarianceStampedAdvertiser : public UAdvertiser
{

	GENERATED_UCLASS_BODY()

public:
	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	static U_geometry_msgs_AccelWithCovarianceStampedAdvertiser * Create_AccelWithCovarianceStamped_Advertiser(FString TopicName);

	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	void Publish(F_geometry_msgs_AccelWithCovarianceStamped Data);
};

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(F_geometry_msgs_AccelWithCovarianceStampedDelegate, F_geometry_msgs_AccelWithCovarianceStamped, Data);

UCLASS()
class U_geometry_msgs_AccelWithCovarianceStampedSubscriber : public USubscriber
{
	GENERATED_UCLASS_BODY()
public:
	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	static U_geometry_msgs_AccelWithCovarianceStampedSubscriber * Create_AccelWithCovarianceStamped_Subscriber(FString _TopicName);

	virtual void ProccessMsg(rapidjson::Value & obj);

	UPROPERTY(BlueprintAssignable, Category = "Robot OS")
	F_geometry_msgs_AccelWithCovarianceStampedDelegate OnAccelWithCovarianceStampedData;

	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	virtual void OnRecieve(F_geometry_msgs_AccelWithCovarianceStamped Data);
};









USTRUCT()
struct F_dji_sdk_AttitudeQuaternion
{

	GENERATED_USTRUCT_BODY()

    
		
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Robot OS")
		F_std_msgs_Header header;
		
    
		
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Robot OS")
		int32 ts;
		
    
		
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Robot OS")
		float q0;
		
    
		
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Robot OS")
		float q1;
		
    
		
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Robot OS")
		float q2;
		
    
		
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Robot OS")
		float q3;
		
    
		
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Robot OS")
		float wx;
		
    
		
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Robot OS")
		float wy;
		
    
		
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Robot OS")
		float wz;
		
    

	rapidjson::Value Serialization(rapidjson::Document & d);
	void Unserialization(rapidjson::Value & v);

	std::string TypeName = "dji_sdk/AttitudeQuaternion";

};


UCLASS()
class U_dji_sdk_AttitudeQuaternionAdvertiser : public UAdvertiser
{

	GENERATED_UCLASS_BODY()

public:
	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	static U_dji_sdk_AttitudeQuaternionAdvertiser * Create_AttitudeQuaternion_Advertiser(FString TopicName);

	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	void Publish(F_dji_sdk_AttitudeQuaternion Data);
};

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(F_dji_sdk_AttitudeQuaternionDelegate, F_dji_sdk_AttitudeQuaternion, Data);

UCLASS()
class U_dji_sdk_AttitudeQuaternionSubscriber : public USubscriber
{
	GENERATED_UCLASS_BODY()
public:
	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	static U_dji_sdk_AttitudeQuaternionSubscriber * Create_AttitudeQuaternion_Subscriber(FString _TopicName);

	virtual void ProccessMsg(rapidjson::Value & obj);

	UPROPERTY(BlueprintAssignable, Category = "Robot OS")
	F_dji_sdk_AttitudeQuaternionDelegate OnAttitudeQuaternionData;

	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	virtual void OnRecieve(F_dji_sdk_AttitudeQuaternion Data);
};









USTRUCT()
struct F_actionlib_msgs_GoalID
{

	GENERATED_USTRUCT_BODY()

    
		
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Robot OS")
		int32 stamp;
		
    
		
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Robot OS")
		FString id;
		
    

	rapidjson::Value Serialization(rapidjson::Document & d);
	void Unserialization(rapidjson::Value & v);

	std::string TypeName = "actionlib_msgs/GoalID";

};


UCLASS()
class U_actionlib_msgs_GoalIDAdvertiser : public UAdvertiser
{

	GENERATED_UCLASS_BODY()

public:
	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	static U_actionlib_msgs_GoalIDAdvertiser * Create_GoalID_Advertiser(FString TopicName);

	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	void Publish(F_actionlib_msgs_GoalID Data);
};

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(F_actionlib_msgs_GoalIDDelegate, F_actionlib_msgs_GoalID, Data);

UCLASS()
class U_actionlib_msgs_GoalIDSubscriber : public USubscriber
{
	GENERATED_UCLASS_BODY()
public:
	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	static U_actionlib_msgs_GoalIDSubscriber * Create_GoalID_Subscriber(FString _TopicName);

	virtual void ProccessMsg(rapidjson::Value & obj);

	UPROPERTY(BlueprintAssignable, Category = "Robot OS")
	F_actionlib_msgs_GoalIDDelegate OnGoalIDData;

	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	virtual void OnRecieve(F_actionlib_msgs_GoalID Data);
};









USTRUCT()
struct F_actionlib_msgs_GoalStatus
{

	GENERATED_USTRUCT_BODY()

    
		
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Robot OS")
		F_actionlib_msgs_GoalID goal_id;
		
    
		
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Robot OS")
		uint8 status;
		
    
		
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Robot OS")
		FString text;
		
    

	rapidjson::Value Serialization(rapidjson::Document & d);
	void Unserialization(rapidjson::Value & v);

	std::string TypeName = "actionlib_msgs/GoalStatus";

};


UCLASS()
class U_actionlib_msgs_GoalStatusAdvertiser : public UAdvertiser
{

	GENERATED_UCLASS_BODY()

public:
	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	static U_actionlib_msgs_GoalStatusAdvertiser * Create_GoalStatus_Advertiser(FString TopicName);

	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	void Publish(F_actionlib_msgs_GoalStatus Data);
};

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(F_actionlib_msgs_GoalStatusDelegate, F_actionlib_msgs_GoalStatus, Data);

UCLASS()
class U_actionlib_msgs_GoalStatusSubscriber : public USubscriber
{
	GENERATED_UCLASS_BODY()
public:
	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	static U_actionlib_msgs_GoalStatusSubscriber * Create_GoalStatus_Subscriber(FString _TopicName);

	virtual void ProccessMsg(rapidjson::Value & obj);

	UPROPERTY(BlueprintAssignable, Category = "Robot OS")
	F_actionlib_msgs_GoalStatusDelegate OnGoalStatusData;

	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	virtual void OnRecieve(F_actionlib_msgs_GoalStatus Data);
};









USTRUCT()
struct F_sensor_msgs_MultiEchoLaserScan
{

	GENERATED_USTRUCT_BODY()

    
		
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Robot OS")
		F_std_msgs_Header header;
		
    
		
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Robot OS")
		float angle_min;
		
    
		
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Robot OS")
		float angle_max;
		
    
		
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Robot OS")
		float angle_increment;
		
    
		
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Robot OS")
		float time_increment;
		
    
		
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Robot OS")
		float scan_time;
		
    
		
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Robot OS")
		float range_min;
		
    
		
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Robot OS")
		float range_max;
		
    
		
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Robot OS")
		TArray<F_sensor_msgs_LaserEcho> ranges;
		
    
		
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Robot OS")
		TArray<F_sensor_msgs_LaserEcho> intensities;
		
    

	rapidjson::Value Serialization(rapidjson::Document & d);
	void Unserialization(rapidjson::Value & v);

	std::string TypeName = "sensor_msgs/MultiEchoLaserScan";

};


UCLASS()
class U_sensor_msgs_MultiEchoLaserScanAdvertiser : public UAdvertiser
{

	GENERATED_UCLASS_BODY()

public:
	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	static U_sensor_msgs_MultiEchoLaserScanAdvertiser * Create_MultiEchoLaserScan_Advertiser(FString TopicName);

	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	void Publish(F_sensor_msgs_MultiEchoLaserScan Data);
};

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(F_sensor_msgs_MultiEchoLaserScanDelegate, F_sensor_msgs_MultiEchoLaserScan, Data);

UCLASS()
class U_sensor_msgs_MultiEchoLaserScanSubscriber : public USubscriber
{
	GENERATED_UCLASS_BODY()
public:
	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	static U_sensor_msgs_MultiEchoLaserScanSubscriber * Create_MultiEchoLaserScan_Subscriber(FString _TopicName);

	virtual void ProccessMsg(rapidjson::Value & obj);

	UPROPERTY(BlueprintAssignable, Category = "Robot OS")
	F_sensor_msgs_MultiEchoLaserScanDelegate OnMultiEchoLaserScanData;

	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	virtual void OnRecieve(F_sensor_msgs_MultiEchoLaserScan Data);
};









USTRUCT()
struct F_dji_sdk_FlightControlInfo
{

	GENERATED_USTRUCT_BODY()

    
		
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Robot OS")
		uint8 control_mode;
		
    
		
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Robot OS")
		uint8 cur_ctrl_dev_in_navi_mode;
		
    
		
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Robot OS")
		uint8 serial_req_status;
		
    
		
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Robot OS")
		uint8 virtual_rc_status;
		
    

	rapidjson::Value Serialization(rapidjson::Document & d);
	void Unserialization(rapidjson::Value & v);

	std::string TypeName = "dji_sdk/FlightControlInfo";

};


UCLASS()
class U_dji_sdk_FlightControlInfoAdvertiser : public UAdvertiser
{

	GENERATED_UCLASS_BODY()

public:
	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	static U_dji_sdk_FlightControlInfoAdvertiser * Create_FlightControlInfo_Advertiser(FString TopicName);

	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	void Publish(F_dji_sdk_FlightControlInfo Data);
};

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(F_dji_sdk_FlightControlInfoDelegate, F_dji_sdk_FlightControlInfo, Data);

UCLASS()
class U_dji_sdk_FlightControlInfoSubscriber : public USubscriber
{
	GENERATED_UCLASS_BODY()
public:
	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	static U_dji_sdk_FlightControlInfoSubscriber * Create_FlightControlInfo_Subscriber(FString _TopicName);

	virtual void ProccessMsg(rapidjson::Value & obj);

	UPROPERTY(BlueprintAssignable, Category = "Robot OS")
	F_dji_sdk_FlightControlInfoDelegate OnFlightControlInfoData;

	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	virtual void OnRecieve(F_dji_sdk_FlightControlInfo Data);
};









USTRUCT()
struct F_sensor_msgs_MagneticField
{

	GENERATED_USTRUCT_BODY()

    
		
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Robot OS")
		F_std_msgs_Header header;
		
    
		
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Robot OS")
		F_geometry_msgs_Vector3 magnetic_field;
		
    

	rapidjson::Value Serialization(rapidjson::Document & d);
	void Unserialization(rapidjson::Value & v);

	std::string TypeName = "sensor_msgs/MagneticField";

};


UCLASS()
class U_sensor_msgs_MagneticFieldAdvertiser : public UAdvertiser
{

	GENERATED_UCLASS_BODY()

public:
	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	static U_sensor_msgs_MagneticFieldAdvertiser * Create_MagneticField_Advertiser(FString TopicName);

	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	void Publish(F_sensor_msgs_MagneticField Data);
};

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(F_sensor_msgs_MagneticFieldDelegate, F_sensor_msgs_MagneticField, Data);

UCLASS()
class U_sensor_msgs_MagneticFieldSubscriber : public USubscriber
{
	GENERATED_UCLASS_BODY()
public:
	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	static U_sensor_msgs_MagneticFieldSubscriber * Create_MagneticField_Subscriber(FString _TopicName);

	virtual void ProccessMsg(rapidjson::Value & obj);

	UPROPERTY(BlueprintAssignable, Category = "Robot OS")
	F_sensor_msgs_MagneticFieldDelegate OnMagneticFieldData;

	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	virtual void OnRecieve(F_sensor_msgs_MagneticField Data);
};









USTRUCT()
struct F_dji_sdk_Velocity
{

	GENERATED_USTRUCT_BODY()

    
		
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Robot OS")
		F_std_msgs_Header header;
		
    
		
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Robot OS")
		int32 ts;
		
    
		
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Robot OS")
		float vx;
		
    
		
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Robot OS")
		float vy;
		
    
		
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Robot OS")
		float vz;
		
    
		
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Robot OS")
		uint8 health_flag;
		
    

	rapidjson::Value Serialization(rapidjson::Document & d);
	void Unserialization(rapidjson::Value & v);

	std::string TypeName = "dji_sdk/Velocity";

};


UCLASS()
class U_dji_sdk_VelocityAdvertiser : public UAdvertiser
{

	GENERATED_UCLASS_BODY()

public:
	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	static U_dji_sdk_VelocityAdvertiser * Create_Velocity_Advertiser(FString TopicName);

	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	void Publish(F_dji_sdk_Velocity Data);
};

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(F_dji_sdk_VelocityDelegate, F_dji_sdk_Velocity, Data);

UCLASS()
class U_dji_sdk_VelocitySubscriber : public USubscriber
{
	GENERATED_UCLASS_BODY()
public:
	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	static U_dji_sdk_VelocitySubscriber * Create_Velocity_Subscriber(FString _TopicName);

	virtual void ProccessMsg(rapidjson::Value & obj);

	UPROPERTY(BlueprintAssignable, Category = "Robot OS")
	F_dji_sdk_VelocityDelegate OnVelocityData;

	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	virtual void OnRecieve(F_dji_sdk_Velocity Data);
};


