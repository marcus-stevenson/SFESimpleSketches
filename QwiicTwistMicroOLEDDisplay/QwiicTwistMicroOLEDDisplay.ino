/*
 * This sketch illuminates the RGB LED of the Qwiic Twist and changes its color 
 * as you twist the knob while displaying the name of the color on the Micro OLED 
 * display. Find the code and parts list in the GitHub repo here-> 
 * (https://github.com/marcus-stevenson/SFESimpleSketches/tree/master/QwiicTwistMicroOLEDDisplay)
*/
#include <Wire.h>
#include "SparkFun_Qwiic_Twist_Arduino_Library.h"
#include <SFE_MicroOLED.h>
TWIST twist;

#define PIN_RESET 9 
#define DC_JUMPER 1 
MicroOLED oled(PIN_RESET, DC_JUMPER);

void setup() {
  Serial.begin(9600);
  Serial.println("Qwiic Twist Example");
  Wire.begin();
  oled.begin();    // Initialize the OLED
  oled.clear(ALL); // Clear the display's internal memory
  oled.display();  // Display what's in the buffer (splashscreen)
  delay(1000);     // Delay 1000 ms
  oled.clear(PAGE);

  if(twist.begin() == false)
  {
    Serial.println("Twist does not appear to be connected. Please check wiring. Freezing...");
    while(1);
  }

  Wire.setClock(400000);

}

void loop() {
  Serial.print("Count: ");
  Serial.print(twist.getCount());
  oled.clear(PAGE);     // Clear the screen
  oled.setFontType(0);  // Set font to type 0
  oled.setCursor(0, 0); // Set cursor to top-left
  int twistCount = twist.getCount();
  
  if(twist.isPressed()){
    oled.clear(PAGE);
    oled.setCursor(0, 0);
    oled.print("Pressed!");
    oled.display();
    delay(1000);
    };
  if(0<= twistCount && twistCount <5){//---------------> red
    twist.setColor(255, 0, 0);
    oled.clear(PAGE);
    oled.setCursor(0, 0);
    oled.print("RED");
    oled.display();
  } else if (5<= twistCount && twistCount <10){//------> green 
    twist.setColor(0, 255, 0);
    oled.clear(PAGE);
    oled.setCursor(0, 0);
    oled.print("GREEN");
    oled.display();
  } else if (10<= twistCount && twistCount <15){//-----> violet
    twist.setColor(64, 0, 255);
    oled.clear(PAGE);
    oled.setCursor(0, 0);
    oled.print("VIOLET");
    oled.display();
  } else if (15<= twistCount && twistCount <20){//-----> yellow
    twist.setColor(255, 255, 0);
    oled.clear(PAGE);
    oled.setCursor(0, 0);
    oled.print("YELLOW");
    oled.display();
  } else if (20<= twistCount && twistCount <25){//-----> pink
    twist.setColor(128, 0, 255);
    oled.clear(PAGE);
    oled.setCursor(0, 0);
    oled.print("PINK");
    oled.display();
  } else if (25<= twistCount && twistCount <30){//-----> blue
    twist.setColor(0, 255, 255);
    oled.clear(PAGE);
    oled.setCursor(0, 0);
    oled.print("BLUE");
    oled.display();
  } else if (30<= twistCount && twistCount <35){//-----> orange
    twist.setColor(255, 100, 0);
    oled.clear(PAGE);
    oled.setCursor(0, 0);
    oled.print("ORANGE");
    oled.display();
  }

  Serial.println();

  delay(10);
}
