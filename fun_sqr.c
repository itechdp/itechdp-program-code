#include <stdio.h>

float square(float);

int main()
{
    float a,b;

    printf("Enter any number=");
    scanf("%f",&a);

    b= square(a);

    printf("Square pf %f is %f",a,b);

    return 0;
}

float square(float x)
{
    float y;

    y=x*x;

    return (y);
}