---
title: "E-ID"
github: "https://github.com/JH-2108/Identity-Card-"
description: "E-ID is a custom electronic identity card designed to display personal identification information and project details on a compact OLED screen. The project combines a custom-designed KiCAD PCB with an ESP32-C3 microcontroller, a 128x64 OLED display, and physical navigation buttons. I will design the schematic and PCB layout, manufacture the board, assemble the electronic components, and develop the firmware that allows users to navigate between different information pages. The goal is to create an affordable, reusable electronic badge while learning PCB designing, embedded programming, and hardware integration. "
created_at: "2026-10-16"
total_time: "5h 30m"
---

# October 16, 2026: Wrote the README and BOM
<!-- fabricate:entry 526 -->

Before starting with anything, the first thing needed to be done for this project is complete the readme, allowing people to understand this project better and know how to replicate it, and the bom, so that people who are replicating this project know what components they need to replicate it. 

Both the readme and bom took quite a long time to write and plan, requiring going through multiple vendors and confirm a lot of prices, hence it took around an hour and 30 minutes to get everything set up before the project can start. 

![](https://fabricate.hackclub-assets.com/2f746dd6da150b6572208b6e478666f39f2bf42947eb77e8d50cd5043c8e67d7/image-png/image.png)

the bom.csv file

**Total time spent: 1h 30m**

# October 19, 2026: Completed the schematics and PCB wiring
<!-- fabricate:entry 629 -->

After completing with making the BOM and the github readme.md, I went on to start designing the PCB and the schematics in KiCAD. I had to plan what types of screens to use, what buttons that I would need and the positions of each component, reaching 2 and a half hours of designing time, which may seem a lot. 

There also wasn't the footprint for the screen that I wanted in KiCAD, needing to go and find github repositories that contain the footprint that I am looking for, which was the 0.96inch SSD1306 screen that will fit perfectly on my identity card. This identity card will show my github projects, CAD projects in screenshots, and other information about myself. 

![](https://fabricate.hackclub-assets.com/28a691b4f8b6e519028e5ea6bc75acbcf16efe5fd682b76ef3c7ba4f37fced87/image-png/image.png)

PCB design

![](https://fabricate.hackclub-assets.com/6b95a963b156782642ff501cc31756e39c00a5aaf407da2d957fb503eaf1f4f3/image-png/image.png)

Schematics design 

![](https://fabricate.hackclub-assets.com/448cbd9b5a6a89ccf4899a81507ad3229668b91b7b9e864c1f9fbe7c8986d6e4/image-png/image.png)

3d rendered version

**Total time spent: 2h 30m**

# October 19, 2026 (entry 2): Firmware creation
<!-- fabricate:entry 639 -->

In order for the entire identity card to work, I had to create the firmware that will allow the buttons to do some actions when pressed. Hence I have coded the entire firmware in C++ language, it is not tested yet, as I have no way to test it now before creating the identity card, hence, once I receive all the parts I would move on to testing the project. 

![](https://fabricate.hackclub-assets.com/20b78f407da590a87f538c2067cc2055154cd2873e44315df7b87350d7c92ca4/image-png/image.png)

Firmware code

**Total time spent: 1h 30m**
