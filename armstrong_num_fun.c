#include <Stdio.h>

int armstrong(int r, int n, int s, int t);
int main()
{
    int rs, num, sum = 0, temp, result;

    printf("Enter No.");
    scanf("%d", &num);

    result = armstrong(rs, num, sum, temp);
}

int armstrong(int r, int n, int s, int t)
{

    t = n;

    while (n > 0)
    {
        r = n % 10;

        s = s + (r * r * r);

        n = n / 10;
    }

    if (t == s)
    {
        printf("%d is Armstrong No.", t);
    }

    else
    {
        printf("%d is Not an armstrong No.", t);
    }
}