#include <stdio.h>
#include <conio.h>

void main(){
    int i=0;
    int numbers[] = {4,6,1,5,6};//declaration and initialization of array
    float mean;
    mean = (numbers[0]+numbers[1]+numbers[2]+numbers[3]+numbers[4]) / 5;

    //traversal of array
    for(i=0; i<5 ;i++){
        printf("%d \n",numbers[i]);
    }
    printf("The mean is %d ", mean);
    getch();
}
