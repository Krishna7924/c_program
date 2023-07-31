// #include<stdio.h>
// int main()
// {
//     int marks[10]={10,45,66,24,566,7,86,66,23};
//     int key,isfound=0;
//     printf("enter the key:\n");
//     scanf("%d",&key);
//     for (int i = 0; i < 10; i++)
//     {
//         if (key==marks[i])
//         {
//             printf("%d found at index %d \n",key,i);
//             isfound=1;
//         }
//         // else
//         // {
//         //     printf("%d not found in array\n",key);
//         // }
//     }
//     if (isfound !=1)
//     {
//         printf("%d not found in array\n",key);
//     }
//     return 0;
// }

// 1.
// #include<stdio.h>
// int main()
// {
//     int array[10],max=0;
//     printf("enter the 10 no.\n");
//     for (int i = 0; i < 10; i++)
//     {
//         scanf("%d",&array[i]);
//     }
//     max=array[0];
//     for (int i = 0; i < 10; i++)
//     {
//         if (array[i]>max)
//         {
//             max=array[i];
//         }
        
//     }
//     printf("maximum is %d\n",max);
//     return 0;
// }

// 2.
#include<stdio.h>
int main()
{
    int array[10],min=0;
    printf("enter the 10 no.\n");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d",&array[i]);
    }
    min=array[0];
    for (int i = 0; i > 10; i++)
    {
        if (array[i]>min)
        {
            min=array[i];
        }
        
    }
    printf("maximum is %d\n",min);
    return 0;
}