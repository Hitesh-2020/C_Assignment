//16.	Write a C program to enter a number and print its reverse.
#include <stdio.h>

int main()
{

  int n , n1 , rev = 0;

  printf("Enter a no for reversal : ");
  scanf("%d",&n);
  n1=n;

  while(n != 0)
  {
    rev += n%10;
    rev = rev*10;
    n = n/10;
  }

  printf("\nReverse of (%d) = %d\n", n1, rev/10);
  return 0;
}
