#include <stdio.h>
#include <stdlib.h>

void decBin(int deci){
    int R[15],count=0,quotient = deci, i;
    while (quotient !=0){
        R[count] = quotient % 2;
        quotient = quotient /2;
        count ++;
    }
    printf("The number %d in binary is ", deci);
    for (i = count-1; i>= 0; i--){
        printf("%d", R[i]);
    }
}

void binDec(int bin){
    int p=0,sum=0;
    printf("The number %d in decimal is ", bin);
    while (bin!=0){
        int rem = bin % 10;
        bin = bin /10;
        sum = sum+rem*pow(2,p);
        p++;
    }
    printf("%d",sum);
}

 int main (){
    int num;
    int base;
    int validbase  = 0;
    do{
    printf("\tEnter a base: ");
    scanf("%d",&base);
    if (base ==2 || base ==10)
        validbase = 1;
    else
        printf("\tInvalid base.\n\n");
    } while(validbase ==0);

     if(base == 2){
        printf("\tEnter a binary number: ");
        scanf("%d", &num);
        binDec(num);
     } else{
        printf("\tEnter the decimal number: ");
        scanf("%d", &num);
        decBin(num);
     }
     printf("\n");
    system("pause");
    return 0;
}


