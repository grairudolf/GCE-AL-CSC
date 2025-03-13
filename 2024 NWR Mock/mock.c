#include <stdio.h>
#include <string.h>
#include <time.h>

char QUALIFIED[12][20];
int GROUP[3];

void QualifiedTeams(char Q[][20], int size){
    char Teams[][11] = {"IvoryCoast", "Morocco", "Algeria",
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
        printf("%d. %s\n", i+1,Q[i]);
    }
}

void Randomize(int G[], int size){
    srand(time(NULL));
    int i, j, N;
    for(i = 0; i < size; i++){
        N = 1 + rand()%12;
        j = i - 1;
        do{
            if(G[j] == N){
                N = 1 + rand()%12;
                j = i - 1;
            } else{
                j -= 1;
            }
        } while(j != 1);
        G[i] = N;
    }
}

void Fixtures(char Q[][20], int G[], int size){
    printf("Fixtures\n");
    for(int i = 1; i <= 12; i++){
        if(i >= 1 && i < 5){
            printf("** GROUP A **");
        }else if(i>= 5 && i < 9){
            printf("** GROUP B **");
        }else{
            printf("** GROUP C **");
        }
        printf("\n");
        for(int j = 1; j <= 12; j++){
            if(i <= 4 && G[i] == j){
                printf("%c", Q[i]);
            } else if(i <= 8 && G[i] == j){
                printf("%c", Q[i]);
            } else if(i <= 12 && G[i] == j){
                printf("%c", Q[i]);
            }
             printf("\n");
        }
    }
}

void Sort(char Q[12]){
    int i, j;
    char temp[20];
    for(i = 12; i >= 1; i--){
        for(j = 1; j <= i; j++){
            if(Q[j] < Q[j-1]){
                strcpy(temp,Q[j]);
                strcpy(Q[j],Q[j-1]);
                strcpy(Q[j-1],temp);
            }
        }
    }
}

int main()
{
    QualifiedTeams(QUALIFIED, 12);
    Display(QUALIFIED, 12);
    Randomize(GROUP, 12);
    Fixtures(QUALIFIED, GROUP, 12);
    printf("Sort\n");
    Sort(QUALIFIED);
    Display(QUALIFIED, 12);
    system("pause");
    return 0;
}

