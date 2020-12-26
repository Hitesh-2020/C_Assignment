//38.	Write a C program to find two's complement of a binary number.
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

    i=1;

    do
    {     if(*(bin+(strlen(bin)-i))=='0')
                *(bin+(strlen(bin)-i))='1';
          else
                *(bin+(strlen(bin)-i))='0';
    }while(*(bin+(strlen(bin)-(i++)))=='0');


    printf("Two's Complement = %s",bin);

    return 0;
}
