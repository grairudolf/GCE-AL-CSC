#include<stdio.h>
int main(){

return 0;
}
void menu(){
int choice;
printf("==========");
printf("    MENU  ");
printf("==========");
printf("1.  NOT");
printf("2.  AND");
printf("3.  OR");
printf("4.  XOR");
printf("5.  QUIT");
printf("==========");
printf("enter your choice:");
scanf("%d",&choice);
return choice;
}
void displayTable(){
menu();
switch(menu);
case 1:
    printf("\tA      \tA'");
    printf("--------------");
    printf("\t0\n1\n0\n1\n");
    printf("\t1\n0\n1\n0\n");
case 2:
    printf("\tA    \tB  \tA.B\n");
    prinf("-------------------");
    printf("\t0\n0\n1\n1\n");
    printf("\t0\n1\n0\n1\n");
    printf("\t0\n0\n0\n1\n");
case 3:
      printf("\tA    \tB  \tA+B\n");
    prinf("-------------------");
    printf("\t0\n0\n1\n1\n");
    printf("\t0\n1\n0\n1\n");
    printf("\t0\n1\n1\n1\n");
case 4:
      printf("\tA    \tB  \tA(+)B\n");
    prinf("-------------------");
    printf("\t0\n0\n1\n1\n");
    printf("\t0\n1\n0\n1\n");
    printf("\t0\n1\n1\n0\n");
    break;

    }
    int main(){
        int choice;
printf("==========");
printf("    MENU  ");
printf("==========");
printf("1.  NOT");
printf("2.  AND");
printf("3.  OR");
printf("4.  XOR");
printf("5.  QUIT");
printf("==========");
printf("enter your choice:");
scanf("%d",&choice);
        void displayTable(choice);
    }
