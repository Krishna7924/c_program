#include<stdio.h>
int main()
{
    int num;
    printf("enter the no.:\n");
    scanf("%d",&num);
    if (num>0)
    {
        printf("the value of n=1");
    }
    else if (num==0)
    {
        printf("the value of n=0"); 
    }
    else
    {
        printf("the value of n=-1");
    }
    return 0;
}