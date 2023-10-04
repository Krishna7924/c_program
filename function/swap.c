
#include<stdio.h>
void swap(int num1,int num2)
{
    int c;
    c=num1;
    num1=num2;
    num2=c;
    printf("the value in swap fxn num1=%d and num2=%d \n",num1,num2);
}

int main()
{
    int num1,num2;
    printf("enter the value of 2 number: ");
    scanf("%d %d",&num1,&num2);
    printf("the value before swapping in main num1=%d and num2=%d \n",num1,num2); //10, 20
    swap(num1,num2);
    printf("the value after swapping in main num1=%d and num2=%d \n",num1,num2);// 10, 20
    /*num1 and num2 ki value jb ham swap kr rhe hai tuo 
    num1 or num2 ki copy value ja rhi hai swap mai jiske karan 
    real num1 or num2 ki value mai koi asar nhi ho rha */
    return 0;
}
