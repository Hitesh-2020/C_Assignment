//20.	Write a C program to calculate profit or loss.
#include<stdio.h>

int main()
{     float cp,sp;

      printf("Enter Cost Price (in Rupees) : ");
      scanf("%f",&cp);

      printf("Enter Selling Price (in Rupees) : ");
      scanf("%f",&sp);

      if(cp>sp)
            printf("\nLOSS = %f Rupees",cp-sp);
      else if(sp>cp)
            printf("\nPROFIT = %f Rupees",sp-cp);
      else
            printf("\nThere is NO Profit NO Loss");

      return 0;
}
