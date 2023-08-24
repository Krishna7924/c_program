#include<stdio.h>
int main()
{
    int arry[10]={1,2,3,4,5,6,7,8,9,10};
    int value;
    printf("enter the value: ");
    scanf("%d",&value);
    for (int i = 0; i < 10; i++)
    {
        if (arry[i]==value)
        {
            printf("the value is %d",value);
        }
        else
        {
            printf("the value %d is not found!",value);
        }
    }
    
    return 0;
}
