# SparkFun Simple Sketches: Spectral Sensor Breakout + Qwiic Twist RBG Rotary Encoder
This sketch sets the color of the Qwiic Twist RGB Rotary Encoder according to which color (Red, Green, or Blue) is sensed by the SparkFun Spectral Sensor Breakout whenever the button of the Qwiic Twist is pressed.

# Parts:
SparkFun Spectral Sensor Breakout - AS7262 Visible (Qwiic)
https://www.sparkfun.com/products/14347
![Spectral Sensor Breakout](https://cdn.sparkfun.com//assets/parts/1/2/3/2/6/14347-01.jpg)

SparkFun Qwiic Twist - RGB Rotary Encoder Breakout
https://www.sparkfun.com/products/15083
![Qwiic Twist RGB Rotary Encoder](https://cdn.sparkfun.com//assets/parts/1/3/4/3/3/15083-SparkFun_Qwiic_Twist_-_RGB_Rotary_Encoder_Breakout-01.jpg)

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
2. Secure the SparkFun Spectral Sensor Breakout in place using a nylon mounting standoff.
3. Secure the Qwiic Twist RGB Rotary Encoder in place using a mounting hole and nylon standoff.
4. Connect the Spectral Sensor, the Qwiic Twist, and the Pro Micro via 200 mm Qwiic cables and the Qwiic JST connectors.
5. Plug in your USB C cable to the Pro Micro and connect it to your computer. Make sure you have the correct port and board selected under the tools menu. Also, make sure to select “ATMEGA 32U4 (5V, 16MHz)” under the “processor” option, or else you will get an upload error. Full setup for the pro micro here. https://learn.sparkfun.com/tutorials/qwiic-pro-micro-usb-c-atmega32u4-hookup-guide
6. Open the VisSpectrumTwistColorExample.ino sketch and hit upload.
7. If the sketch uploads successfully, you should be able to change the color of the Qwiic Twist by holding a blue, red, or green object over the Spectral Sensor Breakout and pressing the button of the Qwiic Twist. This will briefly illuminate the onboard LED of the Spectral Sensor for consistent readings, and the color of the Qwiic Twist should change to match your colored object. (Note: this sketch only compares the RGB values from the spectral sensor, but you can detect any color or combination of colors with Red, Orange, Yellow, Green, Blue, and Violet readings)




