#include<stdio.h>
#include"adc.h"
static adc_callback_t adc_callback =0;

void adc_init(){
    printf("Initialized\n");
}
void adc_start(){
    printf("Stated ADC\n");
    adc_irq();
    
}

void adc_stop(){
    printf("Stopped ADC\n");
}

void adc_reg_callback(adc_callback_t callback){
    if(callback != 0){
        adc_callback=callback; 
    }
}

void adc_irq(){
    int adc_val=3500;
    adc_callback(adc_val);
}
