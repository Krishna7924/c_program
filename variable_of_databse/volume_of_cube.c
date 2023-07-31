#include<stdio.h>
int main()
{
    float radius,volume_of_cube;
    printf("enter the radius:\n");
    scanf("%f",&radius);
    volume_of_cube=radius*radius*radius;
    printf("volume of cube is %.2f",volume_of_cube);
    return 0;
}