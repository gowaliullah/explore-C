#include <stdio.h>


void h(int i) {
    if (i > 0)      
    {
        printf("%d\n", i);
        h(i - 1);
    }
}


int main()
{
    
    int n;
    scanf("%d", &n);

    h(n);


    return 0;
}