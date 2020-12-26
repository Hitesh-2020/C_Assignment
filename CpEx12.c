//12.	Write a C program to find sum of first and last digit of a number.
#include <stdio.h>

// getting the sum of first and last digit of a number
int main(){

  int n;
  int lst, fst;

  printf("Enter a number for sum of first & last digits : ");
  scanf("%d",&n);

  lst = n%10;
  fst = n;

  while(fst >= 10)
  {
    fst = fst / 10;
  }

  printf("Sum of (%d) and (%d) = %d \n",fst, lst, fst+lst);

  return 0;
}
