#include<stdio.h>
int main(){
    int tempr;
    printf("Enter temerature value:");
    scanf("%d",&tempr);
    if(tempr>=0 && tempr<=30) printf("Normal");
    else if(tempr>=31 && tempr<=60) printf("Warning");
    else if(tempr>=61 && tempr<=100) printf("Critical");
    else if(tempr>100 || tempr<0) printf("Invalid");
    else printf("Invalid");
}
