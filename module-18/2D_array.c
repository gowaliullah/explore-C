#include <stdio.h>

int main()
{

    int c, r;
    scanf("%d %d", &c, &r);

    int arr[c][r];
    for (int i = 0; i < c; i++)
    {
        for (int j = 0; j < r; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    for (int i = 0; i < c; i++)
    {
        for (int j = 0; j < r; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}