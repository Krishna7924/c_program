#include <stdio.h>
int main ()
{
    int n = 0, smallest1 = 0, smallest2 = 0;
 
    printf ("Enter the size of the arry: \n");
    scanf ("%d", &n);
    int arry[n];
    
    for (int i = 0; i < n; i++)
    {
        printf ("arry[%d]: ",i);
        scanf ("%d", &arry[i]);
    }
 
    smallest1 = arry[0];
    smallest2 = arry[1];
 
    for (int i = 2; i < n; i++)
    {
        if (arry[i] < smallest1)
        {
            smallest2 = smallest1;
            smallest1 = arry[i];
        }
        else if (arry[i] < smallest2 && arry[i] != smallest1)
        {
            smallest2 = arry[i];
        }
    }

    printf ("THE SECOND smallest = %d\n", smallest2);
 
    return 0;
}
