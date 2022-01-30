#include <stdio.h>

int main()
{
    int arr[25];
    int i, count_pos = 0, count_neg = 0, count_even = 0, count_odd = 0;

    printf("\nEnter the element of an array\n");

    for (i = 0; i < 24; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < 24; i++)
    {
        if (arr[i] > 0)
        {
            count_pos++;
        }
    }

    for (i = 0; i < 24; i++)
    {
        if (arr[i] < 0)
        {
            count_neg++;
        }
    }

    for (i = 0; i < 24; i++)
    {
        if (arr[i] % 2 == 0)
        {
            count_even++;
        }

        else
        {
            count_odd++;
        }
    }

    printf("\nIn our 25 number %d postive %d negative %d even %d odd no", count_pos, count_neg, count_even, count_odd);
}