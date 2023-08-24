#include<stdio.h>
int main()
{
    int a,b;
    printf("enter the size of arry:\n");
    int arry1[a][b],arry2[a][b],arry3[a][b];
    printf("enter the arry1:\n");
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            scanf("%d",&arry1[i][j]);
        }
    }
    printf("enter the arry2:\n");
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            scanf("%d",&arry2[i][j]);
        }
    }
    printf("\n");
    printf("arry3=\n");
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            arry3[i][j]=arry1[i][j]-arry2[i][j];
           
            printf("%d\t",arry3[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}
