#include <Stdio.h>

int fab(int f);
int main()
{

    int value,res;

    printf("Enter fibonacci value: ");
    scanf("%d", &value);

    res=fab(value);

    printf("Fibonacci Value:%d", res);
}

int fab(int f)
{
    int sum;

    if (f > 0)
    {
         sum = fab(f - 1) + fab(f - 2);


    }

    else
    {
        return 0;
    }

    return (sum);
}