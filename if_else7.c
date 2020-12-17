//7.	Write a C program to check whether a character is alphabet or not.
#include <stdio.h>

int main()
{   char c;


   printf("Enter a Character : ");
   scanf("%c", &c);


   if((c>='a'&&c<='z')||(c>='A'&&c<='Z'))
       printf("\nEntered Character (%c) is an ALPHABET",c);
   else
       printf("\nEntered Character (%c) is NOT an ALPHABET",c);

    return 0;
}
