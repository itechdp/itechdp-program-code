#include <stdio.h>

int prime_rec(int n, int i);
int main()
{

    int num;

    printf("Enter a any number: ");
    scanf("%d", &num);

    printf("\nPrime number are:");
    prime_rec(num, 2);

    return 0;
}

int prime_rec(int n, int i)
{

    if (i <= n)
    {
        if (n % i == 0) //6/2 = 3 = 0 || 3/3 = 1
        {
            printf("%d", i); // 2 and 3
            n = n / i; // 3
        }
        else
        {
            i++; // 3
        }
        
    }
}