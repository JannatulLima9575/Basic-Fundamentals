#include <stdio.h>

int main() {

    for(int i = 10; i >= 1; i--) {
        printf("%d\n", i);
    }

    return 0;
}

// printing stars in descending order
#include <stdio.h>

int main() {

    for(int i = 10; i >= 1; i--) {
        for(int j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}

// printing stars in ascending order
#include <stdio.h>

int main() {

    for(int i=1; i<=10; i++) {
        for(int j=1; j<=i; j++) {
            printf("*");
        }
        printf("\n");
    }
}