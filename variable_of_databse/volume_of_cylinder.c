#include<stdio.h>
int main()
{
    float pi=3.14,radius,height,volume_of_cone;
    printf("enter the radius and height: ");
    scanf("%f%f",&radius,&height);
    volume_of_cone=1.0/3.0*pi*radius*radius*height;
    printf("volume of cone is %.2f",volume_of_cone);
    return 0;
}