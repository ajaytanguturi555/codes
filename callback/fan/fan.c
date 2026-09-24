#include<stdio.h>


void fan_start(unsigned int adc_val){
    if(adc_val>3000){
        printf("Fan is ON");
    }
    else{
        printf("Fan is OFF");
    }
}