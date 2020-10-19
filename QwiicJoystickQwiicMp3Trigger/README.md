# SparkFun Simple Sketches: Qwiic Joystick + Qwiic MP3 Trigger
This sketch uses the SparkFun MP3 Trigger to play an audio file that corresponds with the direction that the Qwiic Joystick has been tilted.

# Parts:
SparkFun Qwiic MP3 Trigger
https://www.sparkfun.com/products/15165
![Qwiic MP3 Trigger](https://cdn.sparkfun.com//assets/parts/1/3/5/5/5/15165-SparkFun_Qwiic_MP3_Trigger-01.jpg)

SparkFun Qwiic Joystick
https://www.sparkfun.com/products/15168
![Qwiic Joystick](https://cdn.sparkfun.com//assets/parts/1/3/5/5/8/15168-SparkFun_Qwiic_Joystick-01.jpg)

SparkFun Qwiic Pro Micro - USB-C (ATmega32U4)
https://www.sparkfun.com/products/15795
![Qwiic Pro Micro](https://cdn.sparkfun.com//assets/parts/1/4/4/0/4/15795-Pro_Micro_C-01.jpg)

microSD Card - 1GB (Class 4)
https://www.sparkfun.com/products/15107
![1GB MicroSD Card](https://cdn.sparkfun.com//assets/parts/1/3/4/7/0/15107-microSD_Card_-_1GB__Class_4_-01.jpg)

Hamburger Mini Speaker
https://www.sparkfun.com/products/14023
![Hamburger Mini Speaker](https://cdn.sparkfun.com//assets/parts/1/1/8/3/1/14023-01.jpg)

Qwiic Cable - 200mm
https://www.sparkfun.com/products/14428
![Qwiic Cable](https://cdn.sparkfun.com//assets/parts/1/2/4/5/4/14428-Qwiic_Cable_-_200mm-01.jpg)

Reversible USB A to C Cable - 2m
https://www.sparkfun.com/products/15424
![USB C Cable](https://cdn.sparkfun.com//assets/parts/1/3/9/8/3/15424-Reversible_USB_A_to_C_Cable_-_2m-01.jpg)

# Instructions:

You may need something to support your Qwiic breakout boards as you connect your hardware with Qwiic cables. I hacked together a little prototyping station using an old Arduino and Breadboard Holder from my SIK, some nylon standoff hardware, and some scrap particle board. Another solution is using 3M Dual Lock like Derek Runberg shows here. https://www.sparkfun.com/news/3277

1. If you haven’t already, solder some breakaway headers onto your Pro Micro so it can be held in place securely by the breadboard, and click it into place.
2. Load the four MP3 files from the GitHub repository to the root folder of your MicroSD card.
3. Insert the MicroSD card into the  SparkFun Qwiic MP3 Trigger, and secure the MP3 Trigger in place using a nylon mounting standoff.
4. Secure the SparkFun Qwiic Joystick in place using a mounting hole and nylon standoff.
5. Turn on your Mini Speaker and plug the audio cable into the MP3 Trigger’s headphone jack.
6. Connect the Qwiic breakouts and the Pro Micro via 200 mm Qwiic cables and the Qwiic JST connectors.
7. Plug your USB C cable into the Pro Micro and connect it to your computer. Make sure you have the correct port and board selected under the tools menu. Also, make sure to select “ATMEGA 32U4 (5V, 16MHz)” under the “processor” option, or else you will get an upload error. Full setup for the pro micro here. https://learn.sparkfun.com/tutorials/qwiic-pro-micro-usb-c-atmega32u4-hookup-guide
8. Open the joystickmp3example.ino sketch and hit upload.
9. If the sketch uploads successfully, you should hear “Left,” “Right,” “Up,” or “Down” spoken from the Mini Hamburger Speaker when you press the joystick in any of those four directions. 


