//1.	Star pattern programs - Write a C program to print the given star patterns.
//  c) Inverted Pyramid Star Pattern

#include <stdio.h>
int main()
{
   int n=5;

   for(int i=n;i>0;i--)
   {    for(int k=i;k<n;k++)
        {    printf(" ");

        }
        for(int j=i;j>0;j--)
        {     if(j>=(i/2) && j!=1)
                  printf("**");
              else
                  printf("*");
        }
        printf("\n");
   }

   return 0;
}
