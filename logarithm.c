#include <stdio.h>
#include <math.h>

int main()

{
    float x,res=0.0;
    int i;

    printf("Enter value of x\n");  
    scanf("%f", &x);  

    for ( i = 1; i <= 7; i++)
    {
        if (i==1)
        {
            res=(x-1)/x;
        }

        else 

        res=res+pow((x-1)/x,i)*0.50;
        
    }

    printf("Result of first of 7 terms=%.2f\n",res);
    
return 0;

}    
