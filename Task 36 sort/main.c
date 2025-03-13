#include <stdio.h>
#include <stdlib.h>

void swap( int *num1, int *num2, int t){
    t = *num1;
    *num1 = *num2;
    *num2 = t;
}

void sort(int *num1, int *num2){
    int t;
    if(*num1 > *num2){
        swap(num1, num2, t);
    }else{
        num1 = num1;
        num2 = num2;
    }
}

int main(){
    int x = 5, y = 10, t;
    sort(&x, &y);
    //swap(&x,&y,t);
    printf("X = %d\nY = %d\n\n" ,x,y);


    return 0;
}


