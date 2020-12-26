//18.	Write a C program to find frequency of each digit in a given integer.
#include <stdio.h>

int main(){

  int n, temp, count;

  printf("Enter a number : ");
  scanf("%d",&n);

  for(int i = 0; i < 10; i++)
  {
    temp = n;
    count = 0;

    while(temp != 0)
    {

      if(i == temp%10)
      {
        count += 1;
      }
      temp = temp / 10;
    }

    printf("frequency of %d : %d\n",i,count);
  }

  return 0;
}
