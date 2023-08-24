#include<stdio.h>
int main()
{
    int n;
    printf("enter the length: ");
    scanf("%d",&n);
    int arry1[n];
    for (int i = 0; i < n; i++)
    {
        printf("array1[%d]= ",i);
        scanf("%d",&arry1[i]);
    }
    printf("\n");
    // for (int i = 0; i < n; i++)
    // {
    //     printf("array2[%d]=%d\n",i,arry2[i]);
    // }
    // printf("\n");
    for (int i = n-1; i >= 0; i--)
    {
        printf("reverse arry1[%d]=%d\n",i,arry1[i]);
    }
    
    return 0;
}