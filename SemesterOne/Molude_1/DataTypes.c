#include <stdio.h>
#include <stdbool.h>

int main() {
    printf("Printing all types of data in C Language\n");

    int number = 10;
    float decimalNumber = 5.5;
    char character = 'A';
    char string[] = "Hello, World!";
    double largeDecimal = 12345.6789;
    bool booleanValue = 1; // 1 for true, 0 for false
    bool booleanValuefalse = 0; // 1 for true, 0 for false
    bool a = false;
    bool b = true;


    printf("Integer: %d\n", number);
    printf("Float: %.2f\n", decimalNumber); // Limiting to 2 decimal places 
    printf("Character: %c\n", character);
    printf("String: %s\n", string);
    printf("Double: %.4lf\n", largeDecimal);
    printf("Boolean: %s\n", booleanValue ? "true" : "false");
    printf("Boolean: %s\n", booleanValuefalse ? "true" : "false");
    printf("Boolean: %s\n", a ? "true" : "false");
    printf("Boolean: %d\n", b);
}