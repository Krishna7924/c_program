#include<stdio.h>
int main()
{
    int side1,side2,side3;
    printf("enter the side1,side2,side3:\n");
    scanf("%d%d%d",&side1,&side2,&side3);
    if (side1==side2 && side2==side3 && side3==side1)
    {
        printf("this is an equilateral triangle");
    }
    else if ((side1==side2 && side2!=side3 && side3!=side1) || (side1!=side2 && side2==side3 && side3!=side1) || (side1!=side2 && side2!=side3 && side3==side1))
    {
        printf("tihs is an isoceles triangle");
    }
    else if (side1!=side2 && side2!=side3 && side3!=side1)
    {
        printf("this is an scalene triangle");
    }
    return 0;
}
