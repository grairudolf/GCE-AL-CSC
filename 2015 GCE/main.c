#include<stdio.h>
#define n 6
#define rent 500
#define industral 100
#define domestic 65

int net_amonut_payable(int UC){
    int untaxedAmount, taxedAmount,VAT,netAmount;
    if(UC<=100)
        untaxedAmount=UC*domestic;
    else
        untaxedAmount=UC*industral;
    VAT=(1.8/100)*untaxedAmount;
    return netAmount=untaxedAmount + VAT + rent;
}

int main()
{
    int R1[n], R2[n], R3[n],NAP[n];
    printf("Enter previous and current meter readings\n");
    for(int i = 0; i < n; i++){
        printf("Previous Reading %d:\n",i+1);
        scanf("%d",&R1[i]);
        printf("Current Reading %d:\n",i+1);
        scanf("%d",&R2[i]);
        R3[i] = R2[i] - R1[i];
    }
    for(int i=0; i<n; i++){
        NAP[i]=net_amonut_payable(R3[i]);
    }
    printf("|Previous Reading | Current Reading | Units consumed| Net Amount Payable|\n");
    for(int i=0; i<n; i++){
        printf("\t %d \t\t %d \t\t %d \t\t %d FCFA \n",R1[i],R2[i],R3[i],NAP[i]);
    }
    return 0;
}
