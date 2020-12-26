//26.	Write a C program to check whether a number is Prime number or not.
#include <stdio.h>

int main()
{

  int n , check = 0;

  printf("Enter a number : ");
  scanf("%d",&n);

  for(int i = 2; i < n; i++)
  {

    if(n%i == 0)
    {
      check = 1;
      break;
    }
  }

  if(check == 0 && n!=0 && n!=1)
  {
    printf("\n%d is prime\n", n);
  }
  else
  {
    printf("\n%d is not a prime\n", n);
  }


  return 0;
}
