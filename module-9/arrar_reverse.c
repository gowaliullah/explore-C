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

    int first = 0;
    int last = n - 1;

    while (first < last)
    {

        int temp = a[first];
        a[first] = a[last];
        a[last] = temp;

        first++;
        last--;
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}