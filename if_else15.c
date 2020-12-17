//15.	Write a C program to count total number of notes in given amount.
#include<stdio.h>

int main()
{     int amt;

      printf("Enter a Amount (in Rupees only) :");
      scanf("%d", &amt);

      printf("\nTotal Number of Notes for (%d) Rupees:-",amt);

      printf("\n2000 Rupees Notes = %d", amt/2000);
      if(amt>=2000)
                amt=amt-2000*(amt/2000);

      printf("\n500 Rupees Notes = %d", amt/500);
      if(amt>=500)
                amt=amt-500*(amt/500);


      printf("\n200 Rupees Notes = %d", amt/200);
      if(amt>=200)
                amt=amt-200*(amt/200);


      printf("\n100 Rupees Notes = %d", amt/100);
      if(amt>=100)
                amt=amt-100*(amt/100);


      printf("\n50 Rupees Notes = %d", amt/50);
      if(amt>=50)
                amt=amt-50*(amt/50);


      printf("\n20 Rupees Notes = %d", amt/20);
      if(amt>=20)
                amt=amt-20*(amt/20);


      printf("\n10 Rupees Notes = %d", amt/10);
      if(amt>=10)
                amt=amt-10*(amt/10);


      printf("\n5 Rupees Notes = %d", amt/5);
      if(amt>=5)
                amt=amt-5*(amt/5);


      printf("\n2 Rupees Notes = %d", amt/2);
      if(amt>=2)
                amt=amt-2*(amt/2);

      printf("\n1 Rupee Notes = %d", amt);

      return 0;
}
