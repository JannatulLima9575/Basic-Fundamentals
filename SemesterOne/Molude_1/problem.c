#include <stdio.h>

int main() {
    int a, b;
    printf("Enter two numbers: \n");
    scanf("%d %d", &a, &b);

    printf("Swapped order: %d %d\n", b, a);

    return 0;
}