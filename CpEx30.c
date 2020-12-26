//30.	Write a C program to check whether a number is Armstrong number or not.
#include <stdio.h>
#include <math.h>

int main(){

  int n, sum = 0, orig_n = n, exp=0;

  printf("Enter a number : ");
  scanf("%d",&n);
  orig_n=n;
  
  while(n != 0)
  {
      n/=10;
      exp++;
  }

  n=orig_n;

  while(n != 0)
  {
    sum += pow((n%10), exp);
    n = n / 10;
  }

  if(sum == orig_n){
    printf("number (%d) is an armstrong number\n",orig_n);
  }else{
    printf("number (%d) not an armstrong number\n",orig_n);
  }

  return 0;
}
