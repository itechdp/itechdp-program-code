#include <stdio.h>

int main ()

{

int i,j,k;

    for ( i = 1; i <= 3; i++)
    {

                printf("\nI:%d",i);

        for ( j = 1; j <=3; j++)
        {
                printf("\nJ:%d",j);

            for ( k = 1; k <= 3; k++)
            {
                printf("\nK:%d",k);                
                
                printf("\n%d %d %d",i,j,k);
            }
            
        }

    return 0; 
    }

}