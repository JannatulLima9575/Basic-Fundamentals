#include <stdio.h> 

int main () {

    int marks;

    printf("Enter your marks: ");
    scanf("%d", &marks);

    if( marks >= 40 ) {
        printf("Pass\n");

        if( marks >= 80 ) {
            printf("Excellent\n");
        }
        else if( marks >= 60 ) {
            printf("Good\n");
        }
        else {
            printf("Average\n");
        }
    }
    else {
        printf("Fail\n");
    }

    return 0;
}