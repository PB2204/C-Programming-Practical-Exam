# Square Root Calculation using Newton-Raphson Method

## Question

**What does this program do?**

This C program calculates the square root of a non-negative number using the Newton-Raphson method.

## Explanation

The program includes:

1. **Newton-Raphson Method Function (`squareRootNewtonRaphson`):**
   - Takes a double `num` as input and iteratively applies the Newton-Raphson method to approximate the square root.
   - Uses a while loop with a tolerance value for convergence.

2. **Main Function:**
   - In the `main` function, the user is prompted to enter a number using `printf` and `scanf`.
   - Checks for non-negativity of the input.
   - Calls the `squareRootNewtonRaphson` function to calculate and display the approximate square root.

3. **Output:**
   - The program displays the approximate square root of the user-entered non-negative number.

## How to Use

1. Clone the repository or download the source code file.
2. Compile the code using a C compiler (e.g., gcc).
3. Run the executable.
4. Enter a non-negative number when prompted.
5. Observe the program's output, which will be the approximate square root.

Feel free to experiment with different non-negative input values and observe how the Newton-Raphson method converges to the square root.

**Note:** The program expects a non-negative input for accurate results.