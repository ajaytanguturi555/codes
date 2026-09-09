#include<stdio.h>

int atm(int amt);

int main(){
    int amount;
    printf("Enter Amount:");
    scanf("%d",&amount);
    atm(amount);

    return 0;
}

int atm(int amt){
    
    int res_5=0,res_2=0,res_1=0;
    if(amt>0 && amt%100==0){
        while(amt>0){
            if(amt>=500){
            res_5=amt/500;
            amt=amt%500;
            }
            else if(amt>=200){
                res_2=amt/200;
                amt=amt%200;
            }
            else if(amt>=100){
                res_1=amt/100;
                amt=amt%100;
            }
        }
        printf("Here are your amount Denominations\n500:%d, 200:%d, 100:%d",res_5,res_2,res_1);
    }
    else printf("Invalid Amount");
    
    
    
}