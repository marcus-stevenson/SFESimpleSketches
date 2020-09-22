# SparkFun Qwiic Button + Micro OLED Display
This sketch reads the state of the Qwiic Button and illuminates the button’s built-in LED while the button is pressed, and displays “Pressed!” on the Micro OLED display.

# Parts:
SparkFun Qwiic Button - Green LED
https://www.sparkfun.com/products/16842
![Qwiic Button (green)](https://cdn.sparkfun.com//assets/parts/1/5/7/6/7/16842-SparkFun_Qwiic_Button_-_Green_LED-01.jpg)

SparkFun Micro OLED Breakout (Qwiic)
https://www.sparkfun.com/products/14532
![Micro OLED Breakout](https://cdn.sparkfun.com//assets/parts/1/2/6/2/1/14532-SparkFun_Micro_OLED_Breakout__Qwiic_-01.jpg)

SparkFun Qwiic Pro Micro - USB-C (ATmega32U4)
https://www.sparkfun.com/products/15795
![Qwiic Pro Micro](https://cdn.sparkfun.com//assets/parts/1/4/4/0/4/15795-Pro_Micro_C-01.jpg)

Qwiic Cable - 200mm
https://www.sparkfun.com/products/14428
![Qwiic Cable](https://cdn.sparkfun.com//assets/parts/1/2/4/5/4/14428-Qwiic_Cable_-_200mm-01.jpg)

Reversible USB A to C Cable - 2m
https://www.sparkfun.com/products/15424
![USB C Cable](https://cdn.sparkfun.com//assets/parts/1/3/9/8/3/15424-Reversible_USB_A_to_C_Cable_-_2m-01.jpg)

# Instructions:

You may need something to support your Qwiic breakout boards as you connect your hardware with Qwiic cables. I hacked together a little prototyping station using an old Arduino and Breadboard Holder from my SIK, some nylon standoff hardware, and some scrap particle board. Another solution is using 3M Dual Lock like Derek Runberg shows here. https://www.sparkfun.com/news/3277

1. If you haven’t already, solder some breakaway headers onto your Pro Micro so it can be held in place securely by the breadboard, and click it into place.
2. Secure the SparkFun Qwiic Button breakout in place using a nylon mounting standoff.
3. Connect the Qwiic Button to the Pro Micro via 200 mm Qwiic cable and the Qwiic JST connectors on the boards.
4. Secure the Micro OLED Dispay in place using a mounting hole and nylon standoff.
5. Connect the Micro OLED Display to the Qwiic Button via a 200 mm Qwiic cable and the Qwiic JST connectors.
6. Plug in your USB C cable to the Pro Micro and connect it to your computer. Make sure you have the correct port and board selected under the tools menu. Also, make sure to select “ATMEGA 32U4 (5V, 16MHz)” under the “processor” option, or else you will get an upload error. Full setup for the pro micro here. https://learn.sparkfun.com/tutorials/qwiic-pro-micro-usb-c-atmega32u4-hookup-guide
7. Open the QwiicButtonMicroOLEDDisplay.ino sketch and hit upload.
8. If the sketch uploads successfully, you should see the Qwiic Button’s LED light up when you press and hold it, and “Pressed!” should appear on the Micro OLED screen. The screen should go blank and the LED should turn off when you release the button.

