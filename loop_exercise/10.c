#include<stdio.h>
int main()
{
    int num,power,result=1;
    printf("enter the number: ");
    scanf("%d",&num);
    printf("enter the power: ");
    scanf("%d",&power);
    for (int i = 0; i < power; i++)
    {
        result=result * num;
    }
    printf("the result is %d",result);
    return 0;
}
