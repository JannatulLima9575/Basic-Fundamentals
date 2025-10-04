#include <stdio.h>

int main() {

    int age;
    char citizen[20];

    printf("Enter your age: ");
    scanf("%d", &age);
    printf("Enter your citizenship (e.g., Bangladeshi): ");
    scanf("%s", citizen);

    if(age >= 18) {
        printf("You are eligible to vote\n");
        if(strcmp(citizen, "Bangladeshi") == 0) {
            printf("Can vote in Bangladesh\n");
        }
        else {
            printf("Cannot vote in Bangladesh\n");
        }
    }
    else {
        printf("Not eligible to vote\n");
        return 0;
    }
}



