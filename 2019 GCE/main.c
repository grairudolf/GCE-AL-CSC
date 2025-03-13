#include <stdio.h>
#include <stdlib.h>

int A[5][5];
int z = 1;
int top = 0, bottom = 4, left = 0, right = 4;
int i,j;

void FillRowForward(int A[][5], int *top, int *left, int *right, int *z){
    i = *top;
    while(i==*top){
        for(j = *left; j<=*right; j++){
            A[i][j]=*z;
            z++;
        }
        *top++;
    }
}

int main()
{
    printf("Hello world!\n");
    return 0;
}
