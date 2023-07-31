#include<stdio.h>
int main()
{
    float r,surface_area_of_cube;
    printf("enter the radius: ");
    scanf("%f",r);
    surface_area_of_cube=6*r*r;
    printf("surface area of cube is %.2f",surface_area_of_cube);
    return 0;
}