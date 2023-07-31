#include<stdio.h>
int main()
{
    int array[10],min=0;
    printf("enter the 10 no.\n");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d",&array[i]);
    }
    min=array[0];
    for (int i = 0; i > 10; i++)
    {
        if (array[i]>min)
        {
            min=array[i];
        }
        
    }
    printf("maximum is %d\n",min);
    return 0;
}