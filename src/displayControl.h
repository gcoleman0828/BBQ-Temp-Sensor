#include <Arduino.h>
#include <SPI.h>
#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>
#include <Adafruit_MAX31865.h>

void displayInit();
void displayString(String);
void displayString(char);
void displayClear();