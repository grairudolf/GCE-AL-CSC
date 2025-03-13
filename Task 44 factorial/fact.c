#include <stdio.h>

int factorial(int num){
    if(num <= 0){
        return 1;
    }
    else{
        return num * factorial(num-1);
    }
}
int permutation(int n, int r){
    int permu = (factorial(n))/(factorial(n-r));
    return permu;
}
int combination(int n, int r){
    int combine = (factorial(n))/(factorial(r)*factorial(n-r));
    return combine;
}

int main(){
    int n, r;
    do{
    printf("Enter the positive integers n and r where n is greater than r: \n");
    scanf("%d %d", &n, &r);
    } while(n < r || n<0);
    int select;
    printf("Select 1 for permutation, 2 for combinations: \n");
    scanf("%d", &select);
    if(select==1){
        printf("%dP%d is %d\n", n, r, permutation(n,r));
    } else{
        printf("%dC%d is %d\n", n, r, combination(n,r));
    }
    /*for(int i=1; i<=n; i++){
        printf("%d! = %d\n", i, factorial(i))
    }*/
    system("pause");
    return 0;
}
