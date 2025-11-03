#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    
    int str = 1;
    int spc = n - 1;

    for (int i = 1; i <= n; i++) // for printing line
    {
        
        for (int j = 1; j <= spc; j++)  // for printing space
        {
            printf(" ");
        }
        
    
       for (int k = 0; k < str; k++) // for printint star
       {
        printf("*");
       }
       str += 2;

       printf("\n"); 
       spc--;
    }

    return 0;
}