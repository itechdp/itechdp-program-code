#include <stdio.h>
#include <math.h>

int main ()

{

    int deg,result;

        printf("\nEnter degree of an angle");
            scanf("%d", &deg);

        result=(sin(deg)*sin(deg)+cos(deg)*cos(deg));

        printf("\nResult:%d", result);

}