#include<stdio.h>
int main()
{
    int sum=0,num;
    printf("enter the no.: ");
    scanf("%d",&num);
    for (int i = 1; i < num; i+= 2)
    {
        printf(" %d\n",i);
        sum=sum+i;
    }
    printf("sum of odd number %d",sum);
    return 0;
}
