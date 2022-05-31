#include <Stdio.h>

int main ()

{
    int i,y,pow2;
    float x,power;

    printf("\nEnter two numbers");
        scanf("%f %d", &x,&y);

        power = i = 1;

        while (i<=y);
        {
            power=power*x;
            i++;
        }
 
       printf("\n%f the power of %d = %f", y,x,power);
       return 0;
       }