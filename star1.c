 //1.	Star pattern programs - Write a C program to print the given star patterns.
//  a) Pyramid Star Pattern

#include <stdio.h>
int main()
{
   int n=5;

   for(int i=1;i<=n;i++)
   {    for(int k=n-i;k>0;k--)
        {    printf(" ");
        }
        for(int j=1;j<=i;j++)
        {    if(j>=(i/2) && j!=1)
                  printf("**");
              else
                  printf("*");
        }
        printf("\n");
   }

   return 0;
}
