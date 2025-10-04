#include <stdio.h>

int main () {

    int a, b, reminder;
    printf("Enter two numbers: \n");
    scanf("%d %d", &a, &b);
    reminder = a % b;
    printf("Modulus: %d\n", reminder);
    
    return 0;
}