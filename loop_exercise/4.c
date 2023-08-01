#include<stdio.h>
int main()
{
    int sum=0;
    float avg;
    for (int i = 0; i < 10; i++)
    {
        printf("%d\n",i);
        sum=sum+i;
    }
    avg=sum/10.00;
    printf("sum of 10 no. is %d\n",sum);
    printf("average is %f",avg);
    return 0;
}