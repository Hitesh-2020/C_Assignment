//Write a C program to input electricity unit charges and calculate total electricity bill
#include<stdio.h>

int main()
{ int unit;

  printf("Enter the number of Electricity Units : ");
  scanf("%d", &unit);

  if(unit>=0)
  { printf("\nTotal Electricity Bill :-");
    if(unit<=50)
    {   printf("\n\tWithout Surcharge = Rs. %.2f", unit*0.5);
        printf("\n\tWith Add Surcharge of  20%% = Rs. %.2f", 1.2*(unit*0.5) );
    }
    else if(unit<=150)
    {   printf("\n\tWithout Surcharge = Rs. %.2f",(50*0.5) + ((unit-50)*0.75) );
        printf("\n\tWith Additional Surcharge of 20%% = Rs. %.2f", 1.2*((50*0.5) + ((unit-50)*0.75)) );
    }
    else if(unit<=250)
    {   printf("\n\tWithout Surcharge = Rs. %.2f",(50*0.5) + (100*0.75) +((unit-150)*1.2) );
        printf("\n\tWith Additional Surcharge of 20%% = Rs. %.2f", 1.2*((50*0.5) + (100*0.75) +((unit-150)*1.2)) );
    }
    else if(unit>250)
    {   printf("\n\tWithout Surcharge = Rs. %.2f",(50*0.5) + (100*0.75) +(100*1.2) +((unit-250)*1.5) );
        printf("\n\tWith Additional Surcharge of 20%% = Rs. %.2f", 1.2*((50*0.5) + (100*0.75) +(100*1.2) +((unit-250)*1.5)) );
    }
  }
  else
      printf("\nInvalid entry of number of Units");

  return 0;
}
