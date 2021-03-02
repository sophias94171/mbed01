#include "mbed.h"


DigitalOut myLED(LED1);
DigitalOut myLED2(LED3);


void Led(DigitalOut &ledpin, int rep);


int main()

{

   myLED = 1;

   myLED2 = 1;

   while (true)

   {
      
      Led(myLED2, 3); //led3  three times
      Led(myLED, 2); //led1 twice

      

   }

}