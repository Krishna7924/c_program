#include<stdio.h>
int main()
{
    for (int i = 0; i < 5; i++)
    {
        for (int j = 4; j > i; j--)
        {
            printf(" ");
        }
        for (int k = 0; k <= i; k++)
        {
            printf("%d",k+1);
        }
        for (int L = 0; L < i; L++)
        {
            printf("%d",i-L);
        }
        printf("\n");
    }
    return 0;
}