#include <stdio.h>

int main()
{
    const float pie = 3.14;

    float r, area_p, area;

    float *rad;

    rad = &r;

    printf("\nEnter the radius");
    scanf("%f", &r);

    area_p = 2 * pie * *rad * *rad;
    area = 2 * pie * r * r;

    printf("\nArea of cicle using pointer is:%f", area_p);
    printf("\nArea of cicle without using pointer is:%f", area);
    printf("\nThe address of rad is:%x",&rad);
    printf("\nThe address of r is:%x",&r);


    return 0;
}