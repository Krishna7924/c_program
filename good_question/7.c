#include<stdio.h>
int main()
{
    int num,result,sum=0;
    printf("enter the value:\n");
    scanf("%d",&num);
    // if (num<0)
    // {
    //     num= -num;
    // }
    while (num !=0)
    {
        result=num%10;
        if (result %2!=0)
        {
            sum=sum+result;
        }
        num/=10;
    }
    // if (count==0)
    // {
    //     count=1;
    // }
    printf("%d",sum);
    return 0;
}