//21.	C program to input marks of five subjects and Calculate percentage and grade according to given format
#include<stdio.h>

int main()
{       float phy,chem,bio,math,comp,perc;

        printf("Enter PHYSICS Marks (out of 100)\t: ");
        scanf("%f", &phy);
        printf("Enter CHEMISTRY Marks (out of 100)\t: ");
        scanf("%f", &chem);
        printf("Enter BIOLOGY Marks (out of 100)\t: ");
        scanf("%f", &bio);
        printf("Enter MATHEMATICS Marks (out of 100)\t: ");
        scanf("%f", &math);
        printf("Enter COMPUTER Marks (out of 100)\t: ");
        scanf("%f", &comp);

        perc=(phy+chem+bio+math+comp)/5;

        printf("\nPercentage for marks of the 5 Subjects = %f\n",perc);

        if(perc>=90)
              printf("Corresponding Grade = A");
        else if(perc>=80)
              printf("Corresponding Grade = B");
        else if(perc>=70)
              printf("Corresponding Grade = C");
        else if(perc>=60)
              printf("Corresponding Grade = D");
        else if(perc>=40)
              printf("Corresponding Grade = E");
        else
              printf("Corresponding Grade = F");

        return 0;
}
