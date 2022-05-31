#include <stdio.h>

int main()
{
    int area, peri, radius;

    printf("\nEnter the radus");
    scanf("%d",&radius);

    circle(&area,&peri,radius);
    printf("\nArea of circle:%d",area);
    printf("\nArea of peri:%d",peri);

}

int circle(int *a, int *p, int r)
{
    const int pie = 3.14;

    *a = pie * r * r;
    *p = 2 * pie * r;
}