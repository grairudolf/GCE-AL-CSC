#include <stdio.h>

int main(){
    int LIMIT;
    printf("Enter number of times to display the message: ");
    scanf("%d", &LIMIT);
    int i = 1;
    int sum;
    int n = LIMIT;

    int count = 1;
    sum = n / 2 * (1 + n);


    while(count <= LIMIT){
    printf("%d. I love Computer Science!!\n\n", i);
    count = count + 1;
    i++;
    }
    printf("The sum of numbers from 1 to %d is %d\n", LIMIT, sum);

    system("pause");
    return 0;
}
