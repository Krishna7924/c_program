#include<stdio.h>
int main()
{
    int num1,num2,sub,add,mul;
    printf("enter the 2 values:\n");
    scanf("%d%d",&num1,&num2);
    add=num1+num2;
    printf("\nadding = %d\n",add);
    if (num1>num2)
    {
        sub=num1-num2;
        printf("subtraction = %d\n",sub);
    }
    else if (num2>num1)
    {
        sub=num2-num1;
        printf("subtraction = %d\n",sub);
    }
    mul=num1*num2;
    printf("multiplication = %d\n",mul);
    return 0;
}