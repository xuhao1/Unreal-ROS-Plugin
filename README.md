# Unreal-ROS-Plugin
An ROS plugin for unreal engine which let us work robot os with unreal engine.

As for VR techonology uses more widely in robot area.For people who tried of ugly UI of somelike opengl or Qt.3D UI with Unreal maybe the most fancy we could obtain, so I am trying to develop a tool which can works unreal with ros so that we can easy develop VR application for robot.

## Framework

As we know, most Unreal applications (the video games) run on Windows platform , XBox , ps4, but ros often running on Embedded Systems like arm linux with Tegra k1. So what I am doing is not running an full roscpp client within Unreal but using roslibjs as my client, all message will be pass through roslibjs,so that we don't need to compile so much binary files.
