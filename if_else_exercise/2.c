#include<stdio.h>
int main()
{
    int num;
    printf("enter the value of num:");
    scanf("%d",&num);
    if (num%2==0)
    {
        printf("%d is even",num);
    }
    else
    {
        printf("%d is odd no.",num);
    }
    return 0;
}
