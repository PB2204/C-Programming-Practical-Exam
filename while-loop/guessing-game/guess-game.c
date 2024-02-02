#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Function to initialize the game and generate a random number
int initializeGame() {
    // Seed the random number generator
    srand(time(NULL));

    // Generate a random number between 1 and 100
    return rand() % 100 + 1;
}

// Function to play the guessing game
void playGame(int secretNumber) {
    int guess;
    int attempts = 0;

    printf("Welcome to the Number Guessing Game!\n");
    printf("Try to guess the number between 1 and 100.\n");

    while (1) {
        // Get user input
        printf("Enter your guess: ");
        scanf("%d", &guess);

        // Increment the attempts counter
        attempts++;

        // Check if the guess is correct
        if (guess == secretNumber) {
            printf("Congratulations! You guessed the number in %d attempts.\n", attempts);
            break; // Exit the loop if the guess is correct
        } else if (guess < secretNumber) {
            printf("Too low. Try again!\n");
        } else {
            printf("Too high. Try again!\n");
        }
    }
}

int main() {
    // Initialize the game and get the secret number
    int secretNumber = initializeGame();

    // Play the game
    playGame(secretNumber);

    return 0;
}