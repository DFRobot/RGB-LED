/*
# This Sample code is for showing the full color of the RGB LED breakout
# Note: The pin connection is depand on the breakout
1. RGB LED breakout(5050) should be:
     R-D9            
     G-D10
     B-D11
     GND-Gnd
2. RGB LED breakout(3528)should be:
     R-D9       
     G-D10
     B-D11
     5v-5V
	 
Check more information about RGB:http://en.wikipedia.org/wiki/Rgb
*/
#include <RGBLED.h>

RGBLED myled = RGBLED(9,10,11);

void setup(){
}
void loop(){
  myled.colorRGB(random(0,255),random(0,255),random(0,255)); //R:0-255 G:0-255 B:0-255
  delay(1000);
}
