#include <stdio.h>
#include <stdlib.h>
int main(){
 int temp;
 printf("What is the temperature at LazyDays lake: ");
 scanf("%d", &temp);
 if (temp >=80 && temp <=95){
        printf("It's Swimming time\n");
    } else if(temp>= 60 && temp <80){
                printf("It's Tennis time\n");
            } else if(temp >=40 && temp <60){
               printf("It's Golf time\n");
                } else if(40 >=temp >20){
                printf("It's Skiing time\n");
                }else if(temp > 95 || temp <= 20){
                    printf("Visit our shop\n");
                }
    system("PAUSE");
    return 0;
}
