#include <stdio.h>
int main ()
{
    int n = 0, largest1 = 0, largest2 = 0;
 
    printf ("Enter the size of the arry: \n");
    scanf ("%d", &n);
    int arry[n];
    
    for (int i = 0; i < n; i++)
    {
        printf ("arry[%d]: ",i);
        scanf ("%d", &arry[i]);
    }
 
    largest1 = arry[0];
    largest2 = arry[1];
 
    for (int i = 2; i < n; i++)
    {
        if (arry[i] > largest1)
        {
            largest2 = largest1;
            largest1 = arry[i];
        }
        else if (arry[i] > largest2 && arry[i] != largest1)
        {
            largest2 = arry[i];
        }
    }

    printf ("THE SECOND LARGEST = %d\n", largest2);
 
    return 0;
}
