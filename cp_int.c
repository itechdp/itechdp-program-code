#include <stdio.h>
#include <math.h>

int main()
{
    float p,q,r,n,a;
    int count;

 for ( count = 1; count <= 10 ; count++)
 {
     printf("Enter principal amount=");
        scanf("%f",&p);
    
    printf("Enter Number of years=");
        scanf("%f",&q);

    printf("Enter Rate of interest=");
        scanf("%f",&r);

    r=r/100;

    printf("Enter no of times you compound per year=");
        scanf("%f",&n);

       

    a=p*pow( (1+(r/q)), n * q );

    printf("%f\n\n",a);

      
 }

  return 0;

} 