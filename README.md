# E-ID: Electronic Identity Card 
E-ID is a compact electronic identity card built around an ESP32-C3 microcontroller and an OLED display. It presents identity information and project details through a simple, button-controller interface. 

The project focuses on custom PCB designing in KiCAD, embedded firmware development, and practical electronics assembly. 

# Features
- Displays a name, username, role, and project information.
- Uses an OLED display with 128×64 resolution.
- Supports multiple information pages.
- Provides physical buttons for navigating the interface.
- Uses an ESP32-C3 SuperMini for processing and firmware execution.
- Connects the display and controller through a custom-designed PCB.
- Uses USB power through the development board.
- Allows identity information to be changed through firmware.

# Hardware 
| Component | Purpose | 
|---|---| 
|ESP32-C3 SuperMini | Main microcontroller | 
| 0.96 inch OLED display | Displays identity information | 
| Two tactile push buttons | Navigate between pages | 
| female pin headers | connects removable modules | 
| Custom two-layer PCB | Holds and connects the components | 

# How it works 
The ESP32-C3 runs the firmware and communicates with the OLED display. The display presents the current information page, while the physical buttons allow the user to switch between pages. 

The initial firmware will provide three pages: 
1. **Identity**: Name, username, and role.
2. **About**: A short biography or introduction.
3. **Projects**: Selected projects and technical interests.

The information will initially be stored in the firmware, so changing the displayed content will require updating and uploading the code. 

# PCB Design 
The PCB will be designed in KiCAD and will include: 
- A footprint and header connections for the ESP32-C3 SuperMini.
- A four pin OLED connector
- Two-button footprints
- Power and ground connections
- Routing between the controller, display, and buttons.
- A compact board outline inspired by the dimensions of a standard identity card.

The development board and OLED will remain removable, allowing individual components to be replaced without redesigning the entire PCB. 

The PCB layout will be finalized after checking the actual dimensions and pin positions of the selected modules. 

# Firmware 
The firmware will be developed  using the Arduino framework for the ESP32-C3. 

Planned software functions include: 
- Initializing the OLED display.
- Rendering text and page layouts.
- reading button inputs.
- switching between information pages.
- displaying a consistent interface after setup.

The SSD1306 compatible display library will be used if the selected OLED module supports the SSD1306 controller. 

# Images of the project 

**PCB design** 

A photo will be added here 

**schematics** 

A photo will be added here 

**3D Rendering** 

A photo will be added here 


