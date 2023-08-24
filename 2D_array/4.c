#include<stdio.h>
int main()
{
    int arry[3][3],count=0;
    printf("enter the value:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d",&arry[i][j]);
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (arry[i][j]%2==0)
            {
                count++;
            }
            
        }
    }
    printf("even elements are in arry: %d",count);
    return 0;
}
