#include<stdio.h>
void counting(int);
int main()
{
    int a=1;
    printf("before calling counting function \n");
    counting(a);
    printf("after calling counting");
    return 0;
}

void counting(int a)
{
    if (a<=10)
    {
        printf("in add function at %d \n",a);
        if (a==5)
        {
            return;
        }
        counting(a+1);
    }
}
