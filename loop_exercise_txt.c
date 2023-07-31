// // 1.
// #include<stdio.h>
// int main()
// {     
//     for (int i = 1; i <= 100; i++)
//     {
//        printf("%d\n",i);
//     }
//     return 0;
// }

// // 2.
// #include<stdio.h>
// int main()
// {
//     int sum=0;
//     for (int i = 0; i <= 10; i++)
//     {
//         printf("%d\n",i);
//         sum=sum+i;
//     }
//     printf("the sum is : %d",sum);
//     return 0;
// }

// // 3.
// #include<stdio.h>
// int main()
// {
//     int sum=0;
//     for (int i = 0; i <= 10; i++)
//     {
//         printf("%d\n",i);
//         sum=sum+i;
//     }
//     printf("the sum of natural number upto 10 terms %d",sum);
//     return 0;
// }

// // 4.
// #include<stdio.h>
// int main()
// {
//     int sum=0;
//     float avg;
//     for (int i = 0; i < 10; i++)
//     {
//         printf("%d\n",i);
//         sum=sum+i;
//     }
//     avg=sum/10.00;
//     printf("sum of 10 no. is %d\n",sum);
//     printf("average is %f",avg);
//     return 0;
// }

// // 5.
// #include<stdio.h>
// int main()
// {
//     int num,cube;
//     printf("enter the no.:\n");
//     scanf("%d",&num);
//     for (int i = 1; i <= num; i++)
//     {
//         cube=i*i*i;
//         printf("Number is : %d and cube of the %d is :%d\n",i,i,cube);
//     }
//     return 0;
// }

// // 6.
// #include<stdio.h>
// int main()
// {
//     int num,mul;
//     printf("enter the no. :\n");
//     scanf("%d",&num);
//     for (int i = 1; i <= 10; i++)
//     {
//         mul=num*i;
//         printf("%d x %d = %d\n",num,i,mul);
//     }
//     return 0;
// }

// // 7.
// #include<stdio.h>
// int main()
// {
//     int num;
//     for (int i = 1; i <= 10; i++)
//     {
//         for (int j = 1; j <= 8; j++)
//         {
//             num=i*j;
//             printf("%2dx%2d = %2d,",j,i,num);
//         }
//         printf("\n");
//     }
//     return 0;
// }