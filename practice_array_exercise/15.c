#include<stdio.h>
int main()
{
    int n;
    printf("enter the size of the arry: ");
    scanf("%d",&n);
    int arry1[n],arry2[n];
    for (int i = 0; i < n; i++)
    {
        printf("arry1[%d]= ",i);
        scanf("%d",&arry1[i]);
    }
    for (int i = 0; i < n; i++)
    {
        printf("arry2[%d]= ",i);
        scanf("%d",&arry2[i]);
    }
    for (int i = 0; i < n; i++)
    {
        if (arry1[i]==arry2[i])
        {
            printf("common elemnts are %d\n",arry1[i]);
        }
    }
    return 0;
}
