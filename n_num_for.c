#include <stdio.h>

int main ()

{
    int i,n,sum=0;

    printf("\nEnter a value :");
        scanf("%d",&n);

        for ( i = 1; i <= n; i++)
        {                                                   
            sum=sum+i;   
            printf("\nSum(%d) + I(%d)",sum,i);                              
        }
        
        printf("\nThe sum of first %d is %d",n,sum);

        return 0;
        
}

/* LOGIC
 
SUM=0 , I =1 , N=(USER INPUT);

SUM (0) + I (1) =1
SUM (1) + I (2) =3
SUM (3) + I (3) =6
SUM (6) + I (4) =10
SUM (10) + I (5) =15
*/


