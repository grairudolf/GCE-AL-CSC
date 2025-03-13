#include <stdio.h>
#include <stdlib.h>

int main(){
    int num;
    int  fact = 1;
    int i = 1;
    printf("Enter a number to get it's factorial: ");
    scanf("%d", &num);
    for(i; i <= num; i++){
        fact = fact * i;
    }
    printf("The factorial of %d is: %d\n", num, fact);
    system("PAUSE");
    return 0;
}
