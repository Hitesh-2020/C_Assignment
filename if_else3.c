//3.	Write a C program to check whether a number is negative, positive or zero.

#include <stdio.h>

int main()
{   int n;

    printf("Enter a Number : ");
    scanf("%d",&n);

    if(n<0)
    {    printf("\nEntered Number (%d) is a NEGATIVE Number",n);
    }
    else if(n>0)
    {    printf("\nEntered Number (%d) is a POSITIVE Number",n);
    }
    else
    {    printf("\nEntered Number is Zero");
    }

    return 0;
}
