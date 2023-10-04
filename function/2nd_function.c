// with argument and not return type
#include<stdio.h>
void add(int,int);
// void mul(int,int);
int main()
{
    int a=20,b=40;
    // int c=10,d=2;
    printf("before calling in main\n");
    add(a,b);
    add(a,b);
    // add(c,d);
    // add(c,d);
    printf("after calling in main\n");
    return 0;
}
    // int mul=c*d;

void add(int ravi,int ankit)
{
    int sum=ravi+ankit;
    printf("the sum is %d in add function \n",sum);
}

// void mul(int c,int d)

// {
//     int mul=c*d;

//     printf("the sum is %d in add function \n",mul);
// }
