//15.	Write a C program to calculate product of digits of a number.
#include <stdio.h>

int main(){

  int n, n1, product = 1, temp;

  printf("Enter a no for product of its digits : ");
  scanf("%d",&n);

  n1=n;

  while(n != 0)
  {
    temp = n%10;
    product = product * temp;
    n = n / 10;
  }

  printf("\nProduct of digits of (%d) = %d\n", n1,product);
  return 0;
}
