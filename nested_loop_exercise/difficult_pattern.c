#include<stdio.h>
int main()
{
    for (int row = 1; row <= 10; row++)
    {
        for (int column = 1; column <= 10; column++)
        {
            if (((row==3&&column==3)||(row==3&&column==4)||(row==3&&column==5)) || ((row==4&&column==3)||(row==4&&column==4)||(row==4&&column==5)) ||((row==5&&column==3)||(row==5&&column==4)||(row==5&&column==5)))
            {
                printf(" ");
            }
            else if (((row==3&&column==7)||(row==3&&column==8)||(row==3&&column==9)) || ((row==4&&column==7)||(row==4&&column==8)||(row==4&&column==9)) || ((row==5&&column==7)||(row==5&&column==8)||(row==5&&column==9)))
            {
                printf(" ");
            }
            else if (((row==7&&column==4)||(row==7&&column==5)||(row==7&&column==6)||(row==7&&column==7)) || ((row==8&&column==4)||(row==8&&column==5)||(row==8&&column==6)||(row==8&&column==7)) || ((row==9&&column==4)||(row==9&&column==5)||(row==9&&column==6)||(row==9&&column==7)))
            {
                printf(" ");
            }
            
            else
            {
                printf("*");
            }
            
        }
        printf("\n");
    }
    
    return 0;
}
