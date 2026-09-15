#include <stdio.h>
int main()
{
    int radius;
    int area;
    float pi=3.14;

    printf("Enter radius of the cicle:");
    scanf("%d", &radius);

    printf("The area of the cicle is=%f", pi*radius*radius);
    return 0;

}