#include <stdio.h>
#include <conio.h>

int power(int a, int n){
    int pow;
    if(n == 0){
        return 1;
    } else{
        return a*power(a,n-1);
    }
}

int main()
{
    int base, exponent;
    printf("Enter the base and exponent:\n");
    scanf("%d %d", &base, &exponent);
    power(base, exponent);
    return 0;
}
