#include <stdio.h>

int main()
{
     // at least 1 ghor base nite hobe
    char s[50];
    gets(s); 
    fgets(s, 20, stdin); // count null and space

    scanf("%d", s[5]);



    // with initialize
    char s2[6] = {"H", "E", "L", "L", "O", "\n"};
    printf("%d", s2);    
    
    // super power
    char s3[20] = "Hello World";
    printf("%d", s3); 

    return 0;
}