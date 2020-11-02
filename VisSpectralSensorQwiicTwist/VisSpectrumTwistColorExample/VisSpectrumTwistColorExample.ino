/*
 * SparkFun Simple Sketches: Spectral Sensor Breakout + Qwiic Twist RBG Rotary Encoder
This sketch sets the color of the Qwiic Twist RGB Rotary Encoder 
according to which color (Red, Green, or Blue) is sensed by the 
SparkFun Spectral Sensor Breakout whenever the button of the
Qwiic Twist is pressed.

For parts and instructions, check out the github repo:

*/

#include "AS726X.h"
#include "SparkFun_Qwiic_Twist_Arduino_Library.h"

AS726X sensor;
TWIST twist;

void setup() {
  Wire.begin();
  
  sensor.begin();
  twist.begin();
}

void loop() {
  float redVal = 0;
  float bluVal = 0;
  float greVal = 0;
  if(twist.isPressed()){
    sensor.takeMeasurementsWithBulb();
    bluVal = sensor.getCalibratedBlue();
    greVal = sensor.getCalibratedGreen();
    redVal = sensor.getCalibratedRed();
    if(redVal > bluVal && redVal > greVal){
      twist.setColor(100, 0, 0);// RED
    }else if(bluVal > redVal && bluVal > greVal){
      twist.setColor(0, 0, 100);// BLUE
    }else if(greVal > redVal && greVal > bluVal){
      twist.setColor(0, 100, 0);// GREEN
    }
  }
}
