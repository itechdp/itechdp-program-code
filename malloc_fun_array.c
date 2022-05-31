#include <stdio.h>
#include <stdlib.h>

int main()
{

    int max, *p, i;

    printf("Enter the size of array");
    scanf("%d", &max);

    p = (int *)malloc(max * sizeof(int));

    for (i = 0; i <= max; i++)
    {
        p[i] = i * i;
        printf("%d\n",p[i]);
    }

    return 0;
}
