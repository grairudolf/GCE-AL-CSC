#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    int num;
    printf("Program to the Find Factors of Any Number\n\n");
    printf("Enter the number to see it's factors: ");
    scanf("%d", &num);
    printf("Factors of %d are\n", num );
    for (i=1; i<=num; i++){
        if(num % i==0){
            printf("%d\n", i);
        }
    }

    return 0;
}
