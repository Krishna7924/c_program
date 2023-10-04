#include<stdio.h>
int main()
{
    char name[20],address[100],phone[13];

    printf("enter your name: ");
    fgets(name,20,stdin);
    // scanf("%[^\n]s",name);
    // fflush(stdin);
    printf("enter your address: ");
    fgets(address,100,stdin);
    // scanf("%[^\n]s",address);
    // fflush(stdin);
    printf("enter your phone: ");
    fgets(phone,13,stdin);
    // scanf("%[^\n]s",phone);
    
    printf("name: %s\n",name);
    printf("address: %s\n",address);
    printf("phone: %s\n",phone);

    return 0;
}

void removwNextLine(char string[])


