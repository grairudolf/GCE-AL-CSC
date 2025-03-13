#include <stdio.h>
#include <math.h>
int main(){
int numbers[10];
int num;
srand(time(0));
for (int i=0; i<10; i++){
    numbers[i]= 1+rand()%100;
    printf(" %d", numbers[i]);
}
printf("\n");
printf("Enter an integer from 1 to 100: ");
scanf("%d", &num);
int ruddy=minabsdiff(numbers,10,num);
printf("The closest number to %d is %d",num, ruddy);

}
int minabsdiff(int A[],int s,int n){
    int absdiff[10];
    int minabsdif[10];
    int returnValue;
    absdiff[0] = abs(A[0]- n);
    minabsdif[0] = absdiff[0];
    for(int m=1;m<s;m++){
        absdiff[m]=abs(A[m]-n);
        minabsdif[m]=fmin(minabsdif[m-1],absdiff[m]);

        if(minabsdif[m] == absdiff[m]){
        returnValue = A[m];
        }
    }
    return returnValue;
}

