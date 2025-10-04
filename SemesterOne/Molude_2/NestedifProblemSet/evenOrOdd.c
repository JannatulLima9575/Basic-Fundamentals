// Q1. Take a number from user and check if its a even number or odd number.

#include <stdio.h>

int main() {
    int number;

    printf("Enter an integer: ");
    scanf("%d", &number);

    if(number % 2 == 0) {
        printf("%d is an even number.\n", number);
    } else {
        printf("%d is an odd number.\n", number);
    }

    // if(number % 2 == 0) {
    //     printf("even");
    // } else {
    //     printf("odd.\n");
    // }

    return 0;
}