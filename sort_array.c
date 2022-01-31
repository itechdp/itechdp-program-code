// Sort the array

#include <stdio.h>

int main()
{
    int arr[25]; //0 1 2 3 4 
    int i,temp;

    printf("\nEnter the 25 numbers...");

    for ( i = 0; i < 25; i++)
    {
        scanf("%d",&arr[i]);
    }

    for ( i = 0; i < 25; i++)
    {
        if (arr[i]>arr[i +1])
        {
            temp = arr[i];
            arr[i] = arr[ i + 1];
            arr[ i +1] = temp;
        }

        printf("%d\t",arr[i]);
        
    }
    

    return 0;

}