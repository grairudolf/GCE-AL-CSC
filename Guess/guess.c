#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    srand(time(0));
    int guess;
    int numToGuess = (rand() % 10) + 1;
    int guess_chances = 1;
    int high_guesses = 0;
    int low_guesses = 0;

    printf("Enter a guess between 1 and 10: ");
    scanf("%d", &guess);

    while(guess != numToGuess){
        printf("You guessed wrong\n");
        if(guess < numToGuess){
            printf("Your guess was too low. Guess a number higher than %d\n", guess);
            low_guesses++;
        } else{
            printf("Your guess was too high. Guess a number lower than %d\n", guess);
            high_guesses++;
        }
        printf("Enter another guess: \n  ");
        scanf("%d", &guess);
        guess_chances++;
    }
    printf("Correct!! You guessed the right number\n");
    printf("Congrats, it took you %d chances to guess right\n", guess_chances);
    printf("You had %d high guesses and %d low guesses\n", high_guesses, low_guesses);
    return 0;
}
