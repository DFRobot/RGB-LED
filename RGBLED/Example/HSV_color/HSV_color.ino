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
	 
Check more information about HSV:http://en.wikipedia.org/wiki/HSL_and_HSV
*/
#include <RGBLED.h>

RGBLED myled = RGBLED(9,10,11); //9:Red  10:Green   11:Blue

void setup(){
	
}

void loop(){
  
 //Adjust the color
 for(int j = 0;j < 360; j++){  
	myled.colorHSV(j,255,255);     //H(Hue):0-360
								   //S(Saturation):0-255  
								   //V(Value):0-255
	delay(20);					   //the speed of color changing
 }
 delay(100)
 //Adjust the brightness
 
 for(int j = 0;j < 255; j++){  
	myled.colorHSV(70,255,j);      //H(Hue):0-360
								   //S(Saturation):0-255  
								   //V(Value):0-255
	delay(20);					   
 }
 delay(100)
}
