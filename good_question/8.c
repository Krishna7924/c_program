#include<stdio.h>
int main()
{
    int a,n,d,result;
    printf("enter the number a,n,d:");
    scanf("%d%d%d",&a,&n,&d);  
    for (int i = 0; i < n; i++)
    {
        result=a+i*d;
        printf("%d \n",result);
    }
    return 0;
}
