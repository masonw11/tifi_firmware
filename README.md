# Ti-Fi Firmware

## Getting Started
### Hardware
To use this project, you need to have:
- [CC3220SF-LAUNCHXL](https://www.ti.com/tool/CC3220SF-LAUNCHXL)
- Ti-Fi Daughterboard (TBD)

### Development Environment
*Note: This project has only been tested with Windows 10 and 11.*
1. Download the [SimpleLink™ Wi-Fi® CC32xx SDK](https://www.ti.com/tool/SIMPLELINK-CC32XX-SDK).
2. Get started with the [SimpleLink™ Academy](https://dev.ti.com/tirex/explore/node?node=ABHI2A8X0uStbp2PdbIWRg__coGQ502__LATEST).
3. Follow the [Quick Start Guide](https://dev.ti.com/tirex/explore/node?node=AIyDVbo7nyu7--hdflwVHQ__fc2e6sr__LATEST) to set up the Code Composer Studio development environment.
    This project was created with Code Composer Studio and utilizes TI-RTOS, so there is no need to install FreeRTOS.

    If this link does not work, the docs are available offline in your SDK install directory.
    The Quick Start Guide is located at `SIMPLELINK_SDK_INSTALL_DIR/docs/simplelink_mcu_sdk/Quick_Start_Guide.html`.
4. Clone this repository to your directory of choice.
5. In Code Composer Studio, select File → Open Projects from File System... → Click the "Directory..." button.

    Select this folder: `tifi_embedded/code/tifi_CC3220SF_LAUNCHXL_tirtos_ccs/` then click Finish. The project will be loaded into your workspace.