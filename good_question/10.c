#include<stdio.h>
int main()
{
    int num,result,evensum=0,oddsum=0,count=0,originalnum1,originalnum2;
    printf("enter the number:\n");
    scanf("%d",&num);
    originalnum1=num;
    while (num >0)
    {
        count++;
        num/=10;
    }
    printf("digit len: %d\n",count);
    
    while (originalnum1 > 0)
    {
        result=originalnum1%10;
        if (result %2==0)
        {
            evensum+=result;
        }
        else
        {
            oddsum+=result;
        }
        originalnum1/=10;  
    }
    printf("sum even: %d\n",evensum);
    printf("sum odd: %d\n",oddsum);

    printf("fibonnaci aeries are :%d %d", oddsum,evensum);

    int term1,term2,term3=0;
    term1=evensum;
    term2=oddsum;
    
    for (int i = 0; i < count-2; i++)
    {
        term3=term1+term2;
        printf(" %d",term3);
        term1=term2;
        term2=term3;

    }
    return 0;
}
