//17.	Write a C program to input all sides of a triangle and check whether triangle is valid or not.
#include<stdio.h>

int main()
{       float a,b,c;

        printf("Enter the 3 sides for the TRIANGLE :-\n");
        scanf("%f %f %f", &a,&b,&c);

        if(a+b>c && b+c>a && c+a>b && a>0 && b>0 && c>0)
                  printf("Triangle is VALID");
        else
                  printf("Triangle is NOT VALID");

        return 0;            
}
