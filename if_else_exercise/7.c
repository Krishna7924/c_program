#include<stdio.h>
int main()
{
    int height;
    printf("enter the height:\n");
    scanf("%d",&height);
    if (height>160)    
    {
        printf("the person height is long");
    }
    else if (height<160 && height>130)
    {
        printf("the person height is medium");
    }
    else if (height<130)
    {
        printf("the person height is small");
    }
    return 0;
}