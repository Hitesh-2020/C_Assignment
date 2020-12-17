//6.	Write a C program to check whether a year is leap year or not
#include <stdio.h>

int main()
{
    int yr;

    printf("Enter a year : ");
    scanf("%d", &yr);

    if(yr%4==0)
    {
    	  if(yr%100 == 0)
        {
            if (yr%400 == 0)
                printf("\nEntered Number (%d) is a LEAP Year", yr);
            else
                printf("\nEntered Number (%d) is NOT LEAP Year", yr);
        }
        else
            printf("\nEntered Number (%d) is a LEAP Year", yr);
    }
    else
        printf("\nEntered Number (%d) is NOT LEAP Year", yr);

    return 0;
}
