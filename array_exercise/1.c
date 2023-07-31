#include<stdio.h>
int main()
{
    int array[10],max=0;
    printf("enter the 10 no.\n");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d",&array[i]);
    }
    max=array[0];
    for (int i = 0; i < 10; i++)
    {
        if (array[i]>max)
        {
            max=array[i];
        }
    }
    printf("maximum is %d\n",max);
    return 0;
}