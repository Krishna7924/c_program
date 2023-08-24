#include<stdio.h>
int main()
{
    int n;
    printf("enter the size of array: ");
    scanf("%d",&n);
    int arry1[n],arry2[n];
    for (int i = 0; i < n; i++)
    {
        printf("array1[%d]: ",i);
        scanf("%d",&arry1[i]);
    }
    for (int i = 0; i < n; i++)
    {
        printf("array2[%d]: ",i);
        scanf("%d",&arry2[i]);
    }
    for (int i = 0; i < n; i++)
    {
        if (arry1[i]==arry2[i])
        {
            printf("two array are equal");
        }
        else
        {
            printf("two array are not equal");
        }
        
    }
    
    return 0;
}
