#include <stdio.h>

void printFibonacci(int n) {
    int term1 = 0, term2 = 1, nextTerm;

    printf("Fibonacci sequence for first %d terms: ", n);

    for (int i = 1; i <= n; i++) {
        printf("%d, ", term1);

        nextTerm = term1 + term2;
        term1 = term2;
        term2 = nextTerm;
    }
}

int main() {
    int n;

    // Get user input for the number of terms
    printf("Enter the number of terms for the Fibonacci sequence: ");
    scanf("%d", &n);

    // Check for non-negative input
    if (n >= 1) {
        printFibonacci(n);
    } else {
        printf("Invalid input. Please enter a positive number.\n");
    }

    return 0;
}