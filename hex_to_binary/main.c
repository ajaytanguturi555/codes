#include<stdio.h>
int hex_to_bin(int num);
int main(){
    int num;
    scanf("%X",&num);
    hex_to_bin(num);
}
int hex_to_bin(int num){
    for(int i=7;i>=0;i--){
        int num_b = (num>>i)&1;
        printf("%d",num_b);
    }
}