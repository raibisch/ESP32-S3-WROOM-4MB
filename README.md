# Template for ESP32-S3-WROOM with 4MB FLASH

small example for 4MB ESP32-S3 4MB module with platformio and arduino framework
(because there is no valid default board definition for 4MB Flash)

### Getting Started <a name = "getting_started"></a>
change settings in *platformio.ini*

-  set upload-port

- uncomment one of the partition examples 
"4mb_max_partition.csv" for a big program-space (not ota-update) or "4mb_2ota_partition.csv" for 2 ota partition (ota-update posible and data in spiffs)

### Prerequisites
- Software: platformio and visual-studio code
- Hardware: **ESP32-S3-Wroom-1-N4** this Module has only 4MB-Flash and no PSRAM !


### Installing
install platformio in visual-studio code

### Usage <a name = "usage"></a>
addapt the blink example to your needs

### Remark:
the LED definiton in "he_32S3wroom4mb.h" is only for internal use in my test hardware
