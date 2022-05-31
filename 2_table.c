#include <Stdio.h>
#include <math.h>

int main ()

{

    int digit,sum;

    printf("\nEnter a digit=");
        scanf("%d",&digit);

        printf("\nEnter a sum=");
            scanf("%d",&sum);

        while (digit<sum)
        {

            digit++;

            printf("\nDigit=%d",digit);
        }
 
}