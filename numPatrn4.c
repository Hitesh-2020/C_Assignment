//2.	Number pattern programs - Write a C program to print the given number patterns
//    d) Number pattern 3

#include <stdio.h>

int main()
{     int n=5;

      for(int i=1;i<=n;i++)
      {
            for(int j=1;j<=n;j++)
            {     if(i==1 || j==1 || j==n || i==5)
                      printf("1");
                  else
                      printf("0");
            }

            printf("\n");
      }

      return 0;
}
