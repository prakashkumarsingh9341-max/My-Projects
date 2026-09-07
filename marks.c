#include <stdio.h>
int main()
{int a,b,c,d,e,f;
    float perc;
    printf("enter a\n");
    scanf("%d",&a);
     printf("enter b\n");
    scanf("%d",&b);
     printf("enter c\n");
    scanf("%d",&c);
     printf("enter d\n");
    scanf("%d",&d);
     printf("enter e\n");
    scanf("%d",&e);

    if (a>45 && b>45 && c>45 && d>45 && e>45)
    {
       f=a+b+c+d+e; 
       perc=(f/500.0f)*100;
    
        if (perc>75)
        {
            printf("Result: Distinction\n");
        }
        else if (perc>65 && perc<=75)
        {
            printf("Result:First Class\n");
        }
        else if (perc>=55 && perc<=65)
        {
            printf("Result:Second Class\n");
        }
        else if (perc>=45 && perc<=55)
        {
            printf("Result: Third Class\n");
        }
    }   
    else 
       {
        printf("Fail\n");
       }

return 0;


}