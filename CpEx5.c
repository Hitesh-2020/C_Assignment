//5.	Write a C program to print all odd number between 1 to 100.
#include<stdio.h>

int main()
{     int i;

      printf("All ODD Numbers between 1 to 100\n");

      for(i=1;i<=100;i++)
      {
            if(i%2!=0)
                  printf("%d ",i);
      }

      return 0;
}
