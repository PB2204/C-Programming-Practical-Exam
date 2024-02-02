#include <stdio.h>

double squareRootNewtonRaphson(double num) {
    double guess = num / 2.0;  // Initial guess for square root
    double epsilon = 0.00001;  // Tolerance for convergence

    while ((guess * guess - num) > epsilon) {
        guess = 0.5 * (guess + num / guess);  // Newton-Raphson formula
    }

    return guess;
}

int main() {
    double num;

    // Get user input
    printf("Enter a number to find its square root: ");
    scanf("%lf", &num);

    // Check for non-negative input
    if (num >= 0) {
        printf("The square root of %.2lf is approximately: %.5lf\n", num, squareRootNewtonRaphson(num));
    } else {
        printf("Invalid input. Please enter a non-negative number.\n");
    }

    return 0;
}