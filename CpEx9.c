//9.	Write a C program to print multiplication table of any number.
#include <stdio.h>

int main(){

  int n;

  printf("Enter n for table calculation : ");
  scanf("%d",&n);

  printf("\nMultiplication Table of %d\n\n", n);

  for(int i = 1; i <= 10; i++)
  {
      printf("%d\n", i*n);
  }

  return  0;
}
