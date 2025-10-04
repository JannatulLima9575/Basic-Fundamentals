#include <stdio.h>

int main() {

    int money;

    printf("Enter your money: ");
    scanf("%d", &money);

    if (money >= 100) {
        printf("I will eat burger\n");
    }
    else if ( money >= 50) {
        printf("I will eat Fuchka\n");
    }
    else {
        printf("I will not eat anything\n");
    }
}