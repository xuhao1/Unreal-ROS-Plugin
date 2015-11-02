Primitivelist = {
    "byte" : "uint8",
    "char" : "uint8",
    "bool": "bool",
    "int8": "int32",
    "uint8": "uint8",
    "int16": "int32",
    "uint16": "int32",
    "int32": "int32",
    "uint32": "int32",
    "int64": "int32",
    "uint64": "int32",
    "float32": "float",
    "float64": "float",
    "string": "FString",
    "time": "int32",
    "duration": "int32"
}


JsonType = {
    "bool" : "Bool",
    "int8" : "Int",
    "int16" : "Int",
    "int32" : "Int",
    "int64" : "Int",
    "uint8": "Int",
    "uint16": "Int",
    "uint32": "Int",
    "uint64": "Int",
    "time" : "Int64",
    "duration" : "Int64",
    "float32" : "Double",
    "float64" : "Double",
    "byte" : "Int",
    "char" : "Int"
}

UserTypeList = dict()

import re

#TODO:
#Topological Sorting and PackageName
class MsgField:
    def __init__(self,name,pkg,bra,type):
        self.name = name
        self.type = type

        if bra == "[]":
            self.Array = True
            if self.type in Primitivelist:
                self.UTypeElement = Primitivelist[self.type]
                self.UType = "TArray<"+Primitivelist[self.type] + ">"
            else:
                self.UTypeElement = "FROS"+self.type
                self.UType = "TArray<FROS"+self.type + ">"
        else:
            self.Array = False
            if self.type in Primitivelist:
                self.UType = Primitivelist[self.type]
            else:
                self.UType = "FROS"+self.type
    def __str__(self):
        return "Field {0} {1} + isArray".format(self.type,self.name,self.Array)

class MsgType:
    def __init__(self,name,props,pkg):
        self.name = name
        self.namefull = pkg+"/"+name
        self.props = props
        self.ReferenceTypes = set()
        for k in self.props:
            if not k.type in Primitivelist:
                self.ReferenceTypes.add(k.type)
        UserTypeList[pkg+"/"+self.name] = self
        if len(self.ReferenceTypes)>0:
            print self.ReferenceTypes
    def __str__(self):
        str = "Type:" + self.name + "\n"
        for k in self.props:
            str += (k.__str__() + "\n")
        return str + ""

def AnalyseMsgStr(pkg,fstr, name):
    defs = re.findall("^\s*([\w/]+)(\[?\]?)\s+(\w+)", fstr, re.M)
    #print defs
    MsgList = [MsgField(v,b,k) for k,b,v in defs]
    return MsgType(name,MsgList,pkg)


def AnalyseMsgFile(pkg,file_name):
    fstr = open(file_name).read()
    path_list = re.compile("[/\\\.]").split(file_name)
    name = path_list[len(path_list)-2]
    return AnalyseMsgStr(pkg,fstr, name)

import os

def AnalyseMsgDirectory(path,p1,p2):
    ros_pkgs = next(os.walk(path))[1]
    print "Analyse {0}".format(ros_pkgs)
    import glob
    MsgList = []
    for pkg in ros_pkgs:
        MsgList.extend(map(lambda path: AnalyseMsgFile(pkg,path), glob.glob(path+'/'+pkg+'/msg'+"/*.msg")))
    fstr = open("FStructTemplate.h").read()
    fstrpp = open("FStructTemplate.cpp").read()

    from jinja2 import Template
    template = Template(fstr)
    templatepp = Template(fstrpp)


    rdict = {
        "Header" : "ros_msg_test.h",
        "StructList" : MsgList,
        "Primitivelist" : Primitivelist,
        "UserTypeList" : UserTypeList,
        "JsonType" : JsonType
    }
    #f = open(p1,"w")
    fpp = open(p2,"w")
    #f.write(template.render(**rdict))
    fpp.write(templatepp.render(**rdict))

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
