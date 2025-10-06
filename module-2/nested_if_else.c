#include <stdio.h>

int main() {
    int a = 10;
    int b = 3;

    // Nested If-Else Example
    if (a > b) {
        printf("A is greater than B\n");
        if (a - b > 5) {
            printf("The difference is greater than 5\n");
        } else {
            printf("The difference is not greater than 5\n");
        }
    } else if (a == b) {
        printf("A is equal to B\n");
    } else {
        printf("A is not greater than B\n");
    }

    return 0;
}