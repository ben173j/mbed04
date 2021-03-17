#include "mbed.h"

AnalogOut Aout(D7);
AnalogIn Ain(A0);
float ADCdata;

int main(){
  while(1){
    ADCdata = Ain;
    Aout = ADCdata;
    printf("Ain: %1.2f\n", ADCdata);
    ThisThread::sleep_for(2ms);
  }
}