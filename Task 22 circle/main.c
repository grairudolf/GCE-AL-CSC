#include <stdio.h>
#include <stdlib.h>
#define PI 3.14159

int main()
{
    int radius;
    float area;
    printf("input radius: ");
    scanf("%d", &radius);
    area= PI *(radius*radius);
    printf("The area is %f\n", area);
    system("pause");
    return 0;
}
