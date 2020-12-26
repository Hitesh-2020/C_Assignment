//35.	Write a C program to print all Strong numbers between 1 to n.
#include <stdio.h>

int main(){

  int n , sum, temp, dig_fact;

  printf("Enter a number for range of Strong Numbers : ");
  scanf("%d", &n);

  printf("\nList of Strong Numbers upto (%d) :-\n\n",n);

  for(int i = 1; i <= n; i++)
  {
    temp = i, sum = 0;

    while(temp!=0)      //to check if (i) is a strong no. or not
    {   dig_fact = 1;

        for(int i = 2; i <= temp%10; i++)
        {                         //finding factorial of of the digit in iteration
          dig_fact = dig_fact*i;
        }

        sum += dig_fact;

        temp = temp/10;
    }

    if(sum == i)
        printf("%d  ",i);
  }

  printf("\n");

  return 0;
}
