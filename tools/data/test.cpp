#ifndef UNREAL_ROS_STRUCTS
#define UNREAL_ROS_STRUCTS
#include <string>
#include "EngineMinimal.h"
struct Facc;
struct Fattitude_quad;
struct Fgimbal;
struct Fglobal_position;
struct Flocal_position;
struct Frc_channels;
struct Fvelocity;

USTRUCT(Category="Robot OS")
struct Facc
{
    GENERATED_USTRUCT_BODY()

UPROPERTY(EditAnywhere, BlueprintReadWrite,Category="Robot OS")
    int32 ts;

    UPROPERTY(EditAnywhere, BlueprintReadWrite,Category="Robot OS")
    float32 ax;

    UPROPERTY(EditAnywhere, BlueprintReadWrite,Category="Robot OS")
    float32 ay;

    UPROPERTY(EditAnywhere, BlueprintReadWrite,Category="Robot OS")
    float32 az;

};

USTRUCT(Category="Robot OS")
struct Fattitude_quad
{
    GENERATED_USTRUCT_BODY()

UPROPERTY(EditAnywhere, BlueprintReadWrite,Category="Robot OS")
    int32 ts;

    UPROPERTY(EditAnywhere, BlueprintReadWrite,Category="Robot OS")
    float32 q0;

    UPROPERTY(EditAnywhere, BlueprintReadWrite,Category="Robot OS")
    float32 q1;

    UPROPERTY(EditAnywhere, BlueprintReadWrite,Category="Robot OS")
    float32 q2;

    UPROPERTY(EditAnywhere, BlueprintReadWrite,Category="Robot OS")
    float32 q3;

    UPROPERTY(EditAnywhere, BlueprintReadWrite,Category="Robot OS")
    float32 wx;

    UPROPERTY(EditAnywhere, BlueprintReadWrite,Category="Robot OS")
    float32 wy;

    UPROPERTY(EditAnywhere, BlueprintReadWrite,Category="Robot OS")
    float32 wz;

};

USTRUCT(Category="Robot OS")
struct Fgimbal
{
    GENERATED_USTRUCT_BODY()

UPROPERTY(EditAnywhere, BlueprintReadWrite,Category="Robot OS")
    float32 pitch;

    UPROPERTY(EditAnywhere, BlueprintReadWrite,Category="Robot OS")
    float32 yaw;

    UPROPERTY(EditAnywhere, BlueprintReadWrite,Category="Robot OS")
    float32 roll;

};

USTRUCT(Category="Robot OS")
struct Fglobal_position
{
    GENERATED_USTRUCT_BODY()

UPROPERTY(EditAnywhere, BlueprintReadWrite,Category="Robot OS")
    int32 ts;

    UPROPERTY(EditAnywhere, BlueprintReadWrite,Category="Robot OS")
    float64 lat;

    UPROPERTY(EditAnywhere, BlueprintReadWrite,Category="Robot OS")
    float64 lon;

    UPROPERTY(EditAnywhere, BlueprintReadWrite,Category="Robot OS")
    float32 alti;

    UPROPERTY(EditAnywhere, BlueprintReadWrite,Category="Robot OS")
    float32 height;

    UPROPERTY(EditAnywhere, BlueprintReadWrite,Category="Robot OS")
    float32 uncertain;

};

USTRUCT(Category="Robot OS")
struct Flocal_position
{
    GENERATED_USTRUCT_BODY()

UPROPERTY(EditAnywhere, BlueprintReadWrite,Category="Robot OS")
    int32 ts;

    UPROPERTY(EditAnywhere, BlueprintReadWrite,Category="Robot OS")
    float32 x;

    UPROPERTY(EditAnywhere, BlueprintReadWrite,Category="Robot OS")
    float32 y;

    UPROPERTY(EditAnywhere, BlueprintReadWrite,Category="Robot OS")
    float32 height;

};

USTRUCT(Category="Robot OS")
struct Frc_channels
{
    GENERATED_USTRUCT_BODY()

UPROPERTY(EditAnywhere, BlueprintReadWrite,Category="Robot OS")
    float32 roll;

    UPROPERTY(EditAnywhere, BlueprintReadWrite,Category="Robot OS")
    float32 pitch;

    UPROPERTY(EditAnywhere, BlueprintReadWrite,Category="Robot OS")
    float32 yaw;

    UPROPERTY(EditAnywhere, BlueprintReadWrite,Category="Robot OS")
    float32 throttle;

    UPROPERTY(EditAnywhere, BlueprintReadWrite,Category="Robot OS")
    float32 mode;

    UPROPERTY(EditAnywhere, BlueprintReadWrite,Category="Robot OS")
    float32 gear_up;

};

USTRUCT(Category="Robot OS")
struct Fvelocity
{
    GENERATED_USTRUCT_BODY()

UPROPERTY(EditAnywhere, BlueprintReadWrite,Category="Robot OS")
    int32 ts;

    UPROPERTY(EditAnywhere, BlueprintReadWrite,Category="Robot OS")
    float32 velx;

    UPROPERTY(EditAnywhere, BlueprintReadWrite,Category="Robot OS")
    float32 vely;

    UPROPERTY(EditAnywhere, BlueprintReadWrite,Category="Robot OS")
    float32 velz;

};


#endif
