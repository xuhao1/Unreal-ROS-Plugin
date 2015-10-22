Primitivelist = {
    "bool": "uint8_t",
    "int8": "int8_t",
    "uint8": "uint8_t",
    "int16": "int16_t",
    "uint16": "uint16_t",
    "int32": "int32_t",
    "uint32": "uint32_t",
    "int64": "int64_t",
    "uint64": "uint64_t",
    "float32": "float",
    "float64": "double",
    "string": "std::string",
    "time": "int32_t",
    "duration": "int32_t"
}

import re


def MakeProperty(k, v):
    if k in Primitivelist:
        return "UPROPERTY(EditAnywhere, BlueprintReadWrite,Category=\"Robot OS\")\n    {0} {1};\n".format(k, v)
    else:
        return "UPROPERTY(EditAnywhere, BlueprintReadWrite,Category=\"Robot OS\")\n    {0} * {1} = nullptr;\n".format(k, v)


def AnalyseMsgStr(fstr, name):
    pattern = re.compile(r"^\s([#\w]+) (\w+)\s", re.M)
    defs = re.findall("^\s*(\w+)\s+(\w+)", fstr, re.M)
    varsdef = [MakeProperty(k, v) for k, v in defs]
    structdef = """USTRUCT(Category="Robot OS")
struct F%s
{
    GENERATED_USTRUCT_BODY()

%s
};""" % (name, "\n    ".join(varsdef))
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
