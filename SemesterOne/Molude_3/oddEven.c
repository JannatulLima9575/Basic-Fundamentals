#include <stdio.h>

int main() {

    int n;
    printf("Enter Your Number:");
    scanf("%d", &n);

    if(n%2 == 0) {
        printf("Even Number\n");
    } else {
        printf("Odd Number\n");
    }

    return 0;
}

#include <stdio.h>

int main() {

    int n;
    printf("Enter a Number:");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++) {
        if(i%2 == 0){
            printf("%d\n", i);
        }
    }
}