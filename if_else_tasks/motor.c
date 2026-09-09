#include<stdio.h>
int main(){
    int power,emerg_stop,tempr,over_temp,over_curr,hard_fault;
    printf("Enter power,emerg_stop,tempr,over_temp,over_curr,hard_fault:");
    scanf("%d %d %d %d %d %d",&power,&emerg_stop,&tempr,&over_temp,&over_curr,&hard_fault);
    if(power && (!emerg_stop) && (tempr<80)) printf("Motor Start initiated");
    else if(over_curr || over_temp || emerg_stop || hard_fault) printf("Motor Stopped");
    else printf("Motor Issue");
}

