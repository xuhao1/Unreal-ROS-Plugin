#include "ROS_TEST.h"
#include "{{Header}}"

{% for Struct in StructList%}
{% set TypeName = Struct.name %}
{% set TypeNameFull = Struct.namefull %}
{% set Props = Struct.props %}

void F{{TypeName}}::Unserialization(rapidjson::Value & v)
{
	{% for item in Props %}
	{% set iname = item.name %}
    {%if item.type in Primitivelist%}
        {% if (item.type != "string") %}
    if (v.HasMember("{{iname}}") && v["{{iname}}"].Is{{JsonType[item.type]}}())
         this->{{iname}} = v["{{iname}}"].Get{{JsonType[item.type]}}();
        {% else %}
    if (v.HasMember("{{iname}}") && v["{{iname}}"].IsString())
        this->{{iname}} = FString( v["{{iname}}"].GetString());
        {% endif %}
    {% else %}
    if (v.HasMember("{{iname}}") && v["{{iname}}"].IsObject())
        this->{{iname}}.Unserialization(v["{{iname}}"]);
    {% endif %}
    {% endfor %}
}

rapidjson::Value  F{{TypeName}}::Serialization(rapidjson::Document & d)
{
	rapidjson::Value s(rapidjson::kObjectType);
{% for item in Props %}
    {% set iname = item.name %}
    rapidjson::Value t{{iname}};
    t{{item.name}}.SetString("{{iname}}");
    {%if item.type in Primitivelist%}
        {% if (item.type != "string") %}
            s.AddMember(t{{iname}},this->{{iname}},d.GetAllocator());
        {% else %}
            rapidjson::Value s{{iname}};
            char * fuck_{{iname}} = TCHAR_TO_UTF8( * this->{{iname}});
            s{{iname}}.SetString(rapidjson::StringRef(fuck_{{iname}}));
            s.AddMember(t{{iname}},s{{iname}}, d.GetAllocator());
        {% endif %}
    {% else %}
            s.AddMember(t{{iname}}, this->{{iname}}.Serialization(d), d.GetAllocator());
    {% endif %}
{% endfor %}
		return s;
	}

U{{TypeName}}Advertiser * U{{TypeName}}Advertiser::Create_{{TypeName}}_Advertiser(FString TopicName)
{
	U{{TypeName}}Advertiser * c = NewObject<U{{TypeName}}Advertiser>();
	c->TopicName = TopicName;
	c->Advertise();
	return c;
}
void U{{TypeName}}Advertiser::Publish(F{{TypeName}} Data)
{
}
U{{TypeName}}Advertiser::U{{TypeName}}Advertiser(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	this->TypeName = FString("{{TypeNameFull}}");
}
{% endfor %}