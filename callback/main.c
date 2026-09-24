#include<stdio.h>
#include"adc.h"
#include"fan.h"

int main(){
    adc_init();
    adc_reg_callback(fan_start);
    adc_start();
    
}