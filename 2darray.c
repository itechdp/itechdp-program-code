#include<stdio.h>

int main()
{
    int a[2][2] , b[2][2];

    printf("\nEnter the Element of all the 2-d Array.");

    int i;
    int j;
    printf("\n\nEnter the element of a first array:");
    for ( i = 0; i < 2; i++)
        for ( j = 0; j < 2; j++)
            scanf("%d",&a[i][j]);
        
    
     printf("\n\nEnter the element of a second array: ");
    for ( i = 0; i < 2; i++)
        for ( j = 0; j < 2; j++)
            scanf("%d",&b[i][j]);
        
        
    
    
    printf("\n\nElement of first array:");
      for ( i = 0; i < 2; i++)
        for ( j = 0; j < 2; j++)
            printf("\nA[%d][%d] : [%d]",i,j,a[i][j]);
        
        
    

    printf("\n\nElement of second array:");
      for ( i = 0; i < 2; i++)
        for ( j = 0; j < 2; j++)
            printf("\nB[%d][%d] :[%d]",i,j,b[i][j]);
        
}