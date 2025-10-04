#include<stdio.h>

int main() {

    int n;
    printf("Enter a Number:");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++) {
        if(i == 5) {
            break;  // exit the loop when i is 5
        }
        printf("%d\n", i);
    }

    printf("Loop ended\n");

    for(int i = 1; i <= n; i++) {
        if(i == 5) {
            continue;  // skip the rest of the loop when i is 5
        }
        printf("%d\n", i);
    }

    return 0;
}