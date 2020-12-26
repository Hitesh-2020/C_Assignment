//31.	Write a C program to print all Armstrong numbers between 1 to n.
#include <stdio.h>
#include <math.h>

int main()
{

  int n = 10000;

  printf("Enter a number for range of Armstrong No.s : ");
  scanf("%d",&n);

  printf("\n\nList of Armstrong Numbers :-\n");

  for(int i = 1; i <= n; i++)
  {
    int temp = i, sum = 0,exp=0;
    while(temp != 0)
    {
        temp/=10;
        exp++;
    }               // exp stores no. of digits

    temp=i;

    while(temp != 0)
    {
      sum += pow((temp%10), exp);
      temp = temp / 10;
    }

    if(sum == i)
      printf("%d  ",i);
  }

  return 0;
}
