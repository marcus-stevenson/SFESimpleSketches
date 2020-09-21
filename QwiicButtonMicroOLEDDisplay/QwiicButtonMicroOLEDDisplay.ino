/*
 * This sketch illuminates the onboard LED of the Qwick Button, and displays the text “Pressed!” 
 * on the Micro OLED Breakout when the button is pressed and held.
 * Find the code, instructions and parts list in the GitHub repo here->
 * https://github.com/marcus-stevenson/SFESimpleSketches/tree/master/QwiicButtonMicroOLEDDisplay
*/
#include <Wire.h>
#include <SparkFun_Qwiic_Button.h>
#include <SFE_MicroOLED.h>
QwiicButton button;
uint8_t brightness = 100;   //The brightness to set the LED to when the button is pushed
                            //Can be any value between 0 (off) and 255 (max)
#define PIN_RESET 9 
#define DC_JUMPER 1 
MicroOLED oled(PIN_RESET, DC_JUMPER);

void setup() {
  Serial.begin(115200);
  Wire.begin(); //Join I2C bus

  //check if button will acknowledge over I2C
  if (button.begin() == false) {
    Serial.println("Device did not acknowledge! Freezing.");
    while (1);
  }
  Serial.println("Button acknowledged.");

  //Start with the LED off
  button.LEDoff();
  
  oled.begin();    // Initialize the OLED
  oled.clear(ALL); // Clear the display's internal memory
  oled.display();
  oled.clear(PAGE);
}

void loop() {
  //check if button is pressed, and tell us if it is!
  if (button.isPressed() == true) {
    oled.setCursor(0, 0);
    oled.print("Pressed!");
    oled.display();
    button.LEDon(brightness);
    while(button.isPressed() == true)
      delay(10);  //wait for user to stop pressing
    button.LEDoff();
  }
  oled.clear(PAGE);
  oled.display();
  delay(20); //Don't hammer too hard on the I2C bus
}
