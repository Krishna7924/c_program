#include<stdio.h>
int main()
{
    char num;
    printf("enter the number:\n");
    scanf("%c",&num);
    if ((num>=65 && num<=90) || (num>=97 && num<=122))
    {
        printf("this is a alphabet character");
    }
    else if (num>=48 && num<=57)
    {
        printf("this is a digit character");
    }
    else if ((num>=32 && num<=47) || (num>=58 && num<=64) || (num>=91 && num<=96) || (num>=123 && num<=126))
    {
        printf("this is a special character");
    }
    return 0;
}
