#include<stdio.h>
extern int temp;
int motor(){
    if(temp<=30) printf("Slow Fan Speed\n");
    else if(temp>30 && temp<=35) printf("Medium Fan Speed\n");
    else if(temp>35 && temp<=50) printf("High Fan Speed\n");
    else printf("Invalid\n");
}