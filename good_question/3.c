#include<stdio.h>
int main()
{
    int num,count=0;
    printf("enter the number:\n");
    scanf("%d",&num);
    // if (num<0)
    // {
    //     num= -num;
    // }
    while (num !=0)
    {
        count++;
        num/=10;
    }
    // if (count==0)
    // {
    //     count=1;
    // }
    
    printf("%d",count);
    return 0;
}
