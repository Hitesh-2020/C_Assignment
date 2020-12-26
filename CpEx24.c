//24.	Write a C program to find HCF (GCD) of two numbers.
#include <stdio.h>

int main()
{

    int n1 , n2 , hcf = 0;

    printf("Enter 2 Numbers for their H.C.F. :-\n");
    scanf("%d %d",&n1,&n2);

    for(int i=1; i <= n1 && i <= n2; i++)
    {
        if(n1%i==0 && n2%i==0)
        {
            hcf = i;
        }
    }
    printf("\nH.C.F. (or G.C.D) of (%d) and (%d) = %d\n", n1, n2, hcf);

    return 0;
}
