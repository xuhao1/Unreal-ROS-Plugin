#pragma once

#include "ROS_TEST.h"
#include "TopicTemplate.h"
#include <string>
#include <rapidjson/document.h>
#include <rapidjson/rapidjson.h>
#include "ros_msg_test.generated.h"

{% for Struct in StructList%}
struct  F_{{Struct.GeneratedName}};
{% endfor %}


{% for Struct in StructList%}
{% set TypeName = Struct.name %}
{% set TypeNameFull = Struct.namefull %}
{% set Props = Struct.props %}
{% set FName = "F_"+Struct.GeneratedName %}
{% set ADName = "U_"+Struct.GeneratedName + "Advertiser" %}
USTRUCT()
struct {{FName}}
{

	GENERATED_USTRUCT_BODY()

    {% for item in Props:%}
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Robot OS")
	{{item.UType }} {{ item.name }};
    {% endfor %}

	rapidjson::Value Serialization(rapidjson::Document & d);
	void Unserialization(rapidjson::Value & v);

	std::string TypeName = "{{TypeNameFull}}";

};


UCLASS()
class {{ADName}} : public UAdvertiser
{

	GENERATED_UCLASS_BODY()

public:
	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	static {{ADName}} * Create_{{TypeName}}_Advertiser(FString TopicName);

	UFUNCTION(BlueprintCallable, Category = "Robot OS")
	void Publish({{FName}} Data);
};

{% endfor %}

