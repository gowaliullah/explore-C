#include <stdio.h>


int main () {
    int a = 10;
    int b = 3;

    // Equal to
    int isEqual = (a == b);
    printf("Is Equal: %d\n", isEqual);

    // Not equal to
    int isNotEqual = (a != b);
    printf("Is Not Equal: %d\n", isNotEqual);

    // Greater than
    int isGreater = (a > b);
    printf("Is Greater: %d\n", isGreater);

    // Less than
    int isLess = (a < b);
    printf("Is Less: %d\n", isLess);

    // Greater than or equal to
    int isGreaterOrEqual = (a >= b);
    printf("Is Greater or Equal: %d\n", isGreaterOrEqual);

    // Less than or equal to
    int isLessOrEqual = (a <= b);
    printf("Is Less or Equal: %d\n", isLessOrEqual);

    return 0;
}