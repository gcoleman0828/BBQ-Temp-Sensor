#include <displayControl.h>

#define SCREEN_WIDTH 128
#define SCREEN_HEIGHT 32
#define OLED_RESET -1
#define SCREEN_ADDRESS 0x3c


Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, OLED_RESET);

void displayInit(){
   Wire.begin();
   
    if(!display.begin(SSD1306_SWITCHCAPVCC,SCREEN_ADDRESS)){
        for(;;);
    }
}

void displayString(String displayString){
    displayClear();
    display.setTextSize(2);
    display.setTextColor(SSD1306_WHITE);
    display.setCursor(0,0);
    display.print(displayString);
   /* display.print("Temp: 32");
    display.print(char(247));
    display.print("C");*/
    display.display();

}

void displayClear(){
    display.clearDisplay();
}