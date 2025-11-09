#include <stdio.h>


// func_string_arr


void fun(char s[], int n) {
    printf("%s\n", s);
}


int main()
{
    char s[10];
    scanf("%s", &s);
    printf("%s\n", s);
    fun(s, 10);

    return 0;
}