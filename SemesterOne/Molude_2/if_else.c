#include <stdio.h>

int main () {

    int money;

    printf("Enter your money: ");
    scanf("%d", &money);

    if (money >= 100) {
        printf("I will eat burger\n");
    }
    else {
        printf("I will not eat burger\n");
    }

    return 0;
}