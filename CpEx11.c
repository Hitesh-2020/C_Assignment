//11.	Write a C program to find first and last digit of a number.
#include <stdio.h>

int main()
{


  char k[20];
  int flag = 1, ctr = 0;

  printf("Enter a Number of 1st & last digits be printed : ");
  scanf("%s",k);

  while(flag == 1)
  {
    if(k[ctr] != '\0')
    {
      ctr += 1;
    }
    else{
      flag = 0;
    }
  }

  printf("\nfirst digit of (%s) is %c and last digit of (%s) is %c\n", k,k[0], k,k[ctr-1]);

  return 0;
}
