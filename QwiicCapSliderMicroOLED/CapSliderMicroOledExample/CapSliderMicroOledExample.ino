/*
 * This sketch illustrates user input from the SparkFun Capacitive Touch Slider by illuminating a bar of pixels on the Micro OLED Display to correspond with the activated touch pad. 
 * Find the code and parts list in the GitHub repo here->
 * https://github.com/marcus-stevenson/SFESimpleSketches/tree/master/QwiicCapSliderMicroOLED/CapSliderMicroOledExample
*/
#include <Wire.h>
#include <SFE_MicroOLED.h>

#include "bitmaps.h"

#include <SparkFun_CAP1203_Registers.h>
#include <SparkFun_CAP1203_Types.h>

#define PIN_RESET 9  
#define DC_JUMPER 1

MicroOLED oled(PIN_RESET, DC_JUMPER);

CAP1203 sensor;  

void setup()
{
  delay(100);
  Wire.begin();
  oled.begin();    
  oled.clear(ALL); 
  oled.display();  
  delay(1000);     
  oled.clear(PAGE); 

  sensor.begin();
}
void loop(){
  if (sensor.isLeftTouched() == true) {
    oled.drawBitmap(left);
    oled.display();
    delay(200);
  }

  if (sensor.isMiddleTouched() == true) {
    oled.drawBitmap(middle);
    oled.display();
    delay(200);
  }

  if (sensor.isRightTouched() == true) {
    oled.drawBitmap(right);
    oled.display();
    delay(200);
  }
}
