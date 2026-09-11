#include<stdio.h>
int two_arr_scanf();
int two_arr_declr();
int arr_ele_acc();
int three_arr_scanf();
int three_arr_declr();
#define ROW 2
#define COLUMN 3
#define BLOCK 2
int main(){
    two_arr_scanf();            printf("\n----------------------------\n");
    two_arr_declr();            printf("\n----------------------------\n");
    arr_ele_acc();              printf("\n----------------------------\n");
    three_arr_scanf();          printf("\n----------------------------\n");
    three_arr_declr();
}

int two_arr_scanf(){                                         //this function shows how to init 2D arr elements using scanf
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

int two_arr_declr(){                                         //this function shows how to init 2D arr elements at time of declaration
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


int three_arr_scanf(){                                         //this function shows how to init 3D arr elements using scanf
    int arr[BLOCK][ROW][COLUMN];
    printf("Enter elements of 3D array:");
    for(int i=0;i<BLOCK;i++){
        for(int j=0;j<ROW;j++){
            for(int k=0;k<COLUMN;k++){
                scanf("%d ",&arr[i][j][k]);
            }
        }
    }
    for(int i=0;i<BLOCK;i++){
        for(int j=0;j<ROW;j++){
            for(int k=0;k<COLUMN;k++){
                printf("%d ",arr[i][j][k]);
            }
        }
    }
    printf("\n");

}

int three_arr_declr(){                                         //this function shows how to init 3D arr elements at time of declaration
    int arr[BLOCK][ROW][COLUMN]={{{2,8,9},{7,6,4}},{{1,2,3},{4,5,6}}};
    for(int i=0;i<BLOCK;i++){                             //printing arr elements
        for(int j=0;j<ROW;j++){
            for(int k=0;k<COLUMN;k++){
                printf("%d ",arr[i][j][k]);
            }
        }
    }
    printf("\n");

}