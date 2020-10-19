/*
   * This sketch illuminates the onboard LED of the Qwick Button, and displays the text “Pressed!” 
 * on the Micro OLED Breakout when the button is pressed and held.
 * Find the code, instructions and parts list in the GitHub repo here->
 * https://github.com/marcus-stevenson/SFESimpleSketches/tree/master/QwiicJoystickQwiicMp3Trigger
*/

#include <Wire.h>
#include "SparkFun_Qwiic_Joystick_Arduino_Library.h" //Click here to get the library: http://librarymanager/All#SparkFun_joystick
JOYSTICK joystick; //Create instance of this object
#include "SparkFun_Qwiic_MP3_Trigger_Arduino_Library.h" //http://librarymanager/All#SparkFun_MP3_Trigger
MP3TRIGGER mp3;

void setup() {
  Serial.begin(9600);
  Serial.println("Qwiic Joystick Example");

  if(joystick.begin() == false)
  {
    Serial.println("Joystick does not appear to be connected. Please check wiring. Freezing...");
    while(1);
  }
   if (mp3.begin() == false)
  {
    Serial.println("Qwiic MP3 failed to respond. Please check wiring and possibly the I2C address. Freezing...");
    while (1);
  }

  mp3.setVolume(10); //Volume can be 0 (off) to 31 (max)
}

void loop() {
  if (joystick.getHorizontal() < 400){
    mp3.playFile(1);//down
  }else if (joystick.getHorizontal() > 500){
    mp3.playFile(4);//up
  }else if (joystick.getVertical() < 400){
    mp3.playFile(2);//left
  }else if (joystick.getVertical() > 600){
    mp3.playFile(3);//right
  }
  delay(1000);
}
