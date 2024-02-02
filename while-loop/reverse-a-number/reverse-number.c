#include <stdio.h>

int reverseNumber(int n) {
    int rev = 0;
    while(n > 0) {
        rev = rev * 10 + n % 10;
        n /= 10;
    }
    return rev;
}

int main() {
    int num;
    printf("Enter Your Desired Number: ");
    scanf("%d", &num);
    printf("The Reverse of %d is : %d", num, reverseNumber(num));

    return 0;
}