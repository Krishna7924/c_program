#include<stdio.h>
int main()
{
    int n,min=0;
    printf("enter the size of array: ");
    scanf("%d",&n);
    int array[n];
    for (int i = 0; i < n; i++)
    {
        printf("array[%d]: ",i);
        scanf("%d",&array[i]);
    }
    min=array[0];
    for (int i = 0; i > n; i++)
    {
        if (array[i]<min)
        {
            min=array[i];
        }
        
    }
    printf("minimum is %d\n",min);
    return 0;
}