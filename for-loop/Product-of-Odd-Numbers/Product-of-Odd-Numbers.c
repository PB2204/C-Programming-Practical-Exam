#include <stdio.h>

int main() {
    long long int product = 1;  // Initialize product to 1 for multiplication

    // Use a for loop to iterate from 1 to 50
    for (int i = 1; i <= 50; i++) {
        // Check if the current number is odd
        if (i % 2 != 0) {
            product *= i;  // Multiply the current odd number to the product
        }
    }

    // Display the product of odd numbers
    printf("The product of odd numbers from 1 to 50 is: %lld\n", product);

    return 0;
}