# Unreal-ROS-Plugin
An ROS plugin for unreal engine which let us work with ROS and Unreal Engine.

We are trying to develop a tool which can work with Unreal Engine and ROS so we can more easily devleop a VR application which will be better than OpenGL or QT3D. 

For an example, I will use DJI Onboard SDK with ROS for testing.
## Framework

Most Unreal applications (the video games) run on fast desktop or console systems, but ROS often runs on embedded systems like ARM Linux with the NVIDIA Tegra TK1. To get around this we use full roscpp client within Unreal, but rosbridge as the client. All the messages will pass through rosbridge via websocket to reduce the need to compile binaries. 

## Roadmap

### Display
First we will develop a controller which will pass odometry messages as to control for Unreal, and also a parameter from ROS to switch models.

### Control
We will develop a method to synchronize and then pass the control signal from Unreal to ROS. 

### Simulation
Simulation is the easiest thing for Unreal.

#### Msg2Unreal

Generate USTRUCT or UCLASS from msg define.

#### Service2Unreal

Generate Function from Service

#### Action2Unreal

Generate Action (with callback) from action definition.
