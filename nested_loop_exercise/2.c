#include<stdio.h>
int main()
{
    // int row,col;
    // printf("enter the row and column:\n");
    // scanf("%d",&col);
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("*");
        }   
        printf("\n");
    }
    return 0;
}