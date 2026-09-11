#include<stdio.h>
int two_arr_scanf();
int two_arr_declr();
int arr_ele_acc();
#define ROW 2
#define COLUMN 3
int main(){
    two_arr_scanf();            printf("\n----------------------------\n");
    two_arr_declr();            printf("\n----------------------------\n");
    arr_ele_acc();              printf("\n----------------------------\n");
}

int two_arr_scanf(){                                         //this function shows how to init arr elements using scanf
    int arr[ROW][COLUMN];
    printf("Enter elements of 2D array:");
    for(int i=0;i<ROW;i++){
        for(int j=0;j<COLUMN;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    for(int i=0;i<ROW;i++){                             //printing arr elements
        for(int j=0;j<COLUMN;j++){
            printf("%d ",arr[i][j]);
        }
    }
    printf("\n");

}

int two_arr_declr(){                                         //this function shows how to init arr elements at time of declaration
    int arr[ROW][COLUMN]={{2,8,9},{7,6,4}};
    for(int i=0;i<ROW;i++){                             //printing arr elements
        for(int j=0;j<COLUMN;j++){
            printf("%d ",arr[i][j]);
        }
    }
    printf("\n");

}

int arr_ele_acc(){
    int arr[ROW][COLUMN]={{2,8,9},{7,6,4}};
    int (*ptr)[COLUMN]=arr;
    printf("%d %d %d %d",arr[0][1],*(*(arr+1)+0),ptr[1][2],*(*(ptr+0)+2));
}