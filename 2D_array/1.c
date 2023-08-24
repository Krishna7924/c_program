#include<stdio.h>
int main()
{
    int arry[3][3];
    printf("enter the value: \n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d",&arry[i][j]);
        }
    }
    printf("\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d\t",arry[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}
