#include "mbed.h"

AnalogOut Aout(D7);
AnalogIn Ain(A0);
float ADCdata;
float ADCdata1;

int main()
{
  while(1){
    Aout = Ain;
    ADCdata = Aout;
    ADCdata1 = Ain;
    printf("Aout= %0.2f \n",ADCdata);
    printf("Ain= %0.2f \n",ADCdata1);
  }
}