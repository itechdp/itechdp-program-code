#include <stdio.h>

int main ()

{
    int i=1 , j;
    float fact,sum=0.0;

    for ( i = 1; i <= 7; i++)
    {
        fact=1.0;

        for ( j = 0; j <= i; j++)
        {
            fact=fact*j;

            printf("\nFact:%f j:%d", fact,j);
        }
        
    }
    
}