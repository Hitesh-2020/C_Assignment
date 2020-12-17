//11.	Write a C program to input week number and print week day.
#include<stdio.h>

int main()
{     int week_no;

      printf("Enter a Week Number (1-7) : ");
      scanf("%d", &week_no);

      if(week_no>=1 && week_no<=7)
      {
          if(week_no==1)
                printf("\nCorresponding Week Day is MONDAY");

          else if(week_no==2)
                printf("\nCorresponding Week Day is TUESDAY");

          else if(week_no==3)
                printf("\nCorresponding Week Day is WEDNESDAY");

          else if(week_no==4)
                printf("\nCorresponding Week Day is THURSDAY");

          else if(week_no==5)
                printf("\nCorresponding Week Day is FRIDAY");

          else if(week_no==6)
                printf("\nCorresponding Week Day is SATURDAY");

          else if(week_no==7) 
                printf("\nCorresponding Week Day is SUNDAY");
      }
      else
          printf("\nEntered week number (%d) is not valid",week_no);

      return 0;
}
