#include <stdio.h>

int main()
{
    int days, year, month;

    printf("Enter days");
    scanf("%d", &days);

   year = days / 360;
  month = (days % 360) / 30;
  days = (days % 360) % 30;

    printf("year%d, month%d, days%d", year, month, days);
   
    return 0;
}