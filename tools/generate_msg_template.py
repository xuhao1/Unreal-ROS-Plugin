Primitivelist = {
    "bool": "bool",
    "int8": "int32",
    "uint8": "int32",
    "int16": "int32",
    "uint16": "int32",
    "int32": "int32",
    "uint32": "int32",
    "int64": "int64",
    "uint64": "int64",
    "float32": "float",
    "float64": "double",
    "string": "FString",
    "time": "int64",
    "duration": "int64"
}


JsonType = {
    "bool" : "Bool",
    "int8" : "Int",
    "int16" : "Int",
    "int32" : "Int",
    "uint8": "Int",
    "uint16": "Int",
    "uint32": "Int",
    "time" : "Int64",
    "duration" : "Int64",
    "float32" : "Double",
    "float64" : "Double"
}

UserTypeList = dict()

import re


class MsgField:
    def __init__(self,name,type):
        self.name = name
        self.type = type
    def __str__(self):
        return "Field {0} {1}".format(self.type,self.name)

class MsgType:
    def __init__(self,name,props):
        self.name = name
        self.namefull = name
        self.props = props
        if not (self.name in UserTypeList):
            UserTypeList[self.name] = self

    def __str__(self):
        str = "Type:" + self.name + "\n"
        for k in self.props:
            str += (k.__str__() + "\n")
        return str + ""

def AnalyseMsgStr(fstr, name):
    defs = re.findall("^\s*(\w+)\s+(\w+)", fstr, re.M)
    MsgList = [MsgField(v,k) for k,v in defs]
    return MsgType(name,MsgList)


def AnalyseMsgFile(file_name):
    fstr = open(file_name).read()
    path_list = re.compile("[/\\\.]").split(file_name)
    name = path_list[len(path_list)-2]
    return AnalyseMsgStr(fstr, name)


def AnalyseMsgDirectory(path,p1,p2):
    import glob
    MsgList = map(AnalyseMsgFile, glob.glob(path+"/*.msg"))
    fstr = open("FStructTemplate.h").read()
    fstrpp = open("FStructTemplate.cpp").read()

    from jinja2 import Template
    template = Template(fstr)
    templatepp = Template(fstrpp)

    f = open(p1,"w")
    fpp = open(p2,"w")

    f.write(template.render(StructList = MsgList,Primitivelist = Primitivelist,UserTypeList=UserTypeList,JsonType = JsonType))
    fpp.write(templatepp.render(Header = "ros_msg_test.h",StructList = MsgList,Primitivelist = Primitivelist,UserTypeList=UserTypeList,JsonType = JsonType))

if __name__ == "__main__":
    import sys
    argv = sys.argv
    if (len(argv) < 2):
        print "Generate From Data folder"
        p1 = "C:\\Users\\hao\\Desktop\\ROS_TEST\\Source\\ROS_TEST\\ros_msg_test.h"
        p2 = "C:\\Users\\hao\\Desktop\\ROS_TEST\\Source\\ROS_TEST\\ros_msg_test.cpp"

        print AnalyseMsgDirectory("data",p1,p2)
    else:
        print AnalyseMsgDirectory(sys.argv[1])
