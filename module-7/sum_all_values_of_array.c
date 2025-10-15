#include <stdio.h>

int main()
{

    int a[5];

    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
    }

    int sum = 0;
    for (int i = 0; i < 5; i++)
    {
        sum += a[i];
    }

    return 0;
}

// sum_all_values_of_array.c