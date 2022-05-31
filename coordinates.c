#include <stdio.h>
    #include <math.h>

int main()
{

float x,y,t,r;

float pie=314.25;

printf("\n Enter the valur of x,y"); 
    scanf("%f %f",&x , &y );

r=sqrt(x*x+y*y);

t=tan(y/x);

t=t*(180/pie);

printf("\n Polar co-ordinates (r,theta)= %f %f", r,t);

return 0;
} 