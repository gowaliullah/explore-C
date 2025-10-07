#include <stdio.h>


int main()
{

    // continue statement
    for (int i = 0; i < 30; i++) {
        if ( (i % 5) == 0) {
            continue;
        }
        printf("%d\n", i);
    }

    // break statement
    for (int i = 0; i < 30; i++) {
        if ( (i / 5) == 3) {
            break;
        }
        printf("%d\n", i);
    }

    return 0;
}