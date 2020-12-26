//Write a C program to print all natural numbers in reverse (from n to 1).
#include<stdio.h>

int main()
{     int n;

      printf("Enter n for printing Natural Numbers in reverse : ");
      scanf("%d",&n);

      printf("\n\nNatural Numbers from %d to 1 :-\n",n);
      for(int i=n;i>0;i--)
      {
            printf("%d  ",i);
      }

      return 0;
}
