#include <stdio.h>

int main()
{

    int a[3][3], b[3][3], sum[3][3];
    int i, j;

    printf("Enter the element of the matrix A:\n ");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("A[%d][%d]: ",i, j);
            scanf("%d", &a[i][j]);
        }
    }
    printf("\n");
    printf("Enter the element of the matrix B:\n ");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("B[%d][%d]: ", i, j);
            scanf("%d", &b[i][j]);
        }
    }
    printf("\nAddition of matrix A and B:");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            sum[i][j] = a[i][j] + b[i][j];
            printf("\n");
            printf("a[%d][%d] + b[%d][%d]:%d",i,j,i,j,sum[i][j]);
        }
    }

    return 0;
}