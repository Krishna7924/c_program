// homework

#include<stdio.h>
void ReverseCounting(int);
int main()
{
    int a=10;
    printf("before calling ReverseCounting function \n");
    ReverseCounting(a);
    printf("after calling ReverseCounting");
    return 0;
}

void ReverseCounting(int a)
{
    if (a>=1)
    {
        printf("in add function at %d \n",a);
        if (a==6)
        {
            return;
        }
        ReverseCounting(a-1);
    }
}
