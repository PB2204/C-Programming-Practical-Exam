#include <stdio.h>

int main() {
    int sum = 0;

    // Use a for loop to iterate from 1 to 100
    for (int i = 1; i <= 100; i++) {
        // Check if the current number is divisible by both 3 and 5
        if (i % 3 == 0 && i % 5 == 0) {
            sum += i;  // Add the current number to the sum
        }
    }

    // Display the sum of numbers divisible by 3 and 5
    printf("The sum of numbers divisible by 3 and 5 between 1 and 100 is: %d\n", sum);

    return 0;
}