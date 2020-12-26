//2.	Number pattern programs - Write a C program to print the given number patterns
//    c) Number pattern 2

#include <stdio.h>

int main()
{     int n=5;

      for(int i=1;i<=n;i++)
      {
            for(int j=1;j<=n;j++)
            {     if(j%2==0)
                      printf("1");
                  else
                      printf("0");
            }

            printf("\n");
      }

      return 0;
}
