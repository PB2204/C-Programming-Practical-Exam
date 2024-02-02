#include <stdio.h>

int evenSum(int n) {
    int sum = 0;
    for(int i = 1; i <= n; i++) {
        if(i % 2 == 0) {
            sum += i;
        }
    }
    return sum;
}

int main(){
    int num;
    printf("Enter Your Desired Number: ");
    scanf("%d",&num);
    printf("The Sum Of All Even Numbers from 1 to %d is : %d",num,evenSum(num));

    return 0;
}