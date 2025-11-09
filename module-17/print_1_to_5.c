#include <stdio.h>

void hello(int i)
{
    printf("%d\n", i);

    if (i != 5)
    {
        hello(i + 1);
    }
}

void hello2(int i)
{

    if (i != 5)
    {
        printf("%d\n", i);
        hello(i + 1);
    }
}

void hello3(int i)
{

    if (i == 5)
    {
        return;
    }

    printf("%d\n", i);

    // call the func 
    hello(i + 1);
}

int main()
{
    int i = 1;
    hello(i);

    printf("\n");
    hello2(1);

    printf("\n");
    hello3(i);

    return 0;
}