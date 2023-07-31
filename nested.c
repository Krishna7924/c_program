// // 1.
// #include<stdio.h>
// int main()
// {
//     for (int i = 0; i < 5; i++)
//     {
//         for (int j = 0; j < 5; j++)
//         {
//             printf("*");
//         }
//         printf("\n");
//     }
//     return 0;
// }

// // 2.
// #include<stdio.h>
// int main()
// {
//     // int row,col;
//     // printf("enter the row and column:\n");
//     // scanf("%d",&col);
//     for (int i = 0; i < 5; i++)
//     {
//         for (int j = 0; j <= i; j++)
//         {
//             printf("*");
//         }   
//         printf("\n");
//     }
//     return 0;
// }

// // 3.
// #include<stdio.h>
// int main()
// {
//     for (int i = 0; i < 5; i++)
//     {
//         for (int j = 5; j > i; j--)
//         {
//             printf("*");
//         }
//         printf("\n");
//     }
//     return 0;
// }

// // 4.
// #include<stdio.h>
// int main()
// {
//     for (int i = 1; i <= 5; i++)
//     {
//         for (int j = 1; j <= i; j++)
//         {
//             printf("%d",i);
//         }
//         printf("\n");
//     }
//     return 0;
// }

// // 5.
// #include<stdio.h>
// int main()
// {
//     for (int i = 1; i <= 5; i++)
//     {
//         for (int j = 1; j <= i; j++)
//         {
//             printf("%d",j);
//         }
//         printf("\n");
//     }
//     return 0;
// }

// // 6.
// #include<stdio.h>
// int main()
// {
//     for (int i = 0; i < 5; i++)
//     {
//         for (int j = 5-i; j > 0 ; j--)
//         {
//             printf("%d",j);
//         }
//         printf("\n");
//     }
//     return 0;
// }

// // 7.
// #include<stdio.h>
// int main()
// {
//     for (int i = 0; i < 5; i++)
//     {
//         for (int j = 1; j < 6-i; j++)
//         {
//             printf("%d",j);
//         }
//         printf("\n");
//     }
//     return 0;
// }

// // 8.
// #include<stdio.h>
// int main()
// {
//     for (int i = 0; i < 5; i++)
//     {
//         for (char j = 65; j <= 65+i; j++)
//         {
//             printf("%c",j);
//         }
//         printf("\n");
//     }
//     return 0;
// }

// // 10.
// #include<stdio.h>
// int main()
// {
//     for (int i = 0; i < 5; i++)
//     {
//         for (int space = 1; space <= i; space++)
//         {
//             printf(" ");
//         }
//         for (int k = 5; k > i; k--)
//         {
//             printf("*");
//         }
//         printf("\n");
//     }
//     return 0;
// }

// // 11.
// #include<stdio.h>
// int main()
// {
//     for (int i = 0; i < 5; i++)
//     {
//         for (int j = 5; j > i; j--)
//         {
//             printf(" ");
//         }
//         for (int k = 0; k <= i; k++)
//         {
//             printf("*");
//         }
//         printf("\n");   
//     }
//     return 0;
// }

// // 12.
// #include<stdio.h>
// int main()
// {
//     for (int i = 0; i <= 5; i++)
//     {
//         for (int j = 5; j > i; j--)
//         {
//             printf(" ");
//         }
//         for (int k = 0; k < i; k++)
//         {
//             printf("* ");
//         }
//         printf("\n");   
//     }
//     return 0;
// }

// // 13.
// #include<stdio.h>
// int main()
// {
//     for (int i = 0; i < 5; i++)
//     {
//         for (int k = 0; k < i; k++)
//         {
//             printf(" ");
//         }
//         for (int j = 5; j > i; j--)
//         {
//             printf("* ");
//         }
//         printf("\n");
//     }
//     return 0;
// }

// // 14.
// #include<stdio.h>
// int main()
// {
//     for (int i = 0; i < 5; i++)
//     {
//         for (int j = 4; j > i; j--)
//         {
//             printf(" ");
//         }
//         for (int k = 0; k <= i; k++)
//         {
//             printf("%d",k+1);
//         }
//         for (int L = 0; L < i; L++)
//         {
//             printf("%d",i-L);
//         }
//         printf("\n");
//     }
//     return 0;
// }
