#include<stdio.h>
#include"add.h"
#include"sub.h"
#include"mul.h"
#include"div.h"
int atm(int val);

int main(){
    int result_add=add(10,20);
    int result_sub=sub(10,20);
    int result_mul=mul(10,20);
    int result_div=div(10,20);
    printf("Addition=%d Subtraction=%d Multiplication=%d Division=%d",result_add,result_sub,result_mul,result_div);
    

    return 0;
}

