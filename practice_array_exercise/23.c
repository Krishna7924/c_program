#include<stdio.h>
int main()
{
    int a,b;
    printf("enter the size of array1: ");
    scanf("%d",&a);
    printf("enter the size of array2: ");
    scanf("%d",&b);
    int arry1[a],arry2[b];
    if (arry1[a]==arry2[b])
    {
        printf("the size of array is equal!");
    }
    else
    {
        printf("the size of array is not equal!");
    }
    return 0;
}
