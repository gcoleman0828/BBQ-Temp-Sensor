#include <Arduino.h>
#include <displayControl.h>

void setup() {
  char * degreeSymbol  = new char(247);
  Serial.println("Debug Start Setup");
  Serial.begin(115200);
  displayInit();
  Serial.println("After Initialize");
  Serial.println("End Startup Code");
}

void loop() {
  // put your main code here, to run repeatedly:

   char * degreeSymbol  = new char(247);
  Serial.println("Entered Loop");
  displayInit();
  Serial.println("After Initialize");
  displayString("Temp: 32" + String(degreeSymbol) + "C");
  Serial.println("After send to screen");
  Serial.println("End Loop");
  delay(2000);
}

