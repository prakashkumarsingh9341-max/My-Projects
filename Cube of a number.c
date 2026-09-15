#include <stdio.h>
int main()
{
    int n;
    int cube;
    printf("Enter a number to find its cube:\n");
    scanf("%d", &n);
    cube=n*n*n;
    printf("The cube of the number is =%d", cube);
    return 0;
}