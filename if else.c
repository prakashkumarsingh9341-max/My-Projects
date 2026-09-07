#include <stdio.h>

int main()
{
    int a=3, b=4, c=5;

    if (a>b && a>c)
    { 
        printf("a is bigger");
    }

    else if (b>a && b>c)
    {
       printf("b is bigger");
    }
    else
    {
        printf("c is bigger");
    }
    
    return 0;
}
