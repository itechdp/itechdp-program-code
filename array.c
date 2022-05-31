#include<stdio.h>

int b = 210;

int main()
{
      
    printf("%d",b);
    //How to declare an array , inialize the array and how to print all the element of an array.
    int a[10];
    int i;


    for ( i = 0; i < 10; i++)
    {
        scanf("%d",&a[i]);
    }
    
    
    
    for ( i = 0; i < 10; i++)
    {
        printf("\na[%d] %d",i,a[i]);
    }
    



    return 0;
}