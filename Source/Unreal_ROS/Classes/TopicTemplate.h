#pragma once

#include "Unreal_ROS.h"
#include "EngineMinimal.h"
#include <rapidjson/document.h>
#include <rapidjson/rapidjson.h>
#include <map>
#include <functional>
#include "Runtime/Networking/Public/Networking.h"
#include "Runtime/Networking/Public/Interfaces/IPv4/IPv4Endpoint.h"
#include "Runtime/Networking/Public/Common/TcpSocketBuilder.h"
#include "Runtime/Networking/Public/Common/UdpSocketBuilder.h"
#include "Runtime/Networking/Public/Interfaces/IPv4/IPv4Address.h"
#include "Runtime/Sockets/Public/Sockets.h"
#if PLATFORM_WINDOWS
#include "AllowWindowsPlatformTypes.h" 
#include <thread>
#include <mutex>
#include <vector>
#include <set>
#include "HideWindowsPlatformTypes.h"
#else
#include <thread>
#endif
#include <rapidjson/stringbuffer.h>
#include <rapidjson/writer.h>
#include "Runtime/Networking/Public/Common/UdpSocketReceiver.h"
#include "TopicTemplate.generated.h"

typedef std::function<void(rapidjson::Value & v)> SubscribeCB;
#define isUDP

class TCPClient
{
public:
	static FSocket * InitNetwork(FString _RosMaster, int ThePort)
	{
		auto addr = ISocketSubsystem::Get(PLATFORM_SOCKETSUBSYSTEM)->CreateInternetAddr();
		bool isVaild = false;
		addr->SetIp(*_RosMaster,isVaild);
		addr->SetPort(ThePort);
		UE_LOG(LogTemp, Log, TEXT("Try to connect remote"));
		FSocket * sock = nullptr;
		sock = FUdpSocketBuilder(TEXT("test ros udp"))
			.AsReusable().AsNonBlocking();
		sock->Connect(*addr);
		return sock;
	}
	static uint8* RapidJson2Buffer(rapidjson::Document & d, int32 & Count)
	{
		rapidjson::StringBuffer buffer;
		rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
		d.Accept(writer);
		Count = buffer.GetSize();
		const char * str = buffer.GetString();
        uint8 * res = new uint8[Count];
        memcpy(res,str,sizeof(char)*Count);
		return res;
	}
};

UCLASS()
class UAdvertiser : public UObject
{

	GENERATED_UCLASS_BODY()
public:
	UFUNCTION(BlueprintCallable, Category = "Robot OS")
		static void InitRos(FString _RosMaster, int32 _ThePort);

	//UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Robot OS")
	FString TopicName;
	FString TypeName;
	//UFUNCTION(BlueprintCallable, Category = "Robot OS")
	bool Advertise();
	bool SendJson(rapidjson::Document &d);
	bool Advertised = false;

	FSocket * sock;

	~UAdvertiser()
	{
		sock->Close();
		delete sock;
	}
};


UCLASS()
class USubscriber : public UObject
{
	GENERATED_UCLASS_BODY()
public:
	FUdpSocketReceiver * Receiver = nullptr;
	std::mutex mtx;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Robot OS")
		FString TopicName;
	FString TypeName;
	virtual void ProccessMsg(rapidjson::Value & obj);
	void Subscribe();
	bool SendJson(rapidjson::Document &d);

	UFUNCTION(BlueprintCallable, Category = "Robot OS")
		static USubscriber * CreateDebugSubscriber(FString _TopicName, FString _TypeName);
	FSocket * sock;
	std::thread * th = nullptr;
	bool Running = true;
	uint8 * Data = nullptr;
	bool Subscring = false;

	~USubscriber()
	{
		Running = false;
		if (Receiver)
			Receiver->Stop();
		if (th != nullptr)
		{
			th->join();
		}
		sock->Close();
		delete sock;
	}
};