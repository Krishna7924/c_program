#include<stdio.h>
#include<math.h>
int main()
{
    float plusx,subx,a,b,c;
    printf("enter the a,b,c");
    scanf("%f%f%f",&a,&b,&c);

    plusx= (  (-b) + sqrt(b*b - 4*a*c))/2.0*a ;
    subx= (  (-b) - sqrt(b*b - 4*a*c))/2.0*a ;

    printf(" sub x = %f \n",subx);
    printf(" plus x = %f \n",plusx);

    if (subx >=0 && plusx>=0)
    {
        printf(" Both r real numbers \n");
    }
    else if (subx <0 && plusx<0)
    {
        printf(" Both r Imaginory numbers \n");
    }
    else
    {
        printf(" They are complex number \n There are no solution\n");
    } 

    return 0;
}