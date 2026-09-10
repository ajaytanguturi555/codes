#include<stdio.h>
void const_var();
void Ptr_to_const();
void const_ptr();
int fun(int const val);
int main(){
    const_var();
    Ptr_to_const();
    const_ptr();
    int val=10;
    fun(val);
}
void const_var(){               /*this fun tries to  change value of a const variable*/
    int const val=10;
    //val=20;                   /*here it gives an error*/
    printf("%d\n",val);
}

void Ptr_to_const(){            /*this fun tries to  change value of a const variable pointed by ptr*/
    int val=10;
    int const *ptr=&val;
    //*ptr=20;                    //error of assign to read only memory
    printf("%d\n",*ptr);        // result:10
}

void const_ptr(){               /*this fun tries to  change adr that is pointed by const ptr*/
    int inp_val=30,out_val=20;
    int * const ptr=&inp_val;
    //ptr=&out_val;               /*the adr pointed by const ptr can't be changed*/
    printf("%d\n",*ptr);
}

void const_const(){
    int val=50;
    int const * const ptr=&val;        //ptr is a const pointer pointed to const int        
}

int fun(int const val){             //fun with const parameter
    //val++;                          //trying to change const parameter
    printf("%d",val);
}