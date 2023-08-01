#include<stdio.h>
int main()
{
    int num,cube;
    printf("enter the no.:\n");
    scanf("%d",&num);
    for (int i = 1; i <= num; i++)
    {
        cube=i*i*i;
        printf("Number is : %d and cube of the %d is :%d\n",i,i,cube);
    }
    return 0;
}