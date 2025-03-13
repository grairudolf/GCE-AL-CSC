#include <stdio.h>
#include <math.h>

void decBin(int deci){
    int s;
    int R[s];
    R[0] = deci % 2;
    for(int i=1; R[i]!=0; i++){
       R[0] = R[i] % 2;
       printf("%d\t", R[i]);
    }
    for(int j=s; j>=0; j--){
        printf("%d\t", R[j]);
    }
}
void binDec(int bin){
    int rem, sum;
    int p = 0;
    while(bin != 0){
        rem = bin % 10;
        bin = bin / 10;
        sum = sum + rem*(pow(2,p));
        p++;
    }
}

int main()
{
    int dec, bin;
    int valid_base = 0;
    int base;
    do{
        printf("Enter base: ");
        scanf("%d", &base);
        if(base = 10){
            printf("Enter a decimal number to be converted to a binary number: ");
            scanf("%d", &dec);
            decBin(dec);
        } else if(base = 2){
            printf("Enter a binary number to be converted to a decimal number: ");
            scanf("%d", &bin);
            binDec(bin);
        }
    } while(base != 10 || base != 10);
    system("pause");
    return 0;
}
