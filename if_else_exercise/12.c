#include<stdio.h>
int main()
{
    int physic,chemistry,computer_application,total;
    float percentage;
    printf("enter the marks of physic,chemistry,computer application:\n");
    scanf("%d%d%d",&physic,&chemistry,&computer_application);
    total=physic+chemistry+computer_application;
    printf("total = %d\n",total);
    percentage=total/3;
    printf("percent = %.2f\n",percentage);
    if (percentage>=80 && percentage<=100)
    {
        printf("divison = first");
    }
    else if(percentage>=55 && percentage<80)
    {
        printf("divison = second");
    }
    else if (percentage>=33 && percentage<55)
    {
        printf("divison = third");
    }
    return 0;
}