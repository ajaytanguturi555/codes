#include<stdio.h>
int main(){
    int num;
    printf("Enter a number:");
    scanf("%d",&num);
    switch (num)
    {
    case 0:
        printf("Zero");

    case 1:
        printf("One");
        break;
        
    default:
        printf("Non Zero");
        
    }
}