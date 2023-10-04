// homework

#include<stdio.h>
int sum(int num);
int main()
{
    int num;
    printf("number dalo jiska sum chiye:");
    scanf("%d",&num);
    int result=sum(num);
    printf("the sum of number from 1 to %d is %d",num,result);
    return 0;
}

int sum(int num)
{
    if (num)
    {
        return num+sum(num-1);
    }
    else
    {
        return 0;
    }
}