/*
 * This sketch reads the temperature from the Qwiic Environmental Combo Breakout 
 * and displays it on the Micro OLED Display.
 * Find the code and parts list in the GitHub repo here->
 * https://github.com/marcus-stevenson/SFESimpleSketches/tree/master/QwiicEnvironmentalComboMicroOLEDDisplay
*/
#include <Wire.h>
#include <SFE_MicroOLED.h>

#define PIN_RESET 9 
#define DC_JUMPER 1 
MicroOLED oled(PIN_RESET, DC_JUMPER);

#include "SparkFunBME280.h"
BME280 mySensor;

void setup() {
  Serial.begin(9600);
  Serial.println("Reading basic values from BME280");

  Wire.begin();

  if (mySensor.beginI2C() == false) //Begin communication over I2C
  {
    Serial.println("The sensor did not respond. Please check wiring.");
    while(1); //Freeze
  }
  oled.begin();    // Initialize the OLED
  oled.clear(ALL); // Clear the display's internal memory
  oled.display();
  oled.clear(PAGE);
}

void loop() {

  
  oled.setCursor(0, 0);
  oled.print("Temp:");
  oled.print(mySensor.readTempF());
  oled.display();

}
