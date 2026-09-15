#include<stdio.h>
int str_len();
int str_comp();
int str_cpy();
int str_rev();
int str_concat();
int main(){
    str_len();                          printf("\n------------------------------\n");
    str_comp();                         printf("\n------------------------------\n");
    str_cpy();                          printf("\n------------------------------\n");
    str_rev();                          printf("\n------------------------------\n");
    str_concat();                       printf("\n------------------------------\n");

}

int str_len(){
    char str[20];
    int i=0;
    printf("Enter string:");
    scanf("%s",str);
    while(str[i]!=0){
        i++;
    }
    printf("Length of the string is %d\n",i);
}

int str_comp(){
    char str1[20]="ajayvijay";
    char str2[20]="ajayvijay";
    int i=0;
    for(i;i<20;i++){
        if(str1[i]!=str2[i])
        {
            printf("Both strings are not equal");
        }
    }
    if(i==20) printf("Strings are equal");
}

int str_cpy(){
    char src[20]="asdfgh";
    char dst[20];
    for(int i=0;i<20;i++){
        dst[i]=src[i];
    }
    printf("%s",dst);
}

int str_rev(){
    char str[10]="ajay";
    char rev[10];
    int i=0,j=0;
    while(str[i]!=0){
        i++;
    }
    for(i;i>=0;i--){
        rev[j]=str[i-1];
        j++;
    }
    printf("%s",rev);
}

int str_concat(){
    char str1[20]="ajay";
    char str2[]="vijay";
    int i=0;
    while(str1[i]!=0){
        i++;
    }
    int j=0;
    while(str2[j]!=0){
        str1[i]=str2[j];
        j++;
        i++;
    }
    str1[i]='\0';
    printf("%s",str1);

}