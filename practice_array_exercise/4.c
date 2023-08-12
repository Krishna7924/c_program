#include<stdio.h>
int main()
{
    int n,sum=0;
    float average=0;
    printf("enter the size number: ");
    scanf("%d",&n);
    int arry[n];
    for (int i = 0; i < n; i++)
    {
        printf("arry[%d]= ",i);
        scanf("%d",&arry[i]);
    }
    for (int i = 0; i < n; i++)
    {
        sum=sum+arry[i];
        average=sum/n;
    }
    printf("sum of arry is %d\n",sum);
    printf("average of arry is %.2f",average);
    return 0;
}
