#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <time.h>

char QUALIFIED[12][20];
int GROUP[3];

void QualifiedTeams(char Q[][20], int size){
    char Teams[][20] = {"IvoryCoast", "Morocco", "Algeria",
            "Ghana", "Senegal","Tunisia",
            "Egypt", "Zambia", "Nigeria",
            "Mali", "Cameroon", "Guinea"};
    for(int j = 0; j < size; j++){
        strcpy(Q[j], Teams[j]);
    }
}

void Display(char Q[][20], int size){
    printf("Qualified Teams\n");
    for(int i = 0; i < size; i++){
        printf("%d. %s\n", i+1, Q[i]);
    }
}

void Randomize(int GROUP[], int size) {
    int i, j, N;
    srand(time(NULL));

    for (i = 0; i < size; i++){
        N = rand() % 12 + 1;
        for (j = 0; j < i; j++) {
            if (GROUP[j] == N) {
                N = rand() % 12 + 1;
                j = -1;
            }
        }
        GROUP[i] = N;
    }
}

void Fixtures(char Q[][20], int G[], int size){
    printf("Fixtures:\n");
    for(int i = 1; i < size; i++){
        if(i >= 1 && i < 5){
            printf("** GROUP A **\n");
        }else if(i >= 5 && i < 9){
            printf("** GROUP B **\n");
        }else{
            printf("** GROUP C **\n");
        }

        for(int j = 1; j <= 12; j++){
            if(i <= 4 && G[i] == j){
                printf("%d. %s\n", i, Q[i-1]);
            } else if(i <= 8 && G[i] == j){
                printf("%d. %s\n", i, Q[i-1]);
            } else if(i <= 12 && G[i] == j){
                printf("%d. %s\n", i, Q[i-1]);
            }
        }
    }
}

void Sort(char Q[][20], int size){
    int i, j;
    char temp[20];
    for(i = 0; i < size; i++){
        for(j = i; j < size; j++){
            if(strcmp(Q[j-1], Q[j]) > 0){
                strcpy(temp,Q[j-1]);
                strcpy(Q[j-1],Q[j]);
                strcpy(Q[j],temp);
            }
        }
    }
}

int main()
{
    QualifiedTeams(QUALIFIED, 12);
    Display(QUALIFIED, 12);
    printf("\n\n");
    Randomize(GROUP, 12);
    Fixtures(QUALIFIED, GROUP, 12);
    printf("Sort\n\n");
    Sort(QUALIFIED, 12);
    Display(QUALIFIED, 12);
    system("pause");
    return 0;
}
