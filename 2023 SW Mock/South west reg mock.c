#include <stdio.h>
#include <stdlib.h>

void decBin(int deci){
    int R[15],count=0,quotient = deci, i;
    while (quotient !=0){
        R[count] = quotient % 2;
        quotient = quotient /2;
        count ++;
    }
    for (i = count-1; i>= 0; i--){
        printf("%d", R[i]);
    }
}

void binDec(int bin){
    int p=0,sum=0;
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
    printf("Enter a base: ");
    scanf("%d",&base);
    if (base ==2 || base ==10)
        validbase = 1;
    else
        printf("Invalid base.\n");
    } while(validbase ==0);

     if(base == 2){
        printf("Enter a binary number\n");
        scanf("%d", &num);
        binDec(num);
     } else{
        printf("Enter the decimal number\n");
        scanf("%d", &num);
        decBin(num);
     }
    system("pause");
    return 0;
}


