#include <stdio.h>

int main()
{
    

    // val --> add = ref
    // add --> val = deref

    int x = 10;
    printf("%d\n", x);
    printf("%p\n", &x);

    
    int* ptr;
    ptr = &x;
    *ptr = 99;


    printf("%d\n", *ptr);

    return 0;
}