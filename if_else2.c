// 2. Write a C program to find maximum between three numbers

#include <stdio.h>

int main()
{
    int a,b,c;

    printf("Enter 3 Numbers :\n");
    scanf("%d %d %d",&a,&b,&c);

    if(a>=b && a>=c)
        printf("Greatest No : %d",a);
    else if(b>=a && b>=c)
        printf("Greatest No : %d",b);
    else if(c>=a && c>=b)
        printf("Greatest No : %d",c);

    return 0;
}
