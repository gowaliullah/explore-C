#include <stdio.h>
#include <string.h>

int main()
{    
    char a[101], b[101];
    scanf("%s %s", &a, &b);

    // with build-in 
    strcat(a, b);

        // manually copy 
    for (int i = 0; i <= strlen(b); i++)
    {
       a[strlen(a) + i] = b[i];
    }
    
    printf("%s %s", a, b);

    return 0;
}