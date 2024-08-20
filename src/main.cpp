#include <Arduino.h>
#include <displayControl.h>

void setup() {
  char * degreeSymbol  = new char(247);
  displayInit();
  displayString("Temp: 32" + String(degreeSymbol) + "C");
}

void loop() {
  // put your main code here, to run repeatedly:
}

