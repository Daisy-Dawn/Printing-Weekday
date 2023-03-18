#include <stdio.h>
#include <stdlib.h>

int main(void) 
{
  int wkday;
  
  printf("Welcome, Please enter a week number:\t");
  scanf("%d", &wkday);
  system("clear");

  if (wkday == 1)
    printf("Todays is Sunday\n");

  else if (wkday == 2)
    printf("Todays is Monday\n");

  else if (wkday == 3)
    printf("Todays is Tuesday\n");

  else if (wkday == 4)
    printf("Todays is Wednesday\n");

  else if (wkday == 5)
    printf("Todays is Thursaday\n");

  else if (wkday == 6)
    printf("Todays is Friday\n");

  else if (wkday == 7)
    printf("Todays is Saturday\n");

  else 
    printf("Invalid input\n");

printf("\nEnd of Program\n\n");
  sleep(5);
  system("clear");
  printf("Welcome User,\n");
  
  return 0;
}