#include<stdio.h>
int factorial(int num);
int main()
{
    int num;
    printf("enter the number: ");
    scanf("%d",&num);
    int result=factorial(num);
    printf("the factorial of %d is %d",num,result);
    return 0;
}
int factorial(int num)
{
    if (num==0 || num==1)
        return 1;
    else
        return num*factorial(num-1);
}

// write a program in c to calculate the sum of numbers from 1 to n using recursion
// write a program in c to fibonacci series using recursion
 