//20.	Write a C program to print all ASCII character with their values.
#include <stdio.h>

// ascii values of all characters
int main()
{

    for(int i = 0; i <= 255; i++)
    {
        printf("ASCII value of char (%c) = %d\n", i, i);
    }

    return 0;
}
