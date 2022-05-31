#include <stdio.h>
    #include <math.h>

    int main() 

    {
        int c,d,t;

    printf("\nEnter the value of C=");
        scanf("%d", &c);

    printf("\nEnter the value of D=");
        scanf("%d", &d);

    t=c;
    c=d;
    d=t;


    printf("\n Value of C=%d",c);

        printf("\n Value of D=%d",d);
    return 0;

    }