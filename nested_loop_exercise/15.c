#include<stdio.h>
int main()
{
  for (int i = 0; i <= 4; i++)
    {
        for (int j = 10; j > i; j--)
        {
            printf(" ");
        }
        for (int k = 0; k < i; k++)
        {
            printf("* ");
        }
        printf("\n");   
    }
    for (int i = 4; i < 8; i++)
    {
        for (int j = 11; j > i; j--)
        {
            printf(" ");
        }
        for (int k = 1; k < i; k++)
        {
            printf("* ");
        }
        printf("\n");   
    }
    for (int i = 8; i < 12; i++)
    {
        for (int j = 13; j > i; j--)
        {
            printf(" ");
        }
        for (int k = 3; k < i; k++)
        {
            printf("* ");
        }
        printf("\n");   
    }
    for (int i = 0; i < 4 ; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            printf(" ");
        }
    for (int k = 0; k < 4; k++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}
