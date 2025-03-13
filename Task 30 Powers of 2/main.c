    #include <stdio.h>
    #include <stdlib.h>

    int main(){
    int numPowersOf2;         //How many powers of 2 to compute
    int nextPowersOf2 = 1;    //Current power of 2
    int exponent = 0;
    int i = 0;

    printf("How many powers of two will you like printed? ");
    scanf("%d",&numPowersOf2);

    while(exponent <= numPowersOf2){
        printf("2 ^ %d = %d\n", i, nextPowersOf2);
        nextPowersOf2 = nextPowersOf2 * 2;
        i++;
        exponent++;
    }
    system("pause");
    return 0;
    }
