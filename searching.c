#include <stdio.h>

int main()
{
    int a[] = {1,2,3,4,50,6};

    printf("Printing all the elements:\n");

    for(int i=0;i<6;i++)
        printf("\t%d",a[i]);

    printf("\nEnter the element you want to search:\n ");
    int ele;
    scanf("%d",&ele);

    for(int k=0;k<6;k++){

        if (ele == a[k]){

            printf("%d found at position %d",ele,a[k]);
        }
    }


}