//7.	Write a C program to find sum of all even numbers between 1 to n.
#include<stdio.h>

int main()
{     int i,n,sum=0;

      printf("Enter n for sum of EVEN numbers (1 to n) : ");
      scanf("%d",&n);

      for(i=2;i<=n;i++)
      {     if(i%2==0)
                  sum+=i;
      }

      printf("\nSum of all EVEN Natural Numbers upto (%d) = %d",n,sum);

      return 0;
}
