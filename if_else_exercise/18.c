#include <stdio.h>
void main()  
{  
    int cp,sp, cal; 

    printf("Input Cost Price: ");  
    scanf("%d", &cp);  
    printf("Input Selling Price: ");  
    scanf("%d", &sp);  
      
    if(sp>cp) 
    {  
        cal = sp-cp;  
        printf("\nYou can booked your profit amount : %d\n", cal);  
    }  
    else if(cp>sp) 
    {  
        cal = cp-sp;  
        printf("\nYou got a loss of amount : %d\n", cal);  
    }  
    else  
    {  
        printf("\nna profir hua na loss hua.\n");  
    }  
    return 0;
}  