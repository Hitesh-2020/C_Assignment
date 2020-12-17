//9.	Write a C program to input any character and check whether it is alphabet, digit or special character.
#include <stdio.h>

int main()
{   char c;

   printf("Enter a Character : ");
   scanf("%c", &c);

      if( (c>='a'&&c<='z') || (c>='A'&&c<='Z') )
            printf("\nEntered Character (%c) is an ALPHABET",c);
      else if(c>='0' && c<='9')
            printf("\nEntered Character (%c) is a DIGIT",c);
      else
            printf("\nEntered Character (%c) is a SPECIAL CHARACTER",c);

    return 0;
}
