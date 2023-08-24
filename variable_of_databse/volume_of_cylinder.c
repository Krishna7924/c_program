#include<stdio.h>
int main()
{
    float pi=3.14,radius,height,volume_of_cylinder;
    printf("enter the radius and height: ");
    scanf("%f%f",&radius,&height);
    volume_of_cylinder=pi*radius*radius*height;
    printf("volume of cone is %.2f",volume_of_cylinder);
    return 0;
}