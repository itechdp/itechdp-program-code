#include <stdio.h>

int multi(int x);

int main()
{
    int num, sum;

    printf("Enter number");
    scanf("%d", &num);

    sum = multi(num);

    printf("\nThe value of %d is %d", num, sum);
}

int multi(int x)
{

    if (x != 0)
    {

        return x * multi(x - 1);
    }

    else
    {
        return 1;
    }
}