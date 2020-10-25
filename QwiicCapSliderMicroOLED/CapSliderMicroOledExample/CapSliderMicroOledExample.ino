/*
 * 
*/
#include <Wire.h>  // Include Wire if you're using I2C
#include <SFE_MicroOLED.h>  // Include the SFE_MicroOLED library

#include "bitmaps.h"

#include <SparkFun_CAP1203_Registers.h>
#include <SparkFun_CAP1203_Types.h>

#define PIN_RESET 9  
#define DC_JUMPER 1

MicroOLED oled(PIN_RESET, DC_JUMPER);    // I2C declaration

CAP1203 sensor;  

void setup()
{
  delay(100);
  Wire.begin();
  oled.begin();    // Initialize the OLED
  oled.clear(ALL); // Clear the display's internal memory
  oled.display();  // Display what's in the buffer (splashscreen)
  delay(1000);     // Delay 1000 ms
  oled.clear(PAGE); // Clear the buffer.

  sensor.begin();
}
void loop(){
  if (sensor.isLeftTouched() == true) {
    //Serial.println("Left");
    oled.drawBitmap(left);
    oled.display();
    delay(200);
  }

  if (sensor.isMiddleTouched() == true) {
    //Serial.println("Middle");
    oled.drawBitmap(middle);
    oled.display();
    delay(200);
  }

  if (sensor.isRightTouched() == true) {
    //Serial.println("Right");
    oled.drawBitmap(right);
    oled.display();
    delay(200);
  }
}
