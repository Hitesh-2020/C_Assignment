//2.	Number pattern programs - Write a C program to print the given number patterns
//    f) Number pattern 5

#include <stdio.h>

int main()
{     int n=5;

      for(int i=0;i<n;i++)
      {
            for(int j=0;j<n;j++)
            {     if((i%2==0 && j%2==0) || i==j || i+j==n-1)
                      printf("1");
                  else
                      printf("0");
            }

            printf("\n");
      }

      return 0;
}
