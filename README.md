# AIO-AIR
Project Overview
This is a compact, custom air quality monitor built around the ESP32-S3. I designed it to be an all-in-one solution for tracking environmental data, giving me a much better understanding of the air quality in my workspace.
How to Use
Flashing: No integrated flashing chip. You can use your choice of flashing device eg FT or CH chipsets, connect them respectively on the PCB.
Integration: The device is built to talk directly to Home Assistant via ESPHome/MQTT. Once you flash the firmware, it will show up as a sensor entity on your dashboard.
Monitoring: You can view real-time data on your dashboard or through the low power e ink display.
Why I Built This
Many makers do soldering, 3D printing, and working with various materials in an enclosed space. Like many of you, I realised that standard, off-the-shelf air quality sensors often lack the accuracy. I got tired of guessing if my ventilation was sufficient, so I designed this board to get accurate, reliable readings so I can actually manage the air quality while I work. Also for monitoring Co2 because sleep is important :)

![PCB_VIEW](https://github.com/CXD8/AIO-AIR/blob/d9f0ef8f0c7aa8631149ac495b6f79424e3bea27/Images/AIO-AIR_PCB_VIEW.png)
