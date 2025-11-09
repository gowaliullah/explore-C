#include <stdio.h>


void hello() {    // recursive func

    printf("hello\n");
    hello();
}


int main()
{
    
    printf("Hi...\n");

    hello();

    return 0;
}