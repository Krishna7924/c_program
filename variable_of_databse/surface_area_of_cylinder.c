#include<stdio.h>
int main()
{
    float pi=3.14,r,h,surface_area_of_cylinder;
    printf("enter the radius and height:\n");
    scanf("%f%f",r,h);
    surface_area_of_cylinder=2*pi*r*r+2*pi*r*h;
    printf("surface area of cylinder is %f",surface_area_of_cylinder);
    return 0;
}