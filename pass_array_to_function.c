#include <stdio.h>

void display1(int);
void display2(int *);

int main()
{

    int arr[] = {10, 20, 30, 40, 50};
    int i;

    for (i = 0; i < 5; i++)
    {
        display1(arr[i]);
    }

    for (i = 0; i < 5; i++)
    {
        display2(&arr[i]);
    }
}

void display1(int n)
{

    printf("\n%d", n);
}

void display2(int *m)
{
    printf("\n%d", *m);
}