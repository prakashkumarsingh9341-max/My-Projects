#include <stdio.h>
int main()
{
    int side;
    int area;

    printf("Enter the lenght of the side of the square:");
    scanf("%d", &side);

    area= side*side;

    printf("The area of the square is=%d", area);
    return 0;
}