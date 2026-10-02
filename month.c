#include <stdio.h>

int main()
{
    int days, month;

    printf("Enter days");
    scanf("%d", &days);

  month = (days % 360) / 30;
  days = (days % 360) % 30;

    printf("month%d, days%d", month, days);
   
    return 0;
}