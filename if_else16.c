//16.	Write a C program to input angles of a triangle and check whether triangle is valid or not.
#include<stdio.h>

int main()
{       float a,b,c;

        printf("Enter the 3 angles of the Triangle :-\n");
        scanf("%f %f %f",&a,&b,&c);

        if(a+b+c==180.0 && a>0 && b>0 && c>0)
                  printf("\nTriangle is VALID");
        else
                  printf("\nTriangle is NOT VALID");

        return 0;
}
