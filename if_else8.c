//8.	Write a C program to input any alphabet and check whether it is vowel or consonant.
#include <stdio.h>

int main()
{   char c;


   printf("Enter a Character : ");
   scanf("%c",&c);


   if((c>='a'&&c<='z')||(c>='A'&&c<='Z'))
        if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||c=='A'||c=='E'||c=='I'||c=='O'||c=='U')
            printf("\nEntered Character (%c) is a VOWEL",c);
        else
            printf("\nEntered Character (%c) is a CONSONANT",c);
   else
        printf("\nEntered Character (%c) is NOT an Alphabet",c);
    return 0;
}
