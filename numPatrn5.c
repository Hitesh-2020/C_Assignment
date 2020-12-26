//2.	Number pattern programs - Write a C program to print the given number patterns
//    e) Number pattern 4

#include <stdio.h>

int main()
{     int n=5;

      for(int i=0;i<n;i++)
      {
            for(int j=0;j<n;j++)
            {     if(i==n/2 && j==n/2)
                      printf("0");
                  else
                      printf("1");
            }

            printf("\n");
      }

      return 0;
}
