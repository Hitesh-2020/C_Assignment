//14.	Write a C program to calculate sum of digits of a number.
#include <stdio.h>

int main()
{

  int n, n1, sum;

  printf("Enter a number for sum of its digits : ");
  scanf("%d",&n);

  n1=n;

  while(n != 0)
  {
    sum += n%10;
    n = n / 10;
  }

  printf("Sum of digits of (%d) = %d\n", n1, sum);

  return 0;
}
