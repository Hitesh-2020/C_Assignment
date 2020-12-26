//23.	Write a C program to calculate factorial of a number.
#include <stdio.h>

int main()
{

  int n , temp = 1;

  printf("Enter a number : ");
  scanf("%d",&n);

  for(int i = 2; i <= n; i++)
  {
    temp = temp * i;
  }

  printf("\nFactorial of (%d) = %d", n,temp);

  return 0;
}
