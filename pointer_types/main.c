#include<stdio.h>
void _void_ptr();
void _null_ptr();
int *_dang_ptr();
int _ptr_arith_pp();
int ptr_arr();
int arr_ptr();
int main(){
    _void_ptr();                                                                            printf("\n-----------------------\n");
    _null_ptr();                                                                            printf("\n-----------------------\n");
    int *ptr=_dang_ptr();                         /*returning ads assigning to ptr*/
    printf("Result of dangling ptr: %d\n",*ptr);   
    int *_wild_ptr;                               /*wild pointer declaration*/              printf("\n-----------------------\n"); 
    printf("Result of wild ptr: %d\n",*_wild_ptr);                                          printf("\n-----------------------\n");
    int (*fp)()=_ptr_arith_pp;                    /*function ptr soring address of fun*/
    fp();                                          /*fun calling using fun ptr*/            printf("\n-----------------------\n");
    ptr_arr();                                                                              printf("\n-----------------------\n");
    arr_ptr();                                                                               printf("\n-----------------------\n");

}

void _void_ptr(){           // this is a function which demonstrates void ptr
    int read_val=20;
    void *ptr=&read_val;
    printf("Result of void ptr: %d\n",++(*(int*)ptr));    //typecasting void pointer before dereferencing
}

void _null_ptr(){           // this is a function which demonstrates null ptr
    int *ptr= NULL;
    //printf("%d\n",*ptr);    // dereferencing null ptr give segmentation fault
    int val=10;
    ptr=&val;
    printf("Result of null ptr: %d\n",*ptr);        
}

int *_dang_ptr(){               // this is a function which demonstrates dangling ptr
    int val=20;
    int *ptr=&val;
    return ptr;                 //returning address
}

int _ptr_arith_pp(){                        // this is a function which demonstrates ptr arithmetic and ptr to ptr
    int arr[5]={45,466,488,478,125};
    int *ptr=arr;
    printf("Result of ptr arithmetic: %d\n",*(ptr+3));      //accessing 4th element using ptr arithmetic
    int **pptr=&ptr;
    printf("Result of ptr to ptr: %d\n",*((*pptr)+1));      //accessing element 2 using ptr to ptr
}

int ptr_arr(){                                      //this function demonstrates array of pointers and element accessing
    int arr1[5]={10,60,80,70,90};
    int arr2[5]={11,61,81,71,91};
    int arr3[5]={12,62,82,72,92};
    int *p_arr[3]={arr1,arr2,arr3};
    printf("Result of ptr arr: %d\n",p_arr[1][2]);
}

int arr_ptr(){                                          //this function demonstrates array pointer and element accessing
    int arr[5]={12,36,54,78,95};
    int (*ptr)[5]=&arr;
    printf("Result of Array ptr: %d\n",(*ptr)[3]);
}