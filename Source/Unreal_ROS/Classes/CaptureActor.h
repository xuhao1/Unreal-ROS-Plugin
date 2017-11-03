#pragma once
#include "Unreal_ROS.h"
#include "Engine.h"
#include "Engine/SceneCapture2D.h"
#include <string>
#include "CaptureActor.generated.h"

UCLASS()
class ACameraCapturer : public ASceneCapture2D
{
	GENERATED_BODY()

private_subobject:

	UTextureRenderTarget2D* TextureRenderTarget;

	std::string cam_id;
public:
	ACameraCapturer();
	void SetCameraID(std::string _cam_id);
	~ACameraCapturer();
	
	void BeginPlay() override;
	void ShowCameraView(std::string CameraID, UTextureRenderTarget2D* CameraTexture2D);
	void Tick(float DeltaSeconds) override;
};
