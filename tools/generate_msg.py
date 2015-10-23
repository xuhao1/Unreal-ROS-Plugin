Primitivelist = {
    "bool": "bool",
    "int8": "int32",
    "uint8": "uint32",
    "int16": "int32",
    "uint16": "uint32",
    "int32": "int32",
    "uint32": "uint32",
    "int64": "int64",
    "uint64": "uint64",
    "float32": "float",
    "float64": "double",
    "string": "FString",
    "time": "ints32_t",
    "duration": "ints32_t"
}

UserTypeList = dict()

import re


def MakeProperty(var_type, var_name):
    if var_type in Primitivelist:
        return """UPROPERTY(EditAnywhere, BlueprintReadWrite,Category=\"Robot OS\")
            {0} {1};\n""".format(Primitivelist[var_type], var_name)
    elif var_type in UserTypeList:
        return """UPROPERTY(EditAnywhere, BlueprintReadWrite,Category=\"Robot OS\")
            {0} {1};\n""".format(UserTypeList[var_type], var_name)

def MakeSerialization(varsdef):
    SerialCodes = ""
    for var_type, var_name in varsdef:
        if var_type in Primitivelist:
            if (var_type != "string"):
                SerialCodes += """
                rapidjson::Value t{0};
                t{0}.SetString("{0}");
                s.AddMember(t{0}, this->{0}, d.GetAllocator());
                """.format(var_name)
            else:
                SerialCodes += """
                rapidjson::Value t{0},s{0};
                t{0}.SetString("{0}");
                char * fuck_{0} = TCHAR_TO_UTF8( * this->{0});
                s{0}.SetString(rapidjson::StringRef(fuck_{0}));
                s.AddMember(t{0},s{0}, d.GetAllocator());
                """.format(var_name)
        elif var_type in UserTypeList:
            SerialCodes += """
            rapidjson::Value t{0},s{0};
            t{0}.SetString("{0}");
            s.AddMember(t{0}, this->{0}.Serialization(d), d.GetAllocator());
            """.format(var_name)
    SerialFuncStr = """rapidjson::Value Serialization(rapidjson::Document & d){
    rapidjson::Value s(rapidjson::kObjectType);

    %s

    return s;
}""" % SerialCodes
    return SerialFuncStr


def MakeUnserialization(varsdef):
    unserialcodes = ""
    for var_type, var_name in varsdef:
        unserialcodes += """\n        if (v.HasMember(\"%s\"))""" % var_name
        RJsonType = "---"
        if var_type == "bool":
            RJsonType = "Bool"
        if var_type in ["int8", "int16", "int32"]:
            RJsonType = "Int"
        elif var_type == "int64":
            RJsonType = "Int64"
        elif var_type in ["uint8", "uint16", "uint32", "time", "duration"]:
            RJsonType = "UInt"
        elif var_type == "uint64":
            RJsonType = "UInt64"
        elif var_type == "float32":
            RJsonType = "Double"
        elif var_type == "float64":
            RJsonType = "Double"
        if RJsonType != "---":
            unserialcodes += """
                if (v["%s"].Is%s())
                    this->%s = v["%s"].Get%s();
                """ % (var_name, RJsonType, var_name, var_name, RJsonType)
            continue
        if var_type == "string":
            unserialcodes += """
            if (v["%s"].IsString())
                this->%s = FString(v["%s"].GetString());
            """ % (var_name, var_name, var_name)

        if var_type in UserTypeList:
            unserialcodes += """
            if (v["%s"].IsObject())
            {
                this->%s.Unserialization(v["%s"]);
            }""" % (var_name, var_name, var_name)

    UnserialFuncStr = """
        void Unserialization(rapidjson::Value & v) {
            %s
        }""" % unserialcodes
    return UnserialFuncStr


def AnalyseMsgStr(fstr, name):
    defs = re.findall("^\s*(\w+)\s+(\w+)", fstr, re.M)
    varsdef = [MakeProperty(k, v) for k, v in defs]
    structdef = """USTRUCT()
struct F%s
{
    GENERATED_USTRUCT_BODY()

%s
%s
%s
};""" % (name, "\n    ".join(varsdef), MakeSerialization(defs), MakeUnserialization(defs))
    return structdef


def AnalyseMsgFile(file_name):
    fstr = open(file_name).read()
    path_list = re.compile("[/\\\.]").split(file_name)
    name = path_list[len(path_list)-2]
    return "F"+name, AnalyseMsgStr(fstr, name)


def AnalyseMsgDirectory(path):
    import glob
    title_text = """#ifndef UNREAL_ROS_STRUCTS
#define UNREAL_ROS_STRUCTS
#include <string>
#include "EngineMinimal.h"
"""
    struct_text = ""
    for f in glob.glob(path+"/*.msg"):
        path_list = re.compile("[/\\\.]").split(f)
        name = path_list[len(path_list)-2]
        UserTypeList[name] = "F"+name
    for n, nstr in map(AnalyseMsgFile, glob.glob(path+"/*.msg")):
        title_text += "struct %s;\n" % n
        struct_text += "\n" + nstr + "\n"
    return title_text + struct_text + "\n\n#endif"

if __name__ == "__main__":
    import sys
    argv = sys.argv
    if (len(argv) < 2):
        print "Please Enter Dir Path"
    else:
        print AnalyseMsgDirectory(sys.argv[1])
