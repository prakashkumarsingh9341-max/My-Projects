#include <stdio.h>
int main()
{
    int marks;
    printf("Enter your marks(0-100):");
    scanf("%d", &marks);

    if(marks>30&& marks<=45)
    {
        printf("C");
    }
    else if (marks>=45 && marks<=70)
    {
        printf("B");
    }
    else if(marks>70 && marks<=90)
    {
        printf("A");
    }
    else if(marks>90 && marks<=100)
    {
        printf("A++");
    }
    else
    {
        printf("Invalid marks. Please enter marks between 0 and 100.");
    }
    return 0;
}