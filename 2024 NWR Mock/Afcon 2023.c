#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h> // Added for strcmp and strcpy

char QUALIFIED[12][20]; // Global array to hold qualified teams
int GROUP[3]; // Global array to hold randomized group numbers

void QualifiedTeams(char R[][20], int size) {
    char teams[][20] = {"IvoryCoast", "Morocco", "Algeria", "Ghana", "Senegal", "Tunisia", "Egypt", "Zambia", "Nigeria", "Mali", "Cameroon", "Guinea"};
    
    for (int j = 0; j < size; j++) {
        strcpy(R[j], teams[j]);
    }
}
// Procedure to display the list of qualified teams
void doDisplay(char R[][20], int size) {
    printf("This is the list of qualified teams:\n");
    for (int j = 0; j < size; j++) {
        printf("%s\n", R[j]);
    }
    printf("\n");
}

// Procedure to generate unique random numbers and store them in GROUP
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

// Procedure to display the teams in three groups of 4 teams each
void Fixtures(char QUALIFIED[][20], int GROUP[], int size) {
    printf("Fixtures:\n");
    for (int i = 0; i < size-9; i++) {
        printf("**Group %c**:\n", 'A' + i);
        for (int j = 0; j < 4; j++) {
            printf("%s\n", QUALIFIED[(i * 4) + j]);
        }
        printf("\n");
    }
}

// Procedure to sort the array QUALIFIED in ascending order
void Sort(char QUALIFIED[][20], int size) {
    char temp[20];
    for (int i = 0; i < size - 1; i++) {
        for (int j = i + 1; j < size; j++) {
            if (strcmp(QUALIFIED[i], QUALIFIED[j]) > 0) {
                strcpy(temp, QUALIFIED[i]);
                strcpy(QUALIFIED[i], QUALIFIED[j]);
                strcpy(QUALIFIED[j], temp);
            }
        }
    }
}

// Function to populate QUALIFIED with team names


int main() {
    int size = 12;

    // Step i: Declare two arrays QUALIFIED and GROUP as global variables

    // Step ii: Call the procedure QualifiedTeams first then call Display.
    QualifiedTeams(QUALIFIED, size);
    printf("After Qualifying:\n");
    doDisplay(QUALIFIED, size);

    // Step iii: Now call the procedures Randomize and followed by Fixtures.
    Randomize(GROUP, size);
    Fixtures(QUALIFIED, GROUP, size);

    // Step iv: Finally call the procedures Sort() followed by Display().
    Sort(QUALIFIED, size);
    printf("After Sorting:\n");
    doDisplay(QUALIFIED, size);

    return 0;
}