//6.	Write a C program to find sum of all natural numbers between 1 to n.
#include<stdio.h>

int main()
{     int i,n,sum=0;

      printf("Enter n for sum of natural numbers (1 to n) : ");
      scanf("%d",&n);

      for(i=1;i<=n;i++)
      {
            sum+=i;
      }

      printf("\nSum of all Natural Numbers upto (%d) = %d",n,sum);

      return 0;
}
