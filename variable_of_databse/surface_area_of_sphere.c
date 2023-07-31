#include<stdio.h>
int main()
{
    float pi=3.14,r,surface_area_of_sphere;
    printf("enter the radius: ");
    scanf("%f",&r);
    surface_area_of_sphere=4*pi*r*r;
    printf("surface area of sphere is %.2f",surface_area_of_sphere);
    return 0;
}