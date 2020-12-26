//21.	Write a C program to find power of a number using for loop.
#include <stdio.h>

int main()
{

  int n , result=1 , pow ;
  printf("Enter a number and then its power :-\n");
  scanf("%d %d",&n,&pow);

  for(int i = 0 ; i < pow; i++)
  {
    result = result*n;
  }

  printf("\n\nPower (%d) of number (%d) = %d\n", pow,n,result);

  return 0;
}
