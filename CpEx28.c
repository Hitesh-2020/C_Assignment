//28.	Write a C program to find sum of all prime numbers between 1 to n.
#include <stdio.h>

int main(){

  int n , test, sum=0;

  printf("Enter a number for range to sum prime no.s : ");
  scanf("%d",&n);

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
          sum+=j;
      }
  }

  printf("\n\nSum of prime numbers upto (%d) = %d\n", n,sum);

  return 0;
}
