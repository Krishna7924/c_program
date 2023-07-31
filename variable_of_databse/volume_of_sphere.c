#include<stdio.h>
int main()
{
    float pi=3.14,radius,volume_of_sphere;
    printf("enter the radius: ");
    scanf("%f",&radius);
    volume_of_sphere=4.0/3.0*pi*radius*radius*radius;
    printf("volume of sphere is %.2f",volume_of_sphere);
    return 0;
}