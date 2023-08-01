#include<stdio.h>
int main()
{
    int num,mul;
    printf("enter the no. :\n");
    scanf("%d",&num);
    for (int i = 1; i <= 10; i++)
    {
        mul=num*i;
        printf("%d x %d = %d\n",num,i,mul);
    }
    return 0;
}