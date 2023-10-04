#include<stdio.h>
int add(int,int);
int main()
{
    int a=10,b=20;
    printf("befor calling in main \n");
    int sum=add(a,b);
    printf("the sum is %d in main \n",sum);
    return 0;
}

int add(int a,int num)
{
    return(a+num);
}
