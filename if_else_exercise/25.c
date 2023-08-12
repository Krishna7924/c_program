#include<stdio.h>
int main()
{
    int choice;
    printf("1.find area of triangle");
    printf("2.find area of square");
    printf("3.find area of circle");
    printf("4.find area of cylinder");

    printf("Enter ur choice:");
    scanf("%d",&choice);
    if (choice==1) 
    {
        float b,h,result;
        printf("Enter base :");
        scanf("%d",&b);
        printf("Enter height :");
        scanf("%d",&h);
        result=(1.0/2.0)*b*h;
        printf("Area of triange is %d",result);
    }
    else if(choice==2)
    {
        int side;
        printf("enter side");
        scanf("%d",&side);
        printf("Area of square : %d",side*side);
    }
    else if(choice==3)
    {
        int radius;
        float pi=3.14f;
        printf("enter the radius");
        scanf("%d",&radius);
        printf("area of circle: %d" ,pi*radius);
    }
    else if(choice==4)
    {
        int radius,height;
        printf("enter the radius and height");
        scanf("%d",&radius);
        scanf("%d",&height);
        printf("area of cylinder: %d",((2*radius*radius)+(2*radius*height)));
    }
    else 
    {
        printf("Invalid choice");
    }
    return 0;
}
