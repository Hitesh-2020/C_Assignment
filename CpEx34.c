//34.	Write a C program to check whether a number is Strong number or not.
#include <stdio.h>

int main(){

  int n ,  sum = 0, temp, dig_fact;

  printf("Enter a number : ");
  scanf("%d", &n);
  temp=n;

  while(temp!=0)
  {   dig_fact = 1;

      for(int i = 2; i <= temp%10; i++)
      {                         //finding factorial of of the digit in iteration
        dig_fact = dig_fact*i;
      }

      sum += dig_fact;

      temp = temp/10;
  }

  if(sum == n)
  {
      printf("%d is a STRONG Number\n", n);
  }
  else
  {
      printf("%d is NOT a STRONG Number\n", n);
  }

  return 0;
}
