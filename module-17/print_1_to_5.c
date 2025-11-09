#include <stdio.h>

void hello(int i)
{
    printf("%d\n", i);

    if (i != 6)
    {
        hello(i + 1);
    }
}

int main()
{
    int i = 1;
    hello(i);

    return 0;
}