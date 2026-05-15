# AIO-AIR
![PCB_VIEW](https://github.com/CXD8/AIO-AIR/blob/442d3a2c24b7729bdd5bd9ca3a3a449f0069b106/Images/AIO-AIR-fallout-zine-2026.png) \
**Project Overview**\
This is a compact, custom air quality monitor built around the ESP32-S3. I designed it to be an all-in-one solution for tracking environmental data, giving me a much better understanding of the air quality in my workspace.\
## Disclaimer
- **This project is intended for educational and research purposes only**
- **The author accepts no liability for regulatory non-compliance resulting from use of this project**
- **Users are solely responsible for ensuring compliance with all applicable local laws and regulations**
This project is provided **as-is, with absolutely no warranty of any kind**, express or implied. The author(s) accept **zero responsibility or liability** for any outcome resulting from the use, assembly, or operation of this hardware - including but not limited to property damage, fire, personal injury, or death.

**Use entirely at your own risk. The author(s) have no responsibility whatsoever for anything that goes wrong.**
- **Regulatory Disclaimer**
This project may use uncertified radio frequency (RF) modules. These components may have not been independently tested or certified for compliance such as for FCC (USA), CE (EU), or any other regulatory framework.
ard.**. The author(s) accept no responsibility for any damage, injury, or death caused.
- **No certification.** This design has not been tested, certified, or approved for any commercial, consumer, safety-critical, or regulatory-controlled application.
- **No guarantees.** The author(s) make no guarantees regarding the accuracy or fitness for purpose of the schematic, BOM, firmware, or any associated documentation.
**By using, building, or operating this project in any form, you accept full and sole responsibility for all risks and any consequences that arise.**
By using this project in any form, you agree to assume all associated risks and responsibilities.

**How to Use**\
Flashing: No integrated usb flashing feature. You can use your choice of usb flashing device eg FT or CH chipsets, connect them respectively on the PCB via the headers. Copy firmware into Ardiuno IDE or preffered flashing software, then flash directly.\
Integration: The device is built to talk directly to Home Assistant via ESPHome/MQTT. Once you flash the firmware, it will show up as a sensor entity on your dashboard. \
Features: You can view real-time data on your dashboard or through the low power e ink display. Optional fan with control and speed, status etc. Flexible desing, connect any device to the respective power, uart or spi pins.\
**Why I Built This**\
Many makers do soldering, 3D printing, and working with various materials in an enclosed space. Like many of you, I realised that standard, off-the-shelf air quality sensors often lack the accuracy. I got tired of guessing if my ventilation was sufficient, so I designed this board to get accurate, reliable readings so I can actually manage the air quality while I work. Also for monitoring Co2 because sleep is important :) |
![PCB_VIEW](https://github.com/CXD8/AIO-AIR/blob/d9f0ef8f0c7aa8631149ac495b6f79424e3bea27/Images/AIO-AIR_PCB_VIEW.png) \

Bill Of Materials
| Index | Designators | Part/Value | Package | LCSC Part Number | Quantity |
| :---: | :--- | :--- | :--- | :--- | :---: |
| 1 | C1, C6, C8, C9, C14, C19, C23, C24, C26, C42, C43 | 1uF | C0603 | C15849 | 11 |
| 2 | C2, C5, C16, C30, C36, C37, C40, C47, C49, C52 | 10uF | C0603 | C96446 | 10 |
| 3 | C3, C31, C32, C33, C34, C35, C41, C46, C48, C51 | 100nF | C0603 | C1591 | 10 |
| 4 | C18, C21, C25, C27 | 4.7uF | C0603 | C307467 | 4 |
| 5 | C38, C39, C44, C45 | 100uF | C1206 | C883598 | 4 |
| 6 | C7, C10, C28 | 22nF | C0603 | C21122 | 3 |
| 7 | C12, C13, C15 | CL10A475KL8NRNC | C0603 | C307467 | 3 |
| 8 | C11, C20 | 4.7uF | C0603 | C6119851 | 2 |
| 9 | C29, C50 | 10uF | C0603 | C1591 | 2 |
| 10 | C4 | 1.1nF | C0603 | C6563232 | 1 |
| 11 | C17 | CL10B104KB8NNNC | C0603 | C1591 | 1 |
| 12 | C22 | CL10A226MP8NUNE | C0603 | C86295 | 1 |
| 13 | R1, R4, R5, R6, R7 | RC0603FR-0710KL | R0603 | C98220 | 5 |
| 14 | R15, R16, R31, R32, R33 | 100K | R0603 | C14675 | 5 |
| 15 | R13, R24, R27, R28 | 10k | R0603 | C25804 | 4 |
| 16 | R25, R26, R29, R30 | 0 | R0603 | C95177 | 4 |
| 17 | R8, R11 | 0603WAF1002T5E | R0603 | C25804 | 2 |
| 18 | R18, R19 | 12K | R0603 | C114659 | 2 |
| 19 | R2 | MFCR0603F3R00Q9R | R0603 | C52069115 | 1 |
| 20 | R3 | 0603WAF470LT5E | R0603 | C23411 | 1 |
| 21 | R9 | 158k | R0603 | C22883 | 1 |
| 22 | R10 | 51k | R0603 | C107231 | 1 |
| 23 | R12 | 18.2k | R0603 | C22892 | 1 |
| 24 | R14 | 200K | R0603 | C105574 | 1 |
| 25 | R17 | 300K | R0603 | C2930091 | 1 |
| 26 | R20 | 47K | R0603 | C105579 | 1 |
| 27 | R21 | 9K | R0603 | C2998085 | 1 |
| 28 | R22 | 10Ω | R0603 | C109318 | 1 |
| 29 | R23 | TRIMMER POT 200Ω | RES-ADJ-SMD_3P-L3.8-W3.7_VGF39NCHXT | C22461457 | 1 |
| 30 | R35 | 330Ω | R0603 | C105881 | 1 |
| 31 | L2, L3 | CDH4D28N-100M | IND-SMD_L4.7-W4.7 | C2875591 | 2 |
| 32 | L1 | 3.3uH | IND-SMD_L5.4-W5.2_PSPMAA0503 | C436534 | 1 |
| 33 | D1, D2, D3, D5 | MBR0530T1G_C7436545 | SOD-123_L2.8-W1.8-LS3.9-FD | C7436545 | 4 |
| 34 | D4 | PMEG2010AEH, 115 | SOD-123F_L2.8-W1.8-LS3.7-RD | C110921 | 1 |
| 35 | U1, U3, U9 | AP2114H-3.3TRG1 | SOT-223_L6.7-W3.5-P2.30-BR | C150716 | 3 |
| 36 | U5, U8, U10 | RT9193-33GB | SOT-23-5_L3.0-W1.7-P0.95-LS2.8-BL | C15651 | 3 |
| 37 | U2 | ESP32-S3-WROOM-1U-N16R8 | WIRELM-SMD_ESP32-S3-WROOM-1U | C3013946 | 1 |
| 38 | U4 | TPS61085DGKR | VSSOP-8_L3.0-W3.0-P0.65-LS5.0-BL | C113659 | 1 |
| 39 | U6 | LT1615IS5#TRPBF | SOT-23-5_L3.0-W1.6-P0.95-LS2.8-BL | C664389 | 1 |
| 40 | U7 | DSHP04TSGER_C3293144 | SW-SMD_8P-L6.7-W5.4-P1.27-LS8.4 | C3293144 | 1 |
| 41 | SW1, SW4 | MK-12C02-G020 | SW-SMD_MK-12C02-G020 | C963206 | 2 |
| 42 | SW2, SW3 | TS-1088-AR02016 | SW-SMD_L3.9-W3.0-P4.45 | C720477 | 2 |
| 43 | FPC2, FPC3, FPC4 | FPC-05F-6PH20 | FPC-SMD_6P-P0.50_XUNPU_FPC-05F-6PH20 | C2856796 | 3 |
| 44 | 4PINFAN1 | NIL | 4PIN_FAN_PWM | C240840 | 1 |
| 45 | FLASH1 | NIL | FLASH | | 1 |
| 46 | FPC1 | FPC-0.5FX-24PWBH20 | FPC-SMD_XUNPU-FPC-0.5FX-24PWBH20 | C3446015 | 1 |
| 47 | LED1 | HL-PST-1608H233W(8000-12000K) | LED-SMD_L1.6-W0.8-RD-WHITE-2 | C219228 | 1 |
| 48 | POWER1 | NIL | POWER | https://www.aliexpress.com/item/1005009258276115.html | 1 |
| 49 | Q1 | SI1308EDL-T1-BE3 | SOT-323_L2.0-W1.3-P1.30-LS2.1-BR | C3289597 | 1 |
| 50 | NIL | GooDisply E-Ink Display | NIL | https://www.aliexpress.com/item/1005009258276115.html | 1 |
| 50 | NIL | FPC EXT CABLE/S REQ. DEPEND ON DISPLAY MODEL | NIL | https://www.aliexpress.com/item/1005008474655738.html | 1 |


Changelog\
03/31/2026
Optimise PCB size under 100mmx100mm for cheaper fabrication costs
![PCB_VIEW](https://github.com/CXD8/AIO-AIR/blob/35fe1c208ec2587569fe9ce43633ebf8abe6ec37/Images/AIO-AIR-v1.1.0-3D-VIEW.PNG)
