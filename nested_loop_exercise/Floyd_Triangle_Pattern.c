#include<stdio.h>
int main()
{
    int n=1,x=8;
    for (int i = 1; i < x; i++)
    {
        for (int j = 0; j < i; j++)
        {
            printf(" %d",n);
            n++;   
        }
        printf("\n");
    }
    return 0;
}
