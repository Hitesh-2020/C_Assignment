// 1. Write a C program to find maximum between two numbers

#include <stdio.h>

int main()
{
    int a,b;

    printf("Enter 2 Numbers :\n");
    scanf("%d %d",&a,&b);

    if(a>b)
        printf("Greatest No : %d",a);
    else
        printf("Greatest No : %d",b);

    return 0;
}
