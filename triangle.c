#include <stdio.h>
 #include <math.h>

 int main ()

 {

    float a,b,c;

    printf("\nEnter a side of a triangle=");
        scanf("%f %f %f", &a, &b, &c);



    if (a+b+c==180)
    {
        printf("\n Its a valid triangle");
    }
    
    else if (a+b+c!=180)
    {
        printf("\n its a invalid triangle");
    }
 }