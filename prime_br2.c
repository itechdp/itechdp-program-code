#include <stdio.h>

int main()

{
    int num, i, flag = 0;

    printf("Enter a number=");
    scanf("%d", &num);

    for (i = 2; i <= num / 2; ++i)
    {
        if (num % i == 0)
        {
            flag = 1;
            break;
        }
    }

    if (num == 1)
    {
        printf("1 is neither prime nor composite number");
    }
    else if (flag == 0)
    {
        printf("\nIt's a prime number");
    }

    else
    {
        printf("It's not a prime number");
    }
}