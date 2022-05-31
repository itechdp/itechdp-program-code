#include <stdio.h>

int main()
{
    int add[] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    int a = 10, *x, *y, *z, *v, *w;

    x = &a;

    x = x + 10; // pointer plus number

    printf("\nThe value of a is:%d and the adrress of a is:%u", *x, x);

    y = &a;

    *y = *y - 5; // pointer minus

    printf("\nThe value of a is:%d and the adrress of a is:%u", *y, y);

    v = &add[1];
    w = &add[8];

    printf("%d\n", w - v);

    if (v == w)
    {
        printf("The value of the array 1 and 8 stored at the same location");
    }

    else
    {
        printf("The value of the array 1 and 8 are not stored at the same location");
    }

    return 0;
}