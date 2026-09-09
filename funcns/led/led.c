#include<stdio.h>
extern int temp;
int led(){
    if(temp<=35) printf("Green");
    else if(temp>35 && temp<=50) printf("Red");
    else printf("Orange");
}