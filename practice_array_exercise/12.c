#include<stdio.h>
int main()
{
    int n;
    printf("enter the size of arry: ");
    scanf("%d",&n);
    int arry[n];
    for (int i = 0; i < n; i++)
    {
        printf("arry[%d]: ",i);
        scanf("%d",&arry[i]);
    }
    
    for (int i = 0; i < n-1; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if (arry[i]==arry[j])
            {
                printf("duplicate no. is %d\n",arry[i]);
            }
        }
    }
    printf("\n");
    return 0;
}
