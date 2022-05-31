 //area = 3.14 r*r
// radius = 2 * 3.14 * r

#include <stdio.h>

void ar(int , float *, float * );

int main()

{
    int radius;
    float area,perimeter;

    printf("Enter Radius of circle=");
    scanf("%d",&radius);

    ar(radius, &area ,&perimeter);

    printf("Area=%f\n",area);
    printf("perimeter=%f\n", perimeter);

    return 0;

}

void ar(int r, float *arc , float *peri)
{
    *arc= 3.14*r*r;
    *peri=2*3.14*r;
}
 