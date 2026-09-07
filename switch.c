#include <stdio.h>

int main()
{
    int age, marks;
    printf("Enter your age\n ");
    scanf("%d", &age);

    printf("Enter your marks\n ");
    scanf("%d", &marks);



    switch (age)
    {
        case 3:
            printf("The age is 3\n");
            switch (marks)
            {
                case 50:
                    printf("your marks are 50");
                    break;

                default:
                    printf("your marks are not 50");
                    break;
            }
            break;

        case 14:
            printf("The age is 14");
            break;

        case 18:   
            printf("The age is 18");
            break;

        default:
            printf("The age is not 3, 14, or 18");
            break;
    }

    return 0;
}