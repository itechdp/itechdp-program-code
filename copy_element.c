#include <stdio.h>

int main()
{

    int arr1[5], arr2[5], i, j;

    printf("Enter the value of element\n");
    for (i = 0; i <= 4; i++)
    {
        scanf("%d", &arr1[i]); // this for loop running to adding the value of array in their index
    }

    for (i = 0, j = 4; i <= 4; i++, j--)
    {
        arr2[j] = arr1[i]; // here we are incrementing the i on each itration and decrement the j so we can add the value of arr1[0] in arr2[4]
    }

    printf("The element in reverse order");
    for (i = 0; i <= 4; i++)
    {
        printf("\n%d\t", arr2[i]); // printerd the value which is stored in arr2[] array 
    }
}