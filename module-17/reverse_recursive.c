#include <stdio.h>

void h(int i)
{

    if (i == 6)
    {
        return;
    }

    h(i + 1);
    printf("%d\n", i);
}

int main()
{
    h(1);
    return 0;
}