#include <stdio.h>
int main()
{
    int a,b,smallest;
    printf("Enter two numbers:");
    scanf("%d %d",&a,&b);   
    smallest=(a<b)?a:b;
    printf("Smallest number is %d",smallest);
    return 0;
}
//?a:b is uses ternary operator in C programming language. It is a shorthand for if-else statement. The expression (a<b)?a:b means if a is less than b, then the value of smallest will be a, otherwise it will be b.