#include <stdio.h>

// using while loop
int factorial(int n) {
    int fact = 1;
    while(n > 0) {
        fact *= n;
        n--;
    }
    return fact;
}

int main() {
    int num;
    printf("Enter Your Desired Number: ");
    scanf("%d", &num);
    printf("The Factorial of %d is : %d", num, factorial(num));

    return 0;
}