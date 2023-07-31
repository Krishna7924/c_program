#include<stdio.h>
int main()
{
    float p,r,t,simple_interest;
    printf("enter the p,r,t: \n");
    scanf("%f%f%f",&p,&r,&t);
    simple_interest=p*r*t/100;
    printf("simple interest is %.2f",simple_interest);
    return 0;
}