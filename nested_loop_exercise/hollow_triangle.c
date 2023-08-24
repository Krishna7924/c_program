#include<stdio.h>
int main()
{
    for (int i = 1; i <= 6; i++)
    {
        for (int j = 6; j > i; j--)
        {
            printf("@");
        }
        for (int k = 0; k < i; k++)
        {
            if (i==0 || i==2 || i==6 || k==0 || k==4 ||k==1 ||k==2 || k==3 )
            {
                printf("* ");
            }
            else
            {
                printf("#");
            }
        }
        printf("\n");   
    }
    return 0;
}