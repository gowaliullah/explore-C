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

    int flag = 1;

    if (r == 3)
    {
        for (int i = 0; i < c; i++)
        {
            for (int j = 0; j < r; j++)
            {
                if (i + j == r - 1)
                {
                }
                else
                {
                    if (arr[i][j] != 0)
                    {
                        flag = 0;
                        printf("This is NOT a primary diagnal matrix");
                    }
                }
            }
        }

        if (flag)
        {
            printf("This is a primary diagnal matrix");
        }
    }
    else
    {
        printf("This is NOT a primary diagnal matrix");
    }

    return 0;
}