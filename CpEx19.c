//19.	Write a C program to enter a number and print it in words.
#include <stdio.h>

int main(){

  int n, temp = 0, rev = 0;

  printf("Enter a number : ");
  scanf("%d",&n);

  while(n != 0){      // reversing the number
    rev += n%10;
    rev = rev*10;
    n = n/10;
  }
  rev = rev / 10;

  while(rev != 0)
  {
    temp = rev % 10;
    switch(temp)
    {
      case 0: printf("zero ");
              break;
      case 1: printf("one ");
              break;
      case 2: printf("two ");
              break;
      case 3: printf("three ");
              break;
      case 4: printf("four ");
              break;
      case 5: printf("five ");
              break;
      case 6: printf("six ");
              break;
      case 7: printf("seven ");
              break;
      case 8: printf("eight ");
              break;
      case 9: printf("nine ");
              break;
    }

    rev = rev / 10;
  }

  return 0;
}
