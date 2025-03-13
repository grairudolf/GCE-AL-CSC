#include <stdio.h>
#include <stdlib.h>

int main()
{
    float mean, sum = 0;
    int numbers[5] = {4,6,1,5,6};
    for(int i = 0; i < 5; i++){
        printf("%d ", numbers[i]);
    }
    printf("\n");
    for(int j = 0; j < 5; j++){
        sum = sum + numbers[j];
    }
    mean = sum / 5;
    printf("The mean is %.1f\n", mean);
    system("pause");
    return 0;
}
