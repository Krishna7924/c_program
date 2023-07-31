#include<stdio.h>
int main()
{
    for (int i = 0; i < 5; i++)
    {
        for (int space = 1; space <= i; space++)
        {
            printf(" ");
        }
        for (int k = 5; k > i; k--)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}