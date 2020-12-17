//5.	Write a C program to check whether a number is even or odd.
#include <stdio.h>

int main()
{   int n;


    printf("Enter A No: ");
    scanf("%d",&n);

    if(n%2==0)
        printf("\nNo entered is EVEN");
    else
        printf("\nNo entered is ODD");

    return 0;
}
