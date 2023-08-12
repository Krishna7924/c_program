#include <stdio.h>
int main ()
{
    int n = 0, largest = 0, smallest = 0;
 
    printf ("Enter the size of the arry: \n");
    scanf ("%d", &n);
    int arry[n];
    
    for (int i = 0; i < n; i++)
    {
        printf ("arry[%d]: ",i);
        scanf ("%d", &arry[i]);
    }
 
    largest = arry[0];
    smallest = arry[0];
 
    for (int i = 2; i < n; i++)
    {
        if (arry[i] > largest)
        {
            largest = arry[i];
        }
        else if (arry[i] < smallest)
        {
            smallest = arry[i];
        }
    }
    printf ("the largest no. = %d\n", largest);
    printf ("the smallest no. = %d\n", smallest);
 
    return 0;
}

