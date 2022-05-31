#include <stdio.h>

int main()
{

    int a[] = {1, 2, 3, 4, 5};

    int pos, ele;

    printf("Printing all the elements of the array!\n");

    for(int i=0;i<4;i++)
        printf("\t%d",a[i]);

    printf("\nEnter the position you want to add the new element: ");
    scanf("%d",&pos);

    printf("\nEnter the element you want to add: \n");
    scanf("%d",&ele);

    
    for(int j=5;j>=pos;j--)
        a[j] = a[j-1];

    a[pos] = ele;
   
    printf("New array with inserted element");
      for(int i=0;i<5;i++)
        printf("\t%d",a[i]);
        
}