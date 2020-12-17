//19.	Write a C program to find all roots of a quadratic equation.
#include <stdio.h>
#include<math.h>

int main()
{   float a,b,c;
    double d,r1,r2;

    printf("Quadratic Equation : [ ax^2 + bx + c = 0 ]");
    printf("\nEnter the coefficients :-\n");
    printf("a = ");
    scanf("%f",&a);
    printf("b = ");
    scanf("%f",&b);
    printf("c = ");
    scanf("%f",&c);

    d=b*b-4*a*c;

    if(d==0)
    {   r1=-b/(2*a);
        printf("Equal Roots of Quadratic Equation = %lf",r1);
    }
    else if(d>0)
    {   r1=(-b+sqrt(d))/(2*a);
        r2=(-b-sqrt(d))/(2*a);

        printf("Roots of Quadratic Equation --");
        printf("\nRoot 1 = %lf",r1);
        printf("\nRoot 2 = %lf",r2);
    }
    else
        printf("No Real Roots");

    return 0;
}
