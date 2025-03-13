#include <stdio.h>
#include <stdlib.h>

int main(){
    
    int numbers[4];
    
    printf("Get Ready: I'm going to ask you for 4 numbers\n");
    printf("Number 1: Please enter first number ");
    scanf("%d", &numbers[0]);
    printf("Number 2: Please enter second number ");
    scanf("%d", &numbers[1]);
    printf("Number 3: Please enter third number ");
    scanf("%d", &numbers[2]);
    printf("Number 4: Please enter fourth number ");
    scanf("%d", &numbers[3]);
		
    printf("Reversed: Here are the numbers in the reverse order:\n");
    printf("%d\n",numbers[3]);
    printf("%d\n",numbers[2]);
    printf("%d\n",numbers[1]);
    printf("%d\n",numbers[0]);
    
    system("pause");
    return 0;
}
