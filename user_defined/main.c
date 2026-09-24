#include<stdio.h>
#include"main.h"
int sr_fun();
int adc_fun();
int un_fuc();
int un_typ_fun();
int en_fun();
void sys_state();
int main(){
    sr_fun();                       printf("\n-----------------------\n");
    adc_fun();                      printf("\n-----------------------\n");
    un_fuc();                       printf("\n-----------------------\n");
    un_typ_fun();                   printf("\n-----------------------\n");
    en_fun();                       printf("\n-----------------------\n");
    sys_state();                    printf("\n-----------------------\n");
}

int sr_fun(){
    typ_st sensor;
    sensor.temp=40;
    sensor.humidity=50;
    sensor.pressure=1000;
    printf("%d %d %d\n",sensor.temp,sensor.humidity,sensor.pressure);
}

int adc_fun(){
    struct adc adc_var;
    adc_var.channel=5;
    adc_var.resolution=500;
    adc_var.sampling_time=500;
    printf("%d %d %d\n",adc_var.channel,adc_var.resolution,adc_var.sampling_time);
}

int un_fuc(){
    union un un_var;
    un_var.inp_val1=10;
    un_var.inp_val2=20;
    un_var.inp_val3=30;
    printf("%d\n",un_var.inp_val2);
}

int un_typ_fun(){
    ty_var un_typ_var;
    printf("%d\n",un_typ_var.mode);
}

int en_fun(){
    int current_state=OFF;
    if(current_state==OFF){
        printf("Current State is OFF\n");
        current_state=ON;
    } 
    if(current_state==ON){
        printf("Current State is ON\n");
        current_state=FAULT;
    }
    if(current_state==FAULT){
        printf("Current State is FAULT\n");
    }
}

void sys_state(){
    int arr_state[4]={INIT,IDLE,RUNNING,ERROR};
    for(int i=0;i<4;i++){
        switch (arr_state[i])
        {
        case INIT:
            printf("System Stste is Init\n");
            break;
        case IDLE:
            printf("System Stste is IDLE\n");
            break;
        case RUNNING:
            printf("System Stste is RUNNING\n");
            break;
        case ERROR:
            printf("System Stste is ERROR\n");
            break;
        default:
            printf("INVALID");
            break;
        }
    }
}

