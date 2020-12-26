//37.	Write a C program to find one's complement of a binary number. 
#include<stdio.h>
#include<string.h>

int main()
{   char bin[20];
    int i;

    printf("Enter Binary Number : ");
    scanf("%s",bin);

    for(i=0;i<strlen(bin);i++)
    {
          if(*(bin+i)=='1')
                *(bin+i)='0';
          else
                *(bin+i)='1';
    }

    printf("One's Complement = %s",bin);

    return 0;
}
