#include "mbed.h"


void Led(DigitalOut &ledpin, int rep)

{

   for (int i = 0; i < rep*2; ++i)

   {                     //blink for 10 times

      ledpin = !ledpin; // toggle led

      ThisThread::sleep_for(100ms);

   }

}