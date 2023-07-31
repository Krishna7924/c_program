// // 2.
// #include<stdio.h>
// int main()
// {
//     int matr[2][2],i,j,sum=0;
//     printf("enter the no.:\n");
//     for (i = 0; i < 2; i++)
//     {
//         for (j = 0; j < 2; j++)
//         {
//             scanf("%d",&matr[i][j]);
//             sum=sum+matr[i][j];
//         }  
//     }
//     printf("\nsum of all matr is %d",sum);
//     return 0;
// }

// // 3.
// #include<stdio.h>
// int main()
// {
//     return 0;
// }

//4.
#include<stdio.h>
int main()
{
    int matr[3][3],count;
    printf("enter the matrix:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d",&matr[i][j]);
        }   
    }
    // printf("the entered matrix is:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (matr[i][j]%2==0)
            {
               count++;
            }
        }
    }
     printf("\nthere are %d even no.",count);
    return 0;
}





// 5.
// #include<stdio.h>
// int main()
// {

//     return 0;
// }