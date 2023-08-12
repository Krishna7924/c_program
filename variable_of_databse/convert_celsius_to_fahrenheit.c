#include<stdio.h>
int main()
{
    float celsius,celsius_to_fahrenheit;
    printf("enter the celsius: \n");
    scanf("%f",&celsius);
    celsius_to_fahrenheit=celsius * 9/5 + 32;
    printf("celsius to fahrenheit is %.2f",celsius_to_fahrenheit);
    return 0;
}