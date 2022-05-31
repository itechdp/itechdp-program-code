#include <stdio.h>

int main()
{
    int i,n,count=0;
    int ser[] = {7,10,15,16,18,14,7,20,7};

    printf("\nEnter the element of an array");
    scanf("%d",&n);

    for ( i = 0; i < 9 ; i++)
    {
        if (ser[i]==n)
        {
            count++;
        }
        
    }
    printf("The element %d, present %d times",n,count);
    


}