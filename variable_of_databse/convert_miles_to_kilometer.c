#include<stdio.h>
int main()
{
    float miles,miles_to_kilometer;
    printf("emter the miles: ");
    scanf("%f",&miles);
    miles_to_kilometer=1.609*miles;
    printf("miles to kilometer is %f",miles_to_kilometer);
    return 0;
}