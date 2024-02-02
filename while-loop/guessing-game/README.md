# Number Guessing Game

## Question

**What does this program do?**

This C program is a simple number guessing game where the user needs to guess a randomly generated number between 1 and 100. The program provides feedback on whether the guess is too high or too low and congratulates the user when the correct number is guessed.

## Explanation

The program consists of two functions:

1. **Initialize Game Function (`initializeGame`):**
   - Seeds the random number generator using the current time.
   - Generates a random number between 1 and 100 using `rand()` and returns it.

2. **Play Game Function (`playGame`):**
   - Takes the secret number as a parameter and initiates the game loop.
   - Asks the user to input their guess in each iteration of the loop.
   - Provides feedback on whether the guess is too high, too low, or correct.
   - Displays the number of attempts taken to guess the correct number.

3. **Main Function:**
   - Calls the `initializeGame` function to get the secret number.
   - Calls the `playGame` function with the secret number.

## How to Use

1. Clone the repository or download the source code file.
2. Compile the code using a C compiler (e.g., gcc).
3. Run the executable.
4. Follow the on-screen instructions to guess the randomly generated number.
5. The program will provide feedback on each guess until the correct number is guessed.

Enjoy playing the Number Guessing Game!

Feel free to experiment with different runs and observe how the program behaves with different inputs.