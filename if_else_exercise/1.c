#include<stdio.h>
int main()
{
    int num1, num2;
    printf("enter the value of num1 and num2:\n");
    scanf("%d%d",&num1,&num2);
    if (num1==num2)
    {
        printf("num1 and num2 are equal");
    }
    else
    {
        printf("num1 and num2 are not equal");
    }
    return 0;
}