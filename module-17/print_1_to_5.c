#include <stdio.h>

void hello(int i)
{
    printf("%d\n", i);

    if (i != 6)
    {
        hello(i + 1);
    }
}

void hello2(int i)
{

    if (i != 6)
    {
        printf("%d\n", i);
        hello(i + 1);
    }
}

void hello3(int i)
{

    if (i == 6)
    {
        return;
    }

    printf("%d\n", i);
    hello(i + 1);
}

int main()
{
    int i = 1;
    hello(i);

    printf("\n");
    hello2(i);

    printf("\n");
    hello3(i);

    return 0;
}