#include <stdio.h>
#include <stdlib.h>
#include <time.h>

 int main(){
     int Tally[7] = {0};
     srand (time(0));
     for(int i =0; i < 30; i++){
        int number = rand()%6 + 1;
        Tally[number]++;

    }
    printf("Scores\tfrequencies\n");
    for (int i = 1; i<=6; i++){
        printf("%d\t%d\n",i,Tally[i]);
    }
 system("pause");
 return 0;
 }
