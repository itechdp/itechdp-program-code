#include <stdio.h>

int main(){

    int a[] = {1,2,3,5,4,5};

    printf("Printing all the elements:\n");

    for(int i=0;i<6;i++)
        printf("\t%d",a[i]);

    printf("\nEnter the element you want to delete:\n ");
    int pos;
    scanf("%d",&pos);

    for(int j=pos-1;j<=6;j++)
        a[j] = a[j+1];
    
     for(int i=0;i<6;i++)
        printf("\t%d",a[i]);

}