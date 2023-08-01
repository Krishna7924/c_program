#include<stdio.h>
int main()
{
    int num,result=1,i;
    printf("enter the value:\n");
    scanf("%d",&num);
    for ( i = num; i > 0; i--)
    {
        result=result*i;
    }
    printf("%d",result);
    return 0;
}