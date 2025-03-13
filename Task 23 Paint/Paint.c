#include <stdio.h>
#include <stdlib.h>

int main()
{
    const int CONVERAGE = 95;
    int length, width, height;
    float totalSqm;
    float paintNeeded;
    int Scanner_object;
    int numOfDoors;
    int numOfWindows;
    printf("Enter the length, width and height of the room\n");
    scanf("%d %d %d", &length, &width, &height);
    printf("Enter the number of doors and windows: \n");
    scanf("%d %d", &numOfDoors, &numOfWindows);
    totalSqm = (length * width * height) - ((numOfDoors * 2) + (numOfWindows * 1.5));
    paintNeeded = totalSqm / CONVERAGE;
    printf("The paint needed for the room of length %dm, width of %dm and height %dm is: %.1fliters\n", length, width, height, paintNeeded);
    system("pause");
    return 0;
}
