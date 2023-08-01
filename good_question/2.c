#include<stdio.h>
int main()
{
    int num,n1=0,n2=1,result;
    printf("enter the number:");
    scanf("%d",&num);

    printf("%d %d ",n1,n2);
    for (int i = 1; i < num-1; i++)
    {
       result=n1+n2;
       printf("%d ",result);
       n1 = n2;
       n2 = result;
    }
    
    return 0;
}
