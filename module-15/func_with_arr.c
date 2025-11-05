#include <stdio.h>

// varible pass by value
// array pass by reg

void fun(int hh[]) {
    hh[1] = 8;
}


int main()
{
    int x[5] = {10, 20, 30};

    fun(x);

    for (int i = 0; i < 5; i++)
    {
        printf("%d\n", x[i]);
    }

    return 0;
}