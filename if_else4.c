//4.	Write a C program to check whether a number is divisible by 5 and 11 or not.
#include <stdio.h>

int main()
{   int n;

    printf("Enter a Number : ");
    scanf("%d", &n);

    if(n%5==0 && n%11==0 )
    {     printf("\nEntered Number (%d) is divisible by 5 and 11 both",n);
    }
    else if(n%5==0)
    {     printf("\nnEntered Number (%d) is divisible by 5 only",n);
    }
    else if(n%11==0)
    {     printf("\nnEntered Number (%d) is divisible by 11 only",n);
    }
    else
    {     printf("\nEntered Number (%d) is not divisible by either 5 or 11",n);
    }


    return 0;
}
