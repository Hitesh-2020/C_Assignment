//12.	Write a C program to input month number and print number of days in that month.
#include<stdio.h>

int main()
{     int month_no;

      printf("Enter a Month Number (1-12) : ");
      scanf("%d", &month_no);

      if(month_no>=1 && month_no<=12)
      {
          if(month_no==1)
                printf("\nJANUARY has 31 days");
          else if(month_no==2)
                printf("\nFEBRUARY has 28 days (29 days in case of leap year)");
          else if(month_no==3)
                printf("\nMARCH has 31 days");
          else if(month_no==4)
                printf("\nAPRIL has 30 days");
          else if(month_no==5)
                printf("\nMAY has 31 days");
          else if(month_no==6)
                printf("\nJUNE has 30 days");
          else if(month_no==7)
                printf("\nJULY has 31 days");
          else if(month_no==8)
                printf("\nAUGUST has 31 days");
          else if(month_no==9)
                printf("\nSEPTEMBER has 30 days");
          else if(month_no==10)
                printf("\nOCTOBER has 31 days");
          else if(month_no==11)
                printf("\nNOVEMBER has 30 days");
          else if(month_no==12)
                printf("\nDECEMBER has 31 days");
      }
      else
              printf("\nEntered month number (%d) is not valid",month_no);

      return 0;
}
