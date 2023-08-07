#include<stdio.h>
int main()
{
    int num1,num2,result=0,remainder;
    printf("enter the number:\n");
    scanf("%d",&num1);
    num2=num1;
    while (num2!=0)
    {
        remainder=num2%10;
        result +=remainder*remainder*remainder;
        num2/=10;
    }
    if (result==num1)
    {
        printf("%d is a armstrong number",num1);
    }
    else if (result!=num1)
    {
        printf("%d is not a armstrong number",num1);
    }
    
    return 0;
}
