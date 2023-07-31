#include<stdio.h>
int main()
{
    char grade;
    printf(" enter the day number :");
    scanf("%c",&grade);

    if (grade=='E')
    {
        printf("excellent");
    }
    else if (grade=='V')
    {
        printf("Very Good");
    }
    else if (grade=='G')
    {
        printf("good");
    }
    else if (grade=='A')
    {
        printf("average");
    }
    else if (grade=='f')
    {
        printf("fail");
    }
    return 0; 
}