#include<stdio.h>
int adc_samp();
int avg_sen_read();
int fault_sen_read();
int count_over_volt();
int read_use_point();
int max_use_point();
int modify_reg();
int receive_buff();
int count_byte();
int packet_len();
int Sensor_Read(int *temperature, int *pressure);
int UART_Receive(unsigned char *buffer, int size);
int main(){
    adc_samp();         printf("\n---------------------------\n");
    avg_sen_read();     printf("\n---------------------------\n");
    fault_sen_read();   printf("\n---------------------------\n");
    count_over_volt();  printf("\n---------------------------\n");
    read_use_point();   printf("\n---------------------------\n");
    max_use_point();    printf("\n---------------------------\n");
    modify_reg();       printf("\n---------------------------\n");
    receive_buff();     printf("\n---------------------------\n");
    count_byte();       printf("\n---------------------------\n");
    packet_len();       printf("\n---------------------------\n");

    int temp;
    int pressure;
    Sensor_Read(&temp, &pressure);
    printf("Temperature: %d, Pressure: %d",temp,pressure); printf("\n---------------------------\n");

    unsigned char rx[10];
    UART_Receive(rx, 5);
    for(int i=0;i<5;i++) printf("%d ",rx[i]);  printf("\n---------------------------\n");
}

int adc_samp(){
    int adc[5] = {120, 125, 130, 128, 132},i=0;
    int max_adc=adc[i];
    int min_adc=adc[i];
    
    for(i=0;i<5;i++){
        printf("%d ",adc[i]);
        if(adc[i]>max_adc) max_adc=adc[i];
        if(adc[i]<min_adc) min_adc=adc[i];
    }
    printf("\nmax is %d, min is %d",max_adc,min_adc);
    return 0;
}

int avg_sen_read(){
    int sensor[8] = {20, 22, 21, 24, 23, 25, 22, 21},sum=0,avg;
    for(int i=0;i<8;i++){
        sum+=sensor[i];
    }
    printf("Average is %d",sum/8);
}

int fault_sen_read(){
    int temperature[10] = {25, 27, 30, 28, 95, 31, 29, 26, 24, 100};
    for(int i=0;i<10;i++){
        if(temperature[i]>80) printf("Fault detected: %d\n",temperature[i]);
    }
}

int count_over_volt(){
    int voltage[10] = {12, 13, 12, 14, 15, 13, 16, 12, 17, 13},count=0;
    for(int i=0;i<10;i++){
        if(voltage[i]>14) count++;
    }
    printf("Number of over-voltage conditions = %d",count);
}

int read_use_point(){
    int adc[5] = {100, 200, 300, 400, 500};
    int *p = adc;
    for(int i=0;i<5;i++){
        printf("%d ",*(p+i));
    }
}

int max_use_point(){
    int sensor[6] = {25, 40, 32, 55, 28, 42},max=sensor[0];
    int *p = sensor;
    for(int i=0;i<6;i++){
        if(*(p+i)>max) max=*(p+i);
    }
    printf("maximum is %d",max);
}

int modify_reg(){
    int config[4] = {10, 20, 30, 40};
    int *p = config;
    for(int i=0;i<4;i++){
        p[i]=p[i]+5;
        printf("%d ",p[i]);
    }
}

int receive_buff(){
    char uart_rx[5] = "HELLO";
    for(int i=0;i<5;i++){
        printf("%c\n",uart_rx[i]);
    }
}

int count_byte(){
    unsigned char rx_buffer[8] = {10, 20, 10, 30, 10, 40, 50, 10},c=0;
    for(int i=0;i<8;i++){
        if(rx_buffer[i]==10) c++;
    }
    printf("Command 10 received %d times",c);
}

int packet_len(){
    int rx_buffer[] = {0xAA, 0x10, 0x20, 0x30, 0x40, 0x55},l=0,i=0;
    while(rx_buffer[i]!=0x55){
        l++;
        i++;
    }
    printf("Packet length = %d",l);
}

int Sensor_Read(int *temperature, int *pressure){
    *temperature=35;
    *pressure=1012;
}

int UART_Receive(unsigned char *buffer, int size){
    for(int i=0;i<size;i++){
        scanf("%d",&buffer[i]);
    }
}