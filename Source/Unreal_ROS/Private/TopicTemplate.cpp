#include "Unreal_ROS.h"
#include "TopicTemplate.h"
#include "rapidjson/rapidjson.h"
#include "rapidjson/document.h"
#include <mutex>

FString RosMaster;
int ThePort;
UAdvertiser::UAdvertiser(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{

}


void UAdvertiser::InitRos(FString _RosMaster, int32 _ThePort)
{
	RosMaster = _RosMaster;
	ThePort = _ThePort;
}

bool UAdvertiser::Advertise()
{
	if (this->sock == nullptr)
	{
		this->sock = TCPClient::InitNetwork(RosMaster, ThePort);
	}
	rapidjson::Document d;
	d.SetObject();
	d.AddMember("op", "advertise", d.GetAllocator());
	d.AddMember("id", "fuck-id", d.GetAllocator());
	//UE_LOG(LogTemp, Log, TEXT("tname %s"), *this->TopicName);
	rapidjson::Value RTopicName;
	std::string temTN = TCHAR_TO_UTF8(*this->TopicName);
	RTopicName.SetString(rapidjson::StringRef(temTN.c_str()));
	d.AddMember("topic", RTopicName, d.GetAllocator());
	rapidjson::Value TypeName;
	std::string temTY = TCHAR_TO_UTF8(*this->TypeName);
	TypeName.SetString(rapidjson::StringRef(temTY.c_str()));
	d.AddMember("type", TypeName, d.GetAllocator());
	return (Advertised = SendJson(d));
}

bool UAdvertiser::SendJson(rapidjson::Document &d)
{
	int len = -1;
	int sent = -1;
	auto str = TCPClient::RapidJson2Buffer(d, len);
	sock->Send(str, len, sent);
	if (len != sent)
	{
		return false;
	}
	else {
		return true;
	}
}

USubscriber::USubscriber(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	Data = new uint8[1024 * 1024];
	memset(Data, 0, sizeof(char) * 1024 * 1024);
	Running = true;
}

void USubscriber::Subscribe()
{
	rapidjson::Document d;
	d.SetObject();
	d.AddMember("op", "subscribe", d.GetAllocator());
	d.AddMember("id", "fuck-id", d.GetAllocator());
	rapidjson::Value RTopicName;
	std::string temTN = TCHAR_TO_UTF8(*this->TopicName);
	RTopicName.SetString(rapidjson::StringRef(temTN.c_str()));
	d.AddMember("topic", RTopicName, d.GetAllocator());
	rapidjson::Value TypeName;
	std::string temTY = TCHAR_TO_UTF8(*this->TypeName);
	TypeName.SetString(rapidjson::StringRef(temTY.c_str()));
	d.AddMember("type", TypeName, d.GetAllocator());
	if (this->sock == nullptr)
	{
		this->sock = TCPClient::InitNetwork(RosMaster, ThePort);
		Receiver = new FUdpSocketReceiver(this->sock, 0, TEXT("nothing"));
		FOnSocketDataReceived & del = Receiver->OnDataReceived();
		del.BindLambda([&](FArrayReaderPtr ptr,FIPv4Endpoint ip) {
			memcpy(Data, ptr->GetData(), sizeof(char)*ptr->Num());
			FString fstr = UTF8_TO_TCHAR(Data);
			rapidjson::Document d;
			d.Parse((char *)Data);
			memset(Data, 0, sizeof(char)*ptr->Num());

			if (d.HasParseError())
			{
				UE_LOG(LogTemp, Log, TEXT("Wrong data"));
			}
			else
			{
				if (d.HasMember("op") && d["op"].GetType() == rapidjson::kStringType
					&& std::string(d["op"].GetString()) == "publish"
					&&d.HasMember("msg") && d["msg"].GetType() == rapidjson::kObjectType
					)
				{
					ProccessMsg(d["msg"]);
				}
			}
		});
	}
	this->Subscring = this->SendJson(d);
}

bool USubscriber::SendJson(rapidjson::Document &d)
{
	int len = -1;
	int sent = -1;
	auto str = TCPClient::RapidJson2Buffer(d, len);
	sock->Send(str, len, sent);
	if (len != sent)
	{
		return false;
	}
	else {
		return true;
	}
}


void USubscriber::ProccessMsg(rapidjson::Value & obj)
{
	UE_LOG(LogTemp, Log, TEXT("Recv Msg"));
}

USubscriber * USubscriber::CreateDebugSubscriber(FString _TopicName, FString _TypeName)
{
	USubscriber * sub = NewObject<USubscriber>();
	sub->TopicName = _TopicName;
	sub->TypeName = _TypeName;
	sub->Subscribe();
	return sub;
}