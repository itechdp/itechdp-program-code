#include <stdio.h>

int main()

{
    int i,j,sum;

        for ( i = 1 ; i < 3; i++) //Outer for loop always work as per the inner for loop's expression!!! 
        {                           
           for (j = 1; j < 5; j++)
           {
               sum=i+j;
           printf("\nI(%d) + J(%d) Sum=%d",i,j,sum);

           }
           
            
        }
        
        return 0;
}