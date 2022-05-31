#include <stdio.h>


int rec(int x);
int main()
{

    int fact, a;

    printf("Enter any number=");
    scanf("%d", &a);

    fact=rec(a);

    printf("\nFactorial value=%d",fact);
}

int rec(int x)
{

    int f;

    if (x == 1)
    {
        return 1;
    }

    else
        f = x * rec(x - 1);

    return (f);
}