#include <stdio.h>

int main()
{
    int a = 1, *x;
    float b = 10.5, *y;
    char c = 'f', *z;

    x = &a;
    y = &b;
    z = &c;

    printf("\nThe value  \nA:%d \nB:%f \nC:%c", a, b, c);
    printf("\nThe adress \nA:%u \nB:%u \nC:%u", x, y, z);
    x++;
    y++;
    z++;

    printf("\nThe new adress \nA:%u \nB:%u \nC:%u", x, y, z);

    return 0;
}