#include <stdio.h> 

int main() {

    char degree[10];
    int experience;

    printf("Enter your degree (BSc/MSc): ");
    scanf("%s", degree);
    printf("Enter your years of experience: ");
    scanf("%d", &experience);

    if(strcmp(degree, "MSc") == 0) {
        if(experience >= 2) {
            printf("Selected\n");
        }
        else {
            printf("Need more experience\n");
        }
    }
    else {
        printf("Not eligible\n");
    }

    return 0;
}