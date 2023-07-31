#include<stdio.h>
int main( )
{
    int angle1,angle2,angle3,sum;
    printf("enter the value of angles:\n");
    scanf("%d%d%d",&angle1,&angle2,&angle3);
    sum=angle1+angle2+angle3;
    if (sum==180)
    {
        printf("the triangle is valid");
    }
    else
    {
        printf("the triangle is not valid");
    }
    
    return 0;
}
