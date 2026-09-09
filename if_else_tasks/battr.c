#include<stdio.h>
int main(){
    int batt_perc;
    printf("Enter battery percentage:");
    scanf("%d",&batt_perc);
    if(batt_perc>=80) printf("Full");
    else if(batt_perc>=30 && batt_perc<80) printf("Normal");
    else if(batt_perc>=10 && batt_perc<29) printf("low");
    else if(batt_perc<10) printf("Critical");
    else printf("invalid");

}

