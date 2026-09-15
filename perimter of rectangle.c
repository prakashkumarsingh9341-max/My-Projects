#include <stdio.h>
int main()
{
    int length;
    int breadth;
    int perimeter;
    printf("Enter length :\n");
    scanf("%d", &length);

    printf("Enter breadth :\n");
    scanf("%d", &breadth);
    perimeter=2*(length+breadth);
    printf("The perimeter of the rectangle is=%d", perimeter);
    return 0;
} 