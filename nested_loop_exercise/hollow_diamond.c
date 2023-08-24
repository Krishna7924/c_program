#include<stdio.h>
int main()
{
    for (int i = 0; i < 6; i++)
    {
        for (int j = 5; j > i; j--)
        {
            printf(" ");
        }
        for (int j = 1; j <= i; j++)
        {
            if ( (j!=4 && j!=2 && j!=3 && i==5) ||  j==1 || (j==2 && i!=1 && i!=3 && i!=4 && i!=5 ) || (j!=4 && j!=2 && j!=5 && i==3) || (j!=3 && j!=2 && j!=5 && i==4))
            {
                printf(" *");
            }
            else 
            {
                printf("  ");
            }
        }
        printf("\n");
    // for (int i = 0; i < 6; i++)
    // {
    //     for (int j = 0; j < i; j++)
    //     {
    //         printf(" ");
    //     }
    //     for (int j = 6; j < 0; j--)
    //     {
    //         if ()
    //         {
                
    //         }
            
    //     }
        
    // }
    
    }
    return 0;
}
