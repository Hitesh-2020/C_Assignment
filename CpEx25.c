//25.	Write a C program to find LCM of two numbers.
#include <stdio.h>

int main(){
    int n1, n2, lcm;

    printf("Enter 2 Numbers :-\n");
    scanf("%d %d",&n1,&n2);

    lcm = (n1 > n2) ? n1 : n2;

    while (!(lcm % n1 == 0 && lcm % n2 == 0))
    {
      ++lcm;
    }

    printf("The LCM of (%d) and (%d) = %d", n1, n2, lcm);

    return 0;
}
