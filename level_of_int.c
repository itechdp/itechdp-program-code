#include <stdio.h>

int main()
{

   
    // i = 2 + ( y + 0.5 * x )

    int y;
    float x,i;
     
    printf("i\ty\tx\n");

    for ( y = 1; y <= 6; y++)
    {
         
        
        for ( x = 0.5; x <= 12.5; x=x+=0.5)
        {
          
           i = 2 + ( y + 0.5 * x ) ;
            
            printf("I=%.2f\t\tY=%d\tX=%.2f\n",i,y,x);
        }
        
    }
    
}