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

    if (r == 1)
    {
        printf("This is row matrix");
    }
    else
    {
        printf("This is not row matrix");
    }

    return 0;
}