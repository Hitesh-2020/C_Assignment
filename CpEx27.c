//27.	Write a C program to print all Prime numbers between 1 to n.
#include <stdio.h>

int main(){

  int n , test;

  printf("Enter a number for range to print prime no.s : ");
  scanf("%d",&n);


  printf("\n\nPrime numbers upto (%d)\n\n",n);

  for(int j = 2; j <= n; j++)
  {
      test = 0;

      for(int i = 2; i < j; i++)
      {
          if(j%i == 0)
          {
            test = 1;
            break;
          }
      }
      if(test == 0)
      {
          printf("%d  ", j);
      }
  }

  return 0;
}
