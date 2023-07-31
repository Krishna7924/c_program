#include<stdio.h>
int main()
{
    int num;
    printf("enter the no.:\n");
    scanf("%d",&num);
    if (num>0)
    {
        printf("%d is a positive no.",num);
    }
    else if(num==0)
    {
        printf("%d is a zero",num);
    }
    else
    {
        printf("%d is a negative no.",num);
    }
    return 0;
}
