#include <stdio.h>


int main () {
    int a = 10;
    int b = 3;

    // Logical AND
    int andResult = (a > 5 && b < 5);
    printf("Logical AND: %d\n", andResult);

    // Logical OR
    int orResult = (a > 5 || b < 5);
    printf("Logical OR: %d\n", orResult);

    // Logical NOT
    int notResult = !(a > 5);
    printf("Logical NOT: %d\n", notResult);

    return 0;
}