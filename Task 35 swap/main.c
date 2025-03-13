#include <stdio.h>
#include <stdlib.h>

void swap( int *num1, int *num2, int t){
    t = *num1;
    *num1 = *num2;
    *num2 = t;
}

int main(){
    int x=5, y=10, t;

    swap(&x,&y,t);
    printf("X =  %d\n Y= %d\n\n" ,x,y);


    return 0;
}
