//10.	Write a C program to check whether a character is uppercase or lowercase alphabet.
#include <stdio.h>

int main()
{   char c;


   printf("Enter a Character : ");
   scanf("%c",&c);

   if((c>='a'&&c<='z')||(c>='A'&&c<='Z'))
        if(c>='A' && c<='Z')
            printf("\nEntered Character (%c) is UPPERCASE",c);
        else
            printf("\nEntered Character (%c) is LOWERCASE",c);
   else
        printf("\nEntered Character (%c) is NOT an Alphabet",c);
    return 0;
}
