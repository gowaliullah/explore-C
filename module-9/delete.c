#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    int inx;
    scanf("%d", &inx);

    for (int i = 0; i < n; i++)
    {

        if (i >= inx )
        {
            if (i != n-1)
            {
                a[i] = a[i + 1];
            }
            
        }
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    

    return 0;
}