    #include <stdio.h>

int add(int a,int b){
    return a+b;
}
int (*op)(int,int);
    int main()
    {
        op=add;
        (*op)(10,20);
    }

   