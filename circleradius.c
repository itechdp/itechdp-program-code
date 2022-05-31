#include <stdio.h>

int main ()

{

    float l,b,r,c,p,ar,ac;

printf("Length=");
    scanf("%f", &l);

    printf("breath=");
        scanf("%f",&b);

p=2*(l+b); /* Perimeter of rectangle= 2*length*bredgth */
ar=l*b; /* Area of rectangle=length*brtedgth */



printf("\nEnter the Radfius of cirle=");
    scanf("%f",&r);

c=2*3.14*r; /* circumfrance formula =2*pie*Radius */
ac=3.14*r*r; /* Area of circle= 3.14*Radius*Radius */


        printf("\nArea of circle=%f", ac);
            printf("\nCircumfrance of circle=%f", c); /*Fannie good morning*/
                printf("\nArea of rectangle=%f", ar);
                     printf("\nPerimeter of rectangle=%f", p);

            return 0;
}