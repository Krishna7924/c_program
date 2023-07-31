#include<stdio.h>
int main()
{
    int maths,chem,phy,total1,total2;
    printf("enter the marks of maths,chem,phy:\n");
    scanf("%d%d%d",&maths,&chem,&phy);
    if (maths >=65 && phy >=55 && chem>=50)
    {
        total1=maths+chem+phy;
        total1>=190;
        total2=maths+phy;
        total2>=140;
        printf("candidate is capabale for admission");
    }
    else
    {
        printf("candidate is not capabale for admission");
    }
    return 0;
}