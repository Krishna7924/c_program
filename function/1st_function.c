// no argument and not return type

#include<stdio.h>
void add();
int main()
{
    printf("before calling in main\n");
    add();
    add();
    add();
    add();
    add();
    printf("after calling in main\n");
    return 0;
}

void add()
{
    printf("hii i am adding something! \n");
}
