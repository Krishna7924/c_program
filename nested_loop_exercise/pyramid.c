#include<stdio.h>
int main()
{
    for (int i = 1; i <= 6; i++)
    {
        for (int j = 6; j > i; j--)
        {
            printf(" ");
        }
        for (int k = 0; k < i; k++)
        {
            if(i<6)
            {
                if(k==0 || k==i-1)
                printf("* ");
                else
                printf("  ");
            }
            else
            {
                printf("* ");
            }
            
        }
        printf("\n");   
    }
    return 0;
}