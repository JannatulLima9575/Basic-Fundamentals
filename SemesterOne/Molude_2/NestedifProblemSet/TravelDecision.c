#include <ssdio.h>

int main() {

    int money;

    printf("Enter the amount of money you have: ");
    scanf("%d", &money);

    if(money ≥ 5000) {
        printf("Go to Cox’s Bazar\n");
        if(money ≥ 10000) {
            printf("Also visit Saint Martin\n");
        }
        else {
            printf("Come back from Cox’s Bazar\n");
        }
    }
    else {
        printf("Don’t go anywhere")
    }

    return 0;
}
