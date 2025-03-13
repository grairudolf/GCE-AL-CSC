#include<stdio.h>
#include<math.h>

void initialise(int tab[],int n){
    for(int i=0; i<n; i++){
       tab[i]=i+1;
    }
    tab[0]=0;
}


int verifyPrime(int x){
    for(int i=2; i<=x/2; i++){
        if(x%i==0)
            return 0;
    }
    return 1;
}

int setzero(int tab[],int n,int y){
    for(int i=y+1; i<n; i++){
        if(tab[i]%y==0){
            tab[i]=0;
        }
    }
}

void doDisplay(int tab[],int n)
{
    printf("The prime numbers are:\n");
    for(int i=0; i<n; i++){
        if(tab[i]!=0)
            printf("\t%d\n",tab[i]);
    }
}

int main()
{
    int N,i,Tab[100];
    float rootN;
    printf("Enter a number less than 100 to get all prime numbers between 1 and that number: ");
    scanf("%d",&N);
    rootN=round(sqrt(N));
    initialise(Tab,N);
    for(i=2; i<=rootN; i++){
        if(verifyPrime(i)==1){
            setzero(Tab,N,i);
        }
    }
    doDisplay(Tab,N);
    system("pause");
    return 0;
}

