#include <stdio.h>

int main()
{
    int n1, n2, n3, pos = 0;

    printf("Enter the size of Array1 and Array2:");
    scanf("%d %d", &n1, &n2);

    n3 = n1 + n2;

    int a[n1], b[n2], c[n3];

    printf("Enter the elements for both the array:");

    for (int j = 0; j < n1; j++)
        scanf("%d", &a[j]);

    for (int k = 0; k < n2; k++)
        scanf("%d", &b[k]);

    printf("\nArray 1 elements:");
    for (int j = 0; j < n1; j++)
        printf("\t%d", a[j]);
    printf("\n");

    printf("\nArray 2 elements:");
    for (int k = 0; k < n2; k++)
        printf("\t%d", b[k]);

    for (int j = 0; j < n1; j++)
    {
        c[pos] = a[j];
        pos++;
    }

    for (int i = 0; i < n2; i++)
    {
        c[pos] = b[i];
        pos++;
    }
    printf("\n\nNew merged array: ");
    for (int i = 0; i < n3; i++)
        printf("\t%d", c[i]);
}
