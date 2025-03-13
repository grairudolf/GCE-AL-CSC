#include <stdio.h>
#include <stdlib.h>

int A[5][5];

void LeadingDiagonal(){
    int i, j;
    for(i=0; i<5; i++){
        j=i;
        A[i][j]=1;
    }
}

void FirstColumn(){
    int i, j;
    for(i=1; i<5; i++){
        j=0;
        A[i][j]=1;
    }
}

void OtherElements(){
    int i,j;
    i=2;
    for(j=1;j<4;j++){
        for(i=2; i<5; i++){
            A[i][j] = A[i-1][j-1] + A[i-1][j];
        }
    }
}

void PrintArray(){
    int i,j;
    LeadingDiagonal();
    FirstColumn();
    OtherElements();
    for(i=0; i<5; ++i){
        for(j=0; j<=i; ++j){
            printf("%d ", A[i][j]);
            j++;
        }
        printf("\n");
    }
}

int main(){
    PrintArray();
    printf("\n");
    system("pause");
}

/*
void LeadingDiagonal(int A[][4], int row, int col){
    int i, j;
    for(int i=0; i<row;i++){
        j = i;
        A[i][j] = 1;
    }
}

void FirstColumn(int A[][4], int row, int col){
    int i, j;
    for(i=0;i<row;i++){
        for(j=0;j<col;j++){
            if(j==0){
                A[i][j] = 1;
            } else{
                if(j!=0 && i!=j){
                    A[i][j]=0;
                }
            }
        }
    }
}

void OtherElements(int A[][4], int row, int col){
    int i, j;
    for(i=0;i<row;i++){
        for(j=1;j<col;j++){
            if(j<i){
                A[i][j]=A[i-1][j]+A[i-1][j-1];
            }
        }
    }
}

void printArray(int A[][4], int row, int col){
    int i,j;
    for(i=0;i<row;i++){
        for(j=0;j<col;j++){
            printf("A[%d][%d]=%d\n", i,j,A[i][j]);
        }
    }
}

int main()
{
    int i,j;
    int Array[4][4];
    printf("print array after calling leading diagonal function\n");
    LeadingDiagonal(Array,4,4);
    printArray(Array,4,4);
    printf("\n");
    printf("After calling first column\n");
    FirstColumn(Array,4,4);
    printArray(Array,4,4);
    printf("\n");
    printf("\n");
    printf("Print array after calling OtherElements\n");
    OtherElements(Array, 4,4);
    printArray(Array,4,4);
    system("pause");
    return 0;
}*/
