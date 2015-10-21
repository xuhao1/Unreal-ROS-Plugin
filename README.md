# Unreal-ROS-Plugin
An ROS plugin for unreal engine which let us work robot os with unreal engine.

As for VR techonology uses more widely in robot area.For people who tried of ugly UI of somelike opengl or Qt.3D UI with Unreal maybe the most fancy we could obtain, so I am trying to develop a tool which can works unreal with ros so that we can easy develop VR application for robot.

As for an example, I will use DJI Onboard SDK on ros for testing.
## Framework

As we know, most Unreal applications (the video games) run on Windows platform , XBox , ps4, but ros often running on Embedded Systems like arm linux with Tegra k1. So what I am doing is not running an full roscpp client within Unreal but using rosbridge as my client, all message will be pass through rosbridge via websocket,so that we don't need to compile so much binary files.

## Roadmap

### Display
First of all, I will develop a controller which pass odometry message as a controller for Unreal,and also parameter from ros to switch models

### Control
Beyond control system is developing, an import thing is to develop mechanism to synchronize.
And then I will pass the control signal from Unreal Engine to ROS.

### Simulation
Simulation is the most easy thing for Unreal.

### TODO

#### Connect
Connect Unreal to ROSBridge.

#### Msg2Unreal

Generate USTRUCT or UCLASS from msg define.

#### Service2Unreal

Generate Function from Service

#### Action2Unreal

Generate Action (with callback) from action definition.
