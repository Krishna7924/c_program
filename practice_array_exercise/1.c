#include<stdio.h>
int main() 
{
    int n,temp;
    printf("Enter the size of array number: ");
    scanf("%d", &n);

    int arry[n];
    
    for (int i = 0; i < n; i++) 
    {
        printf("arry[%d]:", i);
        scanf("%d", &arry[i]);
    }

    for (int i = 0; i < n; i++) 
    {
        for (int j = i+1; j < n; j++)
        {
            if (arry[i]>arry[j])
            {
                temp=arry[i];
                arry[i]=arry[j];
                arry[j]=temp;
            }
        }
    }
    printf("sorting of array elements: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d,",arry[i]);//  \b:- backslash
    }
    printf("\b\b");
    return 0;
}