#include<stdio.h>
int main()
{
    int arry1[3][3],arry2[3][3],arry3[3][3];
    printf("enter the value of arry1:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d",&arry1[i][j]);
        }
    }
    printf("enter the value of arry2:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {   
            scanf("%d",&arry2[i][j]);
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            arry3[i][j]=arry1[i][j]+arry2[i][j];
            printf("array[%d][%d]: %d\n",i,j,arry3[i][j]);
        }
        
    }
    
    return 0;
}
