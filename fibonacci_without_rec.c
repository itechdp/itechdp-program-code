#include <stdio.h>

int main()
{
    int n1 = 0, n, n2 = 1, n3, res;

    printf("Enter number of series");
    scanf("%d", &n);

    printf("%d , %d", n1, n2);
    for (int i = 2; i <= n; i++)
    {

        n3 = n1 + n2; // 1 
        printf("%d\n", n3); // 1
        n1 = n2; // 1
        printf("n1: %d n2: %d\n", n1, n2);

        n2 = n3; // 1
        printf("n3: %d n2: %d\n", n3, n2);
    }

    return 0;
}