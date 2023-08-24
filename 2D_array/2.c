#include<stdio.h>
int main()
{
    int arry1[3][3],arry2[3][3],arry3[3][3];
    printf("enter the arry1:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d",&arry1[i][j]);
        }
    }
    printf("enter the arry2:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d",&arry2[i][j]);
        }
    }
    printf("\n");
    printf("arry3=\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            arry3[i][j]=arry1[i][j]+arry2[i][j];
           
            printf("%d\t",arry3[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}
