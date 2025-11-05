#include <stdio.h>

int main()
{
     int a[5] = {12, 20, 30};

    // printf("First element of arr: %p\n", &a[0]);
    // printf("Address arr and 1st: %p\n", a);

    *a = 37;
    *(a + 1) = 77;

    printf("%d ", *a);
    printf("%d", *(a + 1));


    return 0;
}
