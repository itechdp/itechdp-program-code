#include <math.h>

#include <stdio.h>
int main()

{

float a,b,c,area,sp;

printf("\nEnter sides of a triangle");
    scanf("%f %f %f", &a,&b,&c);

    sp=(a+b+c)/2;
area= sqrt(sp*(sp-a)*(sp-b)*(sp-c));

printf("Side of atriangle is:%f\n", area);

return 0;


}


