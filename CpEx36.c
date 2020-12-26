//36.	Write a C program to print Fibonacci series up to n terms. 
#include <stdio.h>
int main()
{
   int t,r0=0,r1=1,n,i=2;

   printf("FIBONACCI SERIES\nEnter a No. of terms : ");
   scanf("%d",&n);

   printf("\nOUTPUT:\n0 1 ");


   while(i<n)
   {
       t=r0+r1;
       printf("%d ",t);
       r0=r1;
       r1=t;

       i++;
   }

   return 0;
}
