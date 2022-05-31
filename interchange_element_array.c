#include <stdio.h>

int main()
{

    int ele[] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    int temp, i;

    for (i = 0; i < 10; i = i + 2)
    {
        temp = ele[i];
        ele[i] = ele[i + 1];
        ele[i + 1] = temp;
    }

    for (i = 0; i <= 9; i++)
    {
        printf("%d\t", ele[i]);
    }
}