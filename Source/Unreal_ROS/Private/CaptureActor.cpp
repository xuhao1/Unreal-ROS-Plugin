#include "Unreal_ROS.h"
#include "CaptureActor.h"
#include "Engine/TextureRenderTarget2D.h"
#include "opencv2/opencv.hpp"
#include <string>    
int id = 0;
ACameraCapturer::ACameraCapturer()
{
	//TextureRenderTarget = CreateDefaultSubobject<UTextureRenderTarget2D>(TEXT("Camera"));
	//TextureRenderTarget->InitAutoFormat(256, 256);
	//this->GetCaptureComponent2D()->CaptureSource = ESceneCaptureSource::SCS_FinalColorLDR;
	//this->GetCaptureComponent2D()->TextureTarget = TextureRenderTarget;
	//this->SetCameraID("fuck");
}
void ACameraCapturer::SetCameraID(std::string _cam_id)
{
	std::string camera_name = std::to_string(id);
	cam_id = camera_name;
	id ++;
}
ACameraCapturer::~ACameraCapturer()
{
}
void ACameraCapturer::ShowCameraView(std::string CameraID, UTextureRenderTarget2D* CameraTexture2D)
{
	TArray<FColor> FormatedImageData;
	FRenderTarget* RenderTarget = CameraTexture2D->GameThread_GetRenderTargetResource();
	if (RenderTarget)
	{
		if (RenderTarget->ReadPixels(FormatedImageData))
		{
			if (FormatedImageData.Num() != 0)
			{
				cv::Mat smallImage(cv::Size(256, 256), CV_8UC4, (unsigned char *)FormatedImageData.GetData());
				cv::imshow(CameraID.c_str(), smallImage);
			}
		}
	}
}
void ACameraCapturer::BeginPlay()
{
	Super::BeginPlay();
}

void ACameraCapturer::Tick(float DeltaSeconds)
{
	this->GetCaptureComponent2D()->UpdateContent();

	if (TextureRenderTarget->TextureReference.IsInitialized())
	{
		ShowCameraView(cam_id, TextureRenderTarget);
	}

	Super::Tick(DeltaSeconds);
}