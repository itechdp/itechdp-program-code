#include <stdio.h>

int main ()

{

    float p,l,cp,sp;

    printf("\nEnter Cost price=");
        scanf("%f", &cp);

    printf("\nEnter selling price=");
        scanf("%f", &sp);

    p= sp-cp; // if sp = 30 cp = 20 then sp-cp = 30-20 10rs profit
    l= cp-sp; // if cp = 30 sp=20 then cp-sp = 30-20= 10rs loss

    if (p>0)
    
        printf("\n The profit is Rs.%f", p);
    

    if (l>0)
    
        printf("\n The loss is Rs.%f", l);
    

    if (p==0)
    
        printf("\n No profit No loss");
    

    return 0;

}