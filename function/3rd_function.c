
#include<stdio.h>
int add();
int main()
{
    printf("before calling in main \n");
    int sum=add();
    printf("the value of sum is %d in main \n",sum);
    return 0;
}

int add()
{
    int a=10,b=20;
    printf(" in add function \n");
    return(a+b);
}