// *****************************************************************************
// Guess.c
//
// Play a game where the user guesses a number from 1 to 10
//******************************************************************************
#include <stdio.h>
#include <stdlib.h>

int main(){
      int numToGuess;           //Number the user tries to guess
      int guess;                //The user's guess
      int count = 1;
      int i = 0, j = 0;
      //1. Randomly generate the number to guess
	   srand (time(NULL));
	   numToGuess = rand()%10;
      //2. Print message asking the user to enter a guess
      printf("Enter your guess between 1 and 10: ");
      //3. read in guess
     scanf("%d", &guess);
          
        while(guess != numToGuess){
          //4. Keep going as long as the guess is wrong
          //5. Print message saying guess is wrong
          //   and then get another guess from user
		if (guess > numToGuess){
            printf("Your guess was too high\n");
            printf("Enter a guess less than %d: ", guess);
            scanf("%d", &guess);
            i++;
          } else if(guess < numToGuess){
            printf("Your guess was too low\n");
            printf("Enter a guess greater than %d: ", guess);
            scanf("%d", &guess);j++;
          }
          count++;
      }
      if(guess == numToGuess){
      //6. Print message saying guess is correct
          	printf("Congrats!! Your guess is correct.\n");
    }
    printf("It took you %d guesses to get the correct number\n", count);
	printf("%d high and %d low\n", i,j);

      system("pause");
      return 0;
}
