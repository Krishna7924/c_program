#include<stdio.h>
int main()
{
    for (int i = 0; i < 5; i++)
    {
        for (char j = 65; j <= 65+i; j++)
        {
            printf("%c",j);
        }
        printf("\n");
    }
    return 0;
}