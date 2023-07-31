#include<stdio.h>
int main()
{
    int marks[10]={10,45,66,24,566,7,86,66,23};
    int key,isfound=0;
    printf("enter the key:\n");
    scanf("%d",&key);
    for (int i = 0; i < 10; i++)
    {
        if (key==marks[i])
        {
            printf("%d found at index %d \n",key,i);
            isfound=1;
        }
        // else
        // {
        //     printf("%d not found in array\n",key);
        // }
    }
    if (isfound !=1)
    {
        printf("%d not found in array\n",key);
    }
    return 0;
}