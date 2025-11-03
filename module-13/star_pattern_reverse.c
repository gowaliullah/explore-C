#include <stdio.h>

int main()
{
    
    int n;
    scanf("%d", &n);

    int str = 1;
    int spc = n - 1;
    

    for (int i = 1; i <= n; i++)
    {

        for (int k = 1; k <= spc; k++)
        {
            printf(" ");
        }
        

        for (int j = 1; j <= str; j++)
        {
            printf("*");
        }
        
        printf("\n");
        str++;
        spc--;
    }

    return 0;
}