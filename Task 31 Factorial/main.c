#include <stdio.h>
#include <stdlib.h>

int main(){
    int num;
    int  fact = 1;
    int i = 1;

    printf("Enter a number to get it's factorial: ");
    scanf("%d", &num);

    while(num < 0){
        printf("Enter only positive integers \n");
        printf("Enter another positive integer to get it's factorial: ");
        scanf("%d", &num);
    }
        while(i <= num){
            fact = fact * i;
            i++;
        }
        printf("The factorial of %d is: %d\n", num, fact);

    system("PAUSE");
    return 0;
}
