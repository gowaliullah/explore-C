#include <stdio.h>
#include <string.h>

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

    // build in func

    int sz = strlen(s);
    printf("%d", sz);

    return 0;
}