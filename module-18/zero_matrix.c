#include <stdio.h>

int main()
{

    int c, r;
    scanf("%d %d", &r, &c);

    int arr[c][r];
    for (int i = 0; i < c; i++)
    {
        for (int j = 0; j < r; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    int total_val = r * c;
    int zero = 0;

    for (int i = 0; i < c; i++)
    {
        for (int j = 0; j < r; j++)
        {
            if (arr[i][j] == 0)
            {
                zero++;
            }
        }
    }

    if (total_val == zero)
    {
        printf("This is ZERO matrix");
    }
    else
    {
        printf("This is not ZERO matrix");
    }

    return 0;
}