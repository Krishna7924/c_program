#include<stdio.h>
int main()
{
    int a,b,isDiagonallyOne=0,isZero=0;
    printf("enter the size of array:\n");
    scanf("%d%d",&a,&b);
    if (a!=b)
    {
        printf("size of array are not equal !");
    }
    else if(a==b)
    {
        int arry[a][b];
        printf("enter the value of array:\n");
        for (int i = 0; i < a; i++)
        {
            for (int j = 0; j < b; j++)
            {
                scanf("%d",&arry[i][j]);
            }
        }
        for (int i = 0; i < a; i++)
        {
            for (int j = 0; j < b; j++)
            {
                if (i==j && arry[i][j]==1)
                {
                    isDiagonallyOne=1;
                }
                else
                {
                    isDiagonallyOne=0;
                }
                if (i!=j && arry[i][j]==0)
                {
                    isZero=1;
                }
                else
                {
                    isZero=0;
                } 
            }
            
        }
        if(isDiagonallyOne==1 && isZero==1)
        {
           printf("matrix is identity matrix");
        }
        else
        {
            printf("matrix is not identity matrix");  
        }          
    }
    return 0;
}
