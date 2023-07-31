#include<stdio.h>
int main()
{
    int x,y; 
    printf("enter the value of x and y:\n");
    scanf("%d%d",&x,&y);
    if (x>0 && y>0)
    {
        printf("The coordinate point (%d,%d) lies in the First quadrant",x,y);
    }
    else if (x<0 && y>0)
    {
        printf("The coordinate point (%d,%d) lies in the second quadrant",x,y);
    }
    else if (x<0 && y<0)
    {
        printf("The coordinate point (%d,%d) lies in the third quadrant",x,y);
    }
    else if (x>0 && y<0)
    {
        printf("The coordinate point (%d,%d) lies in the fourth quadrant",x,y);
    }
    return 0;
}