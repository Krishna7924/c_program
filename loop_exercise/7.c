#include<stdio.h>
int main()
{
    int num;
    for (int i = 1; i <= 10; i++)
    {
        for (int j = 1; j <= 8; j++)
        {
            num=i*j;
            printf("%2dx%2d = %2d,",j,i,num);
        }
        printf("\n");
    }
    return 0;
}