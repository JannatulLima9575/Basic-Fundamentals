#include <stdio.h>

int main() {
    int money;

    printf("Enter your money: ");
    scanf("%d", &money);

    if (money >= 5000) {
        printf("Go to Cox's Bazar\n");

        if (money >= 10000) {
            printf("Go to Cent martin\n");
        }
        else {
            printf("Come back from Cox's Bazar\n");
        }
    }
    else {
        printf("Don't go anywhere\n");
    }

    return 0;
}