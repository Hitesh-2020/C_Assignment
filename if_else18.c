//18.	Write a C program to check whether the triangle is equilateral, isosceles or scalene triangle.
#include<stdio.h>

int main()
{     float a,b,c;

      printf("DETERMINING THE TYPE OF THE TRIANGLE :-\n\nEnter the 3 Sides of the TRIANGLE\n");
      scanf("%f %f %f",&a,&b,&c);


      if(a+b>c && b+c>a && c+a>b && a>0 && b>0 && c>0)
      {       if(a==b && b==c)
                      printf("\nTriangle is EQUILATERAL Triangle");
              else if(a==b || b==c || a==c)
                      printf("\nTriangle is ISOSCELES Triangle");
              else
                      printf("\nTriangle is SCALENE Triangle");
      }
      else
              printf("Triangle is NOT VALID");

      return 0;
}
