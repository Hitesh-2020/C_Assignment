//1.	Star pattern programs - Write a C program to print the given star patterns.
//  d) Hollow Inverted Pyramid Star Pattern

#include <stdio.h>
int main()
{
   int n=5;

   for(int i=n;i>0;i--)
   {    for(int k=i;k<n;k++)
        {    printf(" ");

        }
        for(int j=i;j>0;j--)
        {     if(i==n)
             {   if(j!=1)
                    printf("**");
                  else
                    printf("*");
            }
            else if(j==1 || j==i)
                 printf("* ");
            else
                 printf("  ");
        }
        printf("\n");
   }

   return 0;
}
