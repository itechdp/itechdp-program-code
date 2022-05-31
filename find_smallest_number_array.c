#include <stdio.h>

int main()
{
    int arr[5];
    int i;

    printf("\nEnter any 5 numbers\n");

    for (i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }

    int smallest; 

    smallest=arr[0];

    for ( i = 0; i < 5; i++)
    {
        if (arr[i]<smallest)
        {
            smallest = arr[i];   
        }
        
    }
    
    printf("\nThe smallest number of an array is:%d",smallest);

    return 0;
}

//here for loop runs for the condition when the arr[0] is less than other elements if the conditon is true then the arr[0] is smallest otherwise 
// loop runs for next element when if condtion will get true the other next element will be false... because