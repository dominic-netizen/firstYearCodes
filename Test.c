#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int numToGuess;   
    int userGuess;
    int attempts = 0;
    const int MAX_ATTEMPTS = 10;

    
    srand(time(0));

    
    numToGuess = rand() % 50 + 1;

    printf("Welcome to the Number Guessing Game!\n");
    printf("I have selected a number between 1 and 50.\n");
    printf("You have %d attempts to guess the number.\n", MAX_ATTEMPTS);

    while (attempts < MAX_ATTEMPTS) {
        printf("Enter your guess: ");
        fflush(stdout); 
        scanf("%d", &userGuess);

        attempts++;

        if (userGuess < numToGuess) {
            printf("Too low! Try again.\n");
        } else if (userGuess > numToGuess) {
            printf("Too high! Try again.\n");
        } else {
            printf("Congratulations! You guessed the number in %d attempts.\n", attempts);
            return 0; 
        }

        printf("Attempts left: %d\n", MAX_ATTEMPTS - attempts);
    }

    printf("Sorry, you've used all your attempts. The number was %d.\n", numToGuess);

    return 0;
}