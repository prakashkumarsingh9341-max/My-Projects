#include <stdio.h>
int main()
{
    float a,b,c, average;
    printf("Enter a,b and c:");
    scanf("%f %f %f", &a, &b, &c);
     average=(a+b+c)/3.0;

    printf("Average of 3 numbers is %.02f", average);
    return 0;
}