#include <stdio.h>
int main ()
{
    int n = 0, max = 0, min = 0;
 
    printf ("Enter the size of the arry: \n");
    scanf ("%d", &n);
    int arry[n];
    
    for (int i = 0; i < n; i++)
    {
        printf ("arry[%d]: ",i);
        scanf ("%d", &arry[i]);
    }
 
    max = arry[0];
    min = arry[0];
 
    for (int i = 2; i < n; i++)
    {
        if (arry[i] > max)
        {
            max = arry[i];
        }
        else if (arry[i] < min)
        {
            min = arry[i];
        }
    }
    printf ("the max no. = %d\n", max);
    printf ("the min no. = %d\n", min);
 
    return 0;
}


