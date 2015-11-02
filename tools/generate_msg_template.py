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
    def __init__(self,name,bra,type,pkg):
        self.name = name
        self.type = type
        self.Array = (bra == "[]")
        self.pkg = pkg
    def Update(self,Msg):
        if self.type in Primitivelist:
            self.UType = Primitivelist[self.type]
        else:
            if self.pkg+"/"+self.type in UserTypeList:
                self.UType = "F_"+UserTypeList[self.pkg+"/"+self.type].GeneratedName
                UserTypeList[self.pkg+"/"+self.type].ReferenceBy.add(Msg)
                Msg.ReferenceTypes.add(self.pkg+"/"+self.type)
            elif "std_msgs" + "/" + self.type in UserTypeList:
                self.UType = "F_"+UserTypeList["std_msgs" + "/" + self.type].GeneratedName
                UserTypeList["std_msgs" + "/" + self.type].ReferenceBy.add(Msg)
                Msg.ReferenceTypes.add("std_msgs" + "/" + self.type)
            else:
                self.UType = "F_"+UserTypeList[self.type].GeneratedName
                UserTypeList[self.type].ReferenceBy.add(Msg)
                Msg.ReferenceTypes.add(self.type)

        if self.Array:
            self.UTypeElement = self.UType
            self.UType = "TArray<" + self.UType + ">"

    def __str__(self):
        return "Field {0} {1} + isArray : {2}".format(self.type,self.name,self.Array)

class MsgType:
    def __init__(self,name,props,pkg):
        self.name = name
        self.namefull = pkg+"/"+name
        self.props = props
        self.ReferenceTypes = set()
        self.ReferenceBy = set()
        #for k in self.props:
        #    if not k.type in Primitivelist:
        #        self.ReferenceTypes.add(k.type)
        UserTypeList[pkg+"/"+self.name] = self
        #if len(self.ReferenceTypes)>0:
        #   print self.ReferenceTypes
        self.GeneratedName = "{0}_{1}".format(pkg,name)

    def __str__(self):
        str = "Type:" + self.name + "\n"
        for k in self.props:
            str += (k.__str__() + "\n")
        return str + ""
    def Update(self):
        for k in self.props:
            k.Update(self)
        print "Update Type {0} as F_{1}".format(self.namefull,self.GeneratedName)
        print self
        #print self.ReferenceTypes

def AnalyseMsgStr(pkg,fstr, name):
    defs = re.findall("^\s*([\w/]+)(\[?\]?)\s+(\w+)\s$", fstr, re.M)
    #print defs
    MsgList = [MsgField(v,b,k,pkg) for k,b,v in defs]
    return MsgType(name,MsgList,pkg)


def AnalyseMsgFile(pkg,file_name):
    fstr = open(file_name).read()
    path_list = re.compile("[/\\\.]").split(file_name)
    name = path_list[len(path_list)-2]
    return AnalyseMsgStr(pkg,fstr, name)

import os
def TopologicalSorting(msgs):
    #for msg in msgs:
    #    print msg.ReferenceTypes
    NoReferenced = list()
    Poped = True
    #test = set()
    #test.
    TotalNum = len(msgs)
    while Poped:
        Poped = False
        for AMsg in msgs:
            #print "Analyse : " + AMsg.__str__()
            if len(AMsg.ReferenceTypes) == 0:
                for k in AMsg.ReferenceBy:
                    #print "k is \n" + k.__str__()
                    #print k.ReferenceTypes
                    k.ReferenceTypes.remove(AMsg.namefull)
                Poped = True
                NoReferenced.append(AMsg)
                msgs.remove(AMsg)
                break

    print "Success Topoligical Sorting : {0}".format(len(NoReferenced) == TotalNum)
    return NoReferenced

def AnalyseMsgDirectory(path,p1,p2):
    ros_pkgs = next(os.walk(path))[1]
    print "Analyse {0}".format(ros_pkgs)
    import glob
    MsgList = set()
    for pkg in ros_pkgs:
        msgs = map(lambda path: AnalyseMsgFile(pkg,path), glob.glob(path+'/'+pkg+'/msg'+"/*.msg"))
        MsgList = MsgList.union(msgs)
    for msg in MsgList:
        msg.Update()
    MsgListRight =  TopologicalSorting(MsgList)
    #print MsgList
    fstr = open("FStructTemplate.h").read()
    fstrpp = open("FStructTemplate.cpp").read()

    from jinja2 import Template
    template = Template(fstr)
    templatepp = Template(fstrpp)


    rdict = {
        "Header" : "ros_msg_test.h",
        "StructList" : MsgListRight,
        "Primitivelist" : Primitivelist,
        "UserTypeList" : UserTypeList,
        "JsonType" : JsonType
    }
    f = open(p1,"w")
    fpp = open(p2,"w")
    f.write(template.render(**rdict))
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
