#include<stdio.h>
int main()
{
    for (int i = 0; i < 5; i++)
    {
        for (int j = 5-i; j > 0 ; j--)
        {
            printf("%d",j);
        }
        printf("\n");
    }
    return 0;
}