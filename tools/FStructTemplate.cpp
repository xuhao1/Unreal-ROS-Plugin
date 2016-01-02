#include "Unreal_ROS.h"
#include "{{Header}}"

{% for Struct in StructList%}
{% set TypeName = Struct.name %}
{% set TypeNameFull = Struct.namefull %}
{% set Props = Struct.props %}
{% set FName = "F_"+Struct.GeneratedName %}
{% set ADName = "U_"+Struct.GeneratedName + "Advertiser" %}

void {{FName}}::Unserialization(rapidjson::Value & v)
{

	{% for item in Props %}
	{% set iname = item.name %}
	{% if item.Array and (not item.Constant) %}
        if (v.HasMember("{{iname}}") && v["{{iname}}"].IsArray())
        {
            rapidjson::Value & A{{iname}} = v["{{iname}}"];
            for (rapidjson::SizeType i = 0;i < A{{iname}}.Size();i++)
            {
                rapidjson::Value & kv = A{{iname}}[i];
                {%if item.type in Primitivelist %}
                    {% if (item.type != "string") %}
                        if (kv.Is{{JsonType[item.type]}}())
                        this->{{iname}}.Add(kv.Get{{JsonType[item.type]}}());
                    {% else %}
                        if (kv.IsString())
                            this->{{iname}}.Add(FString( kv.GetString()));
                    {% endif %}
                {% else %}
                    if (kv.IsObject())
                    {
                        {{item.UTypeElement}} e;
                        e.Unserialization(kv);
                        this->{{iname}}.Add(e);
                    }
                {%endif%}
            }
        }

	{% elif not item.Constant %}
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
    {%endif%}
    {% endif %}
    {% endfor %}

}

rapidjson::Value  {{FName}}::Serialization(rapidjson::Document & d)
{
	rapidjson::Value s(rapidjson::kObjectType);
{% for item in Props %}
    {% set iname = item.name %}
    rapidjson::Value t{{iname}};
    t{{item.name}}.SetString("{{iname}}");
    {% if item.Array %}
    rapidjson::Value A{{iname}}(rapidjson::kArrayType);
    for ({{item.UTypeElement}} Element : {{iname}})
    {
        {% set etype = item.UTypeElement %}
        {%if item.type  in Primitivelist%}
            {% if (item.type != "string") %}
                A{{iname}}.PushBack(Element,d.GetAllocator());
            {% else %}
                rapidjson::Value s{{iname}};
                std::string fuck_{{iname}} = TCHAR_TO_UTF8( * Element);
                s{{iname}}.SetString(rapidjson::StringRef(fuck_{{iname}}.c_str()));
                A{{iname}}.PushBack(s{{iname}}, d.GetAllocator());
            {% endif %}
        {% else %}
                A{{iname}}.PushBack(Element.Serialization(d), d.GetAllocator());
        {% endif %}
    }
    s.AddMember(t{{iname}},A{{iname}},d.GetAllocator());
    {% else %}
        {%if item.type in Primitivelist%}
            {% if (item.type != "string") %}
                s.AddMember(t{{iname}},this->{{iname}},d.GetAllocator());
            {% else %}
                rapidjson::Value s{{iname}};
                std::string fuck_{{iname}} = TCHAR_TO_UTF8( * this->{{iname}});
                s{{iname}}.SetString(rapidjson::StringRef(fuck_{{iname}}.c_str()));
                s.AddMember(t{{iname}},s{{iname}}, d.GetAllocator());
            {% endif %}
        {% else %}
                s.AddMember(t{{iname}}, this->{{iname}}.Serialization(d), d.GetAllocator());
        {% endif %}
    {% endif %}
{% endfor %}
		return s;
	}

{{ADName}} * {{ADName}}::Create_{{TypeName}}_Advertiser(FString TopicName)
{
	{{ADName}} * c = NewObject<{{ADName}}>();
	c->TopicName = TopicName;
	c->Advertise();
	return c;
}

void {{ADName}}::Publish({{FName}} Data)
{
    if (!Advertised)
    {
        Advertise();
    }
    rapidjson::Document d;
    d.SetObject();
    d.AddMember("msg",Data.Serialization(d),d.GetAllocator());
    rapidjson::Value TopicName;
	TopicName.SetString(rapidjson::StringRef(TCHAR_TO_UTF8(*this->TopicName)));
	d.AddMember("topic", TopicName, d.GetAllocator());
    d.AddMember("op","publish",d.GetAllocator());
    SendJson(d);
}

{{ADName}}::{{ADName}}(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	this->TypeName = FString("{{TypeNameFull}}");
}

{% set SBName = "U_"+Struct.GeneratedName + "Subscriber" %}
{{SBName}}::{{SBName}}(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	this->TypeName = FString("{{TypeNameFull}}");
}
void {{SBName}}::ProccessMsg(rapidjson::Value & obj)
{
    {{FName}} fdata;
    fdata.Unserialization(obj);
    On{{TypeName}}Data.Broadcast(fdata);
    OnRecieve(fdata);
}

void {{SBName}}::OnRecieve({{FName}} Data)
{
}

{{SBName}} * {{SBName}}::Create_{{TypeName}}_Subscriber(FString _TopicName)
{
    {{SBName}} * sub = NewObject<{{SBName}}>();
	sub->TopicName = _TopicName;
	sub->Subscribe();
	return sub;
}

{% endfor %}
