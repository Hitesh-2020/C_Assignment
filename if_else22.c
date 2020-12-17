//22.	Write a C program to input basic salary of an employee and calculate its Gross salary
#include<stdio.h>

int main()
{     float bas_sal;

      printf("Enter Basic Salary (in Rupees) : ");
      scanf("%f",&bas_sal);

      if(bas_sal>=0)
      {     if(bas_sal<=10000)
                  printf("\nGross Salary = %f Rupees",bas_sal*(1+0.2+0.8));
            else if(bas_sal<=20000)
                  printf("\nGross Salary = %f Rupees",bas_sal*(1+0.25+0.9));
            else if(bas_sal>20000)
                  printf("\nGross Salary = %f Rupees",bas_sal*(1+0.3+0.95));
      }
      else
            printf("\nInvalid Salary Inputted");

      return 0;
}
