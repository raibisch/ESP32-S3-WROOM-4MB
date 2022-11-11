
#include <Arduino.h>

#include "he_32s3wroom4mb.h"

#define PRINT_CHIP_INFO
//#define USE_I2C
//#define USE_SPI

#ifdef USE_I2C
// Infos zu SPI: https://randomnerdtutorials.com/esp32-spi-communication-arduino/#spi-multiple-bus-hspi-vspi
#include <Wire.h>
#endif
#ifdef USE_SPI
#include <SPI.h>
#endif
void ledInit()
{
  pinMode(LED1_ROT, OUTPUT); 
  pinMode(LED2_GRUEN, OUTPUT); 
  pinMode(LED3_GELB, OUTPUT); 
  pinMode(LED4_BLAU, OUTPUT);    
}

void ledBlink()
{
    digitalWrite(LED1_ROT, HIGH);
    delay(500);
    digitalWrite(LED3_GELB, HIGH);
    delay(500);
    digitalWrite(LED2_GRUEN, HIGH);
    delay(500);
    digitalWrite(LED4_BLAU,HIGH);
    delay(1000);
    digitalWrite(LED1_ROT,  LOW);
    digitalWrite(LED2_GRUEN, LOW);
    digitalWrite(LED3_GELB,  LOW);
    digitalWrite(LED4_BLAU,  LOW);
    delay(1000);
}

void printChipInfo()
{
  Serial.println("\n\n================================");
  Serial.print("Chip Model: ");
  Serial.println(ESP.getChipModel());
  Serial.print("Chip version: ");
  Serial.println(ESP.getChipRevision());
  Serial.print("Numer of cores: ");
  Serial.println(ESP.getChipCores());
  Serial.print("Flash Chip Size MB: ");
  Serial.println(ESP.getFlashChipSize() / (1024*1024));
  Serial.print("Flash Chip Speed MHz: ");
  Serial.println(ESP.getFlashChipSpeed() / 1000000);
  Serial.print("Flash Chip Mode: ");
  Serial.println(ESP.getFlashChipMode());
  Serial.print("PSRAM Size: ");
  Serial.println(ESP.getPsramSize());

  //setCpuFrequencyMhz(80); // moegliche Werte 240, 160, 80
  Serial.print("akt. CPU-Freq MHz: ");
  Serial.println(getCpuFrequencyMhz());
  Serial.println("\n================================\n");
}

void setup() 
{
  ledInit();
  Serial.begin(115200);
  while ( !Serial ) delay(100);   // wait for native usb
}

void loop() 
{
  printChipInfo();
  ledBlink();
}
