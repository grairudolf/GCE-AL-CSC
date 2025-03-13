#include <stdio.h>
#include <stdlib.h>
int choice;

void menu(){
    printf("\t==========\n");
    printf("\t   MENU\n");
    printf("\t==========\n");
    printf("\t  1. NOT\n");
    printf("\t  2. AND\n");
    printf("\t  3. OR\n");
    printf("\t  4. XOR\n");
    printf("\t  5. QUIT\n");
    printf("\t==========\n\n");
    do{
        printf("\tEnter your choice: ");
        scanf("%d", choice);
        printf("\n");
    }while(choice > 5 || choice < 1);
}
void displayTable(choice){
    menu();
    switch(choice){
    case 1:
        printf("\tA     A'\n");
        printf("\t_______\n");
        printf("\t0     1\n");
        printf("\t1     0\n");
        printf("\t0     1\n");
        printf("\t1     0\n");
        break;
    case 2:
        printf("\tA     B     A.B\n");
        printf("\t______________\n");
        printf("\t0     0     0\n");
        printf("\t0     1     0\n");
        printf("\t1     0     0\n");
        printf("\t1     1     1\n");
        break;
    case 3:
        printf("\tA     B     A+B\n");
        printf("\t______________\n");
        printf("\t0     0     0\n");
        printf("\t0     1     1\n");
        printf("\t1     0     1\n");
        printf("\t1     1     1\n");
        break;
    case 4:
        printf("\tA     B     A(+)B\n");
        printf("\t_____________\n");
        printf("\t0     0     0\n");
        printf("\t0     1     1\n");
        printf("\t1     0     1\n");
        printf("\t1     1     0\n");
        break;
    }
}

int main()
{
    displayTable(choice);
    system("pause");
    return 0;
}

