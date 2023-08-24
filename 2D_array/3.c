#include<stdio.h>
int main()
{
    int a,b;
    printf("enter the size of arry: ");
    scanf("%d%d",&a,&b);
    int arry[a][b];
    printf("enter the value: \n");
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            scanf("%d",&arry[i][j]);
        }
    }
    printf("\n");
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            printf("%d\t",arry[i][j]);
        }
        printf("\n");
    }
    return 0;
}
