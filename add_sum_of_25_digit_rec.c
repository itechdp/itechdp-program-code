#include <stdio.h>

int addnum(int x);
int main()
{

    int num, sum;

    printf("Enter a positive No.");
    scanf("%d", &num);

    sum = addnum(num);

    printf("\nsum of %d is %d", num, sum);
}

int addnum(int x)
{

    if (x != 0)
    {
        printf("\n%d", x);
        return x + addnum(x - 1);
    }

    else
    {
        return x;
    }
}