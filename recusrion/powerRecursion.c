#include<stdio.h>
int power(int num,int pow);
int main()
{
    int num,pow;
    printf("enter the number: ");
    scanf("%d",&num);
    printf("enter the power: ");
    scanf("%d",&pow);
    int result=power(num,pow);
    printf("%d ^ %d : %d",num,pow,result);
    return 0;
}
int power(int num,int pow)
{
    if (pow)
    {
        return (num * power(num, pow - 1));
    }
    return 1;
    
}
