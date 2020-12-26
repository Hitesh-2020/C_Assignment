//10.	Write a C program to count number of digits in a number.
#include <stdio.h>

int main(){

  char k[20];
  int flag = 1, ctr = 0;

  printf("Enter a number of which digits need to be counted : ");
  scanf("%s",k);

  while(flag == 1)
  {
    if(k[ctr] != '\0')
    {
      ctr += 1;
    }
    else
    {
      flag = 0;
    }
  }

  printf("%d\n", ctr);

  return 0;
}
