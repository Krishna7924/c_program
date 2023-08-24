#include<stdio.h>
int main()
{
    int n,max=0;
    printf("enter the size of array: ");
    scanf("%d",&n);
    int array[n];
    printf("enter the no.\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&array[i]);
    }
    max=array[0];
    for (int i = 0; i < n; i++)
    {
        if (array[i]>max)
        {
            max=array[i];
        }
    }
    printf("maximum is %d\n",max);
    return 0;
}