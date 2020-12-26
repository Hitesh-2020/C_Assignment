//17.	Write a C program to check whether a number is palindrome or not.
#include <stdio.h>

int main()
{

  int n , rev = 0, orig_copy;

  printf("Enter a number : ");
  scanf("%d",&n);
  orig_copy=n;

  while(n != 0)
  {
    rev += n%10;
    rev = rev*10;
    n = n/10;
  }
  rev = rev / 10;


  if(rev == orig_copy)
  {
    printf("number (%d) is a palindrome\n",orig_copy);
  }
  else
  {
    printf("number (%d) is not a palindrome\n",orig_copy);
  }

  return 0;
}
