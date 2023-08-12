#include<stdio.h>
int main()
{
    int n,arry[100],odd=0,even=0,count1=0,count2=0;
    printf("enter the size of arry: ");
    scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {
        printf("arry[%d]:",i);
        scanf("%d",&arry[i]);
    }
    for (int i = 0; i < n; i++)
    {
        if (arry[i]%2==0)
        {
            count1++;
        }
        else
        {
            count2++;
        }
        
    }
    printf("even no.=%d\n",count1);
    printf("odd no.=%d",count2);
    return 0;
}
