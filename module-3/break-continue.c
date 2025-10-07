#include <stdio.h>


int main()
{
    for (int i = 0; i < 30; i++) {
        if ( (i % 5) == 0) {
            continue;
        }
        printf("%d\n", i);  
    }
    return 0;
}