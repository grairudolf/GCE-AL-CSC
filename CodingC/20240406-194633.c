#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define NUM_QUESTIONS 5

// Structure to hold a quiz question
typedef struct {
    char question[100];
    char optionA[50];
    char optionB[50];
    char optionC[50];
    char optionD[50];
    char correctAnswer;
} QuizQuestion;

// Function to display the question and options
void displayQuestion(QuizQuestion *q) {
    printf("\n%s\n", q->question);
    printf("A. %s\t", q->optionA);
    printf("B. %s\n", q->optionB);
    printf("C. %s\t", q->optionC);
    printf("D. %s\n", q->optionD);
}

// Function to shuffle the questions
void shuffleQuestions(QuizQuestion *questions, int n) {
    srand((unsigned int)time(NULL));
    for (int i = n - 1; i > 0; i--) {
        int j = rand() % (i + 1);
        QuizQuestion temp = questions[i];
        questions[i] = questions[j];
        questions[j] = temp;
    }
}

int main() {
    QuizQuestion questions[NUM_QUESTIONS] = {
        {"What is the capital of France?", "Berlin", "Madrid", "Paris", "Rome", 'C'},
        {"What is the capital of Italy?", "Berlin", "Rome", "Paris", "Madrid", 'B'},
        // Add more questions here
    };

    int score = 0;
    char answer;
    shuffleQuestions(questions, NUM_QUESTIONS);

    for (int i = 0; i < NUM_QUESTIONS; i++) {
        displayQuestion(&questions[i]);
        printf("Enter your answer (A/B/C/D): ");
        scanf(" %c", &answer);
        if (toupper(answer) == questions[i].correctAnswer) {
            printf("Correct!\n");
            score++;
        } else {
            printf("Wrong! The correct answer is %c.\n", questions[i].correctAnswer);
        }
    }

    printf("\nYour final score is: %d/%d\n", score, NUM_QUESTIONS);
    return 0;
}
