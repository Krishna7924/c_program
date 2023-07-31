#include<stdio.h>
int main()
{
    float fahrenheit,fahrenheit_to_celsius;
    printf("enter the fahrenheit:\n");
    scanf("%f",&fahrenheit);
    fahrenheit_to_celsius=fahrenheit-32*5.0/9.0;
    printf("fahrenheit to celsius is %f",fahrenheit_to_celsius);
    return 0;
}