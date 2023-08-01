#include<stdio.h>
int main()
{
    int num,result,count=0;
    printf("enter the value:\n");
    scanf("%d",&num);
    // if (num<0)
    // {
    //     num= -num;
    // }
    while (num !=0)
    {
        result=num%10;
        if (result %2==0)
        {
            count++;
        }
        num/=10;
    }
    // if (count==0)
    // {
    //     count=1;
    // }
    printf("%d",result);
    return 0;
}