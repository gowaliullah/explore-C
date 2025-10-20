#include <stdio.h>

int main()
{
    
    
    char s[101];

    scanf("%s", s);


    int cnt = 0;

    for (int i = 0; s[i] != '\0'; i++)
    {
       cnt++;
    }
    
 printf("%d", cnt);

    return 0;
}