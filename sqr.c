#include <stdio.h>
    #include<math.h>


int main ()

{

    float l,b,r,c,p,ar;

printf("Length=");
    scanf("%f", &l);

    printf("breath=");
        scanf("%f",&b);

p=2*(l+b); /* Perimeter of rectangle= 2*length*bredgth */
ar=l*b; /* Area of rectangle=length*brtedgth */

  printf("\nArea of rectangle=%f", ar);
     printf("\nPerimeter of rectangle=%f", p);
 
    if (p>ar)
    {
        printf("\n Perimeter is greater than area rectangle");
    }
    
    else 

    {
        printf("\nPerimeter is less than area of rectangle");
    }

return 0;

}