//1.	Write a C program to print all natural numbers from 1 to n.
#include<stdio.h>

int main()
{     int n;

      printf("Enter n upto which Natural Numbers to be printed : ");
      scanf("%d",&n);

      printf("\n\nNatural Numbers upto (%d) :-\n",n);
      for(int i=1;i<=n;i++)
      {
            printf("%d  ",i);
      }

      return 0;
}
