// Print numbers from 1 to 10 using for loop.
#include <stdio.h>

int main () {

    for(int i = 1; i <= 10; i++) {
        printf("%d\n", i);
    }
}

// Take a number from user and check if its a positive or negative number.
#include <stdio.h>

int main() {
    int number, i;

    printf("Enter an integer: ");
    scanf("%d", &number);

    for(i = 1; i <= number; i++) {
        if(number > 0) {
            printf("%d is a positive number.\n", number);
            break;
        } else if(number < 0) {
            printf("%d is a negative number.\n", number);
            break;
        } else {
            printf("The number is zero.\n");
            break;
        }
    }

    return 0;
}

// Print even numbers from 1 to 20 using for loop.
#include <stdio.h>

int main() {

    for(int i=2; i<=20; i=i+2) {
        printf("%d\n", i);
    }
}

// Print odd numbers from 1 to 20 using for loop.
#include <stdio.h>

int main() {

    for(int i=1; i<=20; i=i+2) {
        printf("%d\n", i);
    }
}
