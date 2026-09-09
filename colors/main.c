#include<stdio.h>
int color();
int main(){
    color();
    return 0;
}


int color(){
    unsigned int reg=12345;
    unsigned char red = 70;
    unsigned char green = 90;
    unsigned char blue = 200;
    reg&=~(0xFFFFFFFF);
    reg|=(red<<16)|(green<<8)|(blue);
    printf("%d",reg);
}