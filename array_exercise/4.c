#include<stdio.h>
int main()
{
    int n;
    printf("enter the length: ");
    scanf("%d",&n);
    int arry1[n],arry2[n];
    for (int i = 0; i < n; i++)
    {
        printf("array1[%d]= ",i);
        scanf("%d",&arry1[i]);
    }
    for (int i = 0; i < n; i++)
    {
        arry2[i]=arry1[i];
    }
    for (int i = 0; i < n; i++)
    {
        printf("array2[%d]=%d\n",i,arry2[i]);
    }
    
    printf("\n");
    
    return 0;
}