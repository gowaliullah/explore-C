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
    
    int x;
    scanf("%d", &x);

    int flag = 0; 

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if( a[i] + a[j] == x ) {   
               flag = 1;
                break;
            }
        }
        
    }

    if (flag)
    {
         printf("YES");
    } else {
         printf("NO");
    }

    return 0;
}