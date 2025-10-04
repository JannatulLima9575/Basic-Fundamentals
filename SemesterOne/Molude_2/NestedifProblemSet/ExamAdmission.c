#include <stdio.h>

int main() {

    float gpa, attendance;

    printf("Enter your GPA: ");
    scanf("%f", &gpa);
    printf("Enter your attendance percentage: ");
    scanf("%f", &attendance);

    if(gpa >= 2.5) {
        if(attendance >= 75) {
            printf("Eligible for exam\n");
        }
        else {
            printf("Not allowed due to low attendance\n");
        }
    }
    else {
        printf("Not allowed due to low GPA\n");
    }

    return 0;
}
