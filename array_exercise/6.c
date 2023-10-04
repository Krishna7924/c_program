#include<stdio.h>
int main()
{
    int n;
    printf("enter the size of the arry: ");
    scanf("%d",&n);
    int arry1[n],arry2[n],arry3[n],commoncount=0;
    for (int i = 0; i < n; i++)
    {
        printf("arry1[%d]= ",i);
        scanf("%d",&arry1[i]);
    }
    printf("\n");
    for (int i = 0; i < n; i++)
    {
        printf("arry2[%d]= ",i);
        scanf("%d",&arry2[i]);
    }
    // for (int i = 0; i < n; i++)
    // {
    //     if (arry1[i]==arry2[i])
    //     {
    //         printf("common elemnts are %d\n",arry1[i]);
    //     }
    // }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (arry1[i]==arry2[j])
            {
                arry3[commoncount]=arry1[i];
                commoncount++;
            }
        }
    }
    printf("the common element are:\n");
    for (int i = 0; i < commoncount; i++)
    {
        printf("%d\t",arry3[i]);
    }
    
    return 0;
}
