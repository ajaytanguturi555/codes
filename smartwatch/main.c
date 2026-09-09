#include<stdio.h>
#include<stdint.h>
int st_reg();
int main(){
    st_reg();
}


int st_reg(){
    uint8_t reg,batt_percent;
    printf("Enter reg value:");
    scanf("%hhu",&reg);
    printf("Enter battery percentage:");
    scanf("%hhu",&batt_percent);

    if(((reg&0xC0)==0xC0) && (batt_percent<=15)) printf("Power Save Mode On\n");
    else printf("Power save Mode Off\n");

    if((reg&0x03)==0x03) printf("Plugged In\n");
    else    printf("Plugged Off\n");

    if((reg&0x0C)==12) printf("Reset Error\n");
    else if((reg&0x0C)==8) printf("Heart Monitor Error\n");
    else if((reg&0x0C)==4) printf("Display Error\n");
    else printf("No Error");
}