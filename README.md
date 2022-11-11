# Template for ESP32-S3-WROOM with 4MB FLASH

## Table of Contents

- [About](#about)
- [Getting Started](#getting_started)
- [Usage](#usage)

## About <a name = "about"></a>

small example for 4MB ESP32-S3 module with platformio and arduino framework

## Getting Started <a name = "getting_started"></a>

- set serial port on platformio to you upload-port
- uncomment one of the partition examples 
    "4mb_noota_partition.csv" for a big program-space (not ota-update)
    or
    "4mb_ota_partition.csv" for 2 ota partition (ota-update posible)

### Prerequisites
.. platformio and visual-studio code... and a ESP32-S3-WROOM Module with only 4MB-Flash (no PSRAM)


### Installing
.. install platformio in visual-studio code


## Usage <a name = "usage"></a>
addapt the blink example to your needs
