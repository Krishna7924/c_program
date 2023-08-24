// 0 1 1 2 3 5 . .. . 
// #include<stdio.h>
// int main()
// {
//     int term1=0,term2=1,term3;
//     printf(" %d %d ",term1,term2);

//     for (int i = 0; i < 10; i++)
//     {
//         term3=term1+term2;
//         printf(" %d ",term3);
//         term1=term2;
//         term2=term3;  
//     }
    
//     return 0;
// }


#include<stdio.h>
int main()
{
    // check whether a no. is 3 digit armstrong or not i.e
    // 153 = 1*1*1 + 5*5*5 + 3*3*3 => 153

    // sum=0;

    // 153%10 => 3
    // sum=sum+3*3*3
    // 153/10 => 15.3 -> 15

    // 15%10 => 5
    // sum=sum+5*5*5
    // 15/10 => 1.5

    // 1%10 => 1
    // sum=sum+1*1*1
    // 1/10 => 0.1

    // 0 X
    int num,rem,sum=0,temp;
    printf("enter num:");
    scanf("%d",&num);
    temp=num;
    while (num>0)
    {
        rem=num%10;
        sum=sum+rem*rem*rem;
        num=num/10;
    }
    // printf("sum = %d \n",sum);
    if (sum==temp)
    {
        printf("%d is armstrong no\n",temp);
    }
    else
    {
        printf("%d is not an armstrong no\n",temp);        
    }
    return 0;
}



