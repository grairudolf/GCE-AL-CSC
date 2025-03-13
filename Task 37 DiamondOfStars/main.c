#include <stdio.h>
#include <conio.h>

void top(int num){
    for(int i = 1; i <= num; i+=2){
        for(int space = 1; space <= num - i; space++){
            printf(" ");
        }
        for(int j=1; j<=i;j++){
            printf("* ");
        }
        printf("\n");
    }
}

void bottom(int num){
    for(int i = 1; i <= num ; i+=2){
        for(int space = 0; space <= i; space++){
            printf(" ");
        }
        for(int j = num; j >= i; j--){
            printf("* ");
        }

        printf("\n");
    }
}

int main()
{
    int rows;
    printf("Enter number of rows: \n");
    scanf("%d", &rows);
    top(rows);
    bottom(rows);

    getch();
    system("pause");
    return 0;
}
