#include<stdio.h>
int main()
{
    int day_number;
    printf(" enter the day number :");
    scanf("%d",&day_number);

    if (day_number==1)
    {
        printf("Monday");
    }
    else if (day_number==2)
    {
        printf("Tuesday");
    }
    else if (day_number==3)
    {
        printf("Wednesday");
    }
    else if (day_number==4)
    {
        printf("Thrusday");
    }
    else if (day_number==5)
    {
        printf("Friday");
    }
    else if (day_number==6)
    {
        printf("Saturday");
    }
    else if (day_number==7)
    {
        printf("Sunday");
    }
    else
    {
        printf("invalid day");
    }
    return 0; 
}