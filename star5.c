//1.	Star pattern programs - Write a C program to print the given star patterns.
//  e) Half Diamond Star Pattern

#include <stdio.h>
int main()
{
   int n=5;

   for(int i=1;i<=n;i++)
   {
        for(int j=1;j<=i;j++)
        {    printf("*");
        }
        printf("\n");
   }

   for(int i=n-1;i>0;i--)
   {
        for(int j=i;j>0;j--)
        {    printf("*");

        }
        printf("\n");

   }



   return 0;
}
