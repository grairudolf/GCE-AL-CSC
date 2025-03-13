#include <stdio.h>
#include <stdlib.h>
int MaxNoOfStars;
int NoOfSpaces;
int NoOfStars;

void initialise(int MaxNoofStars, int NoofSpaces, int NoofStars){
    MaxNoOfStars = MaxNoofStars;
    NoOfSpaces = NoofSpaces;
    NoOfStars = NoofStars;
}

void OutputLeadingSpaces(int nSpaces){
    for(int i = 0; i<nSpaces; i++){
        printf(" ");
    }
}

void OutputLineOfStars(int nStars){
    for(int i=0; i<nStars; i++){
        printf("*");
    }
    printf("\n");
}

void Adjust(NoofSpaces, NoofStars){
    NoOfSpaces = NoOfSpaces-NoofSpaces;
    NoOfStars = NoOfStars+NoofStars;
}

int main(int argc, char *argv[])
{
    int number;
    printf("Enter a Positive Integer: ");
    scanf("%d", &number);
    int NumofSpaces = number/2;
    initialise(number,NumofSpaces,1);

    do{
        OutputLeadingSpaces(NoOfSpaces);
        OutputLineOfStars(NoOfStars);
        Adjust(1,2);
    } while(NoOfStars<=MaxNoOfStars);
    system("pause");
    return 0;
}
