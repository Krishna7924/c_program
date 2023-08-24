#include<stdio.h>
int main()
{
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 5; j++)
        {
            if (i==5 || j==1 || (j==2 && i!=1 && i!=3 && i!=4 && i!=5 ) || (j!=4 && j!=2 && j!=5 && i==3) || (j!=3 && j!=2 && j!=5 && i==4))
            {
                printf(" %d",j);
            }
            else 
            {
                printf("  ");
            }
            
        }
        printf("\n");
    }
    
    return 0;
}
