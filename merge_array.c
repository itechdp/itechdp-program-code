#include <stdio.h>

int main(){

    int n3 , n1 , n2;
    printf("Enter the size of your First array: ");
    scanf("%d",&n1);

    printf("\nEnter the size of second array: ");
    scanf("%d",&n2);

    n3 = n1 + n2;

    //Here we are declaring our size of array as per the variable size 
    int a[n1] , b[n2] ,c[n3];

    printf("\nEnter the element of Array A: ");
    
    int i; 

    for ( i = 0; i < n1; i++)
    {
        scanf("%d",&a[i]);
    }
    
    printf("\nEnter the element of Array B: ");

    for ( i = 0; i < n2; i++)
    {
        scanf("%d",&b[i]);
    }

    for ( i = 0; i < n1; i++)
    {
        c[i] = a[i];
        printf("\t[%d]",c[i]);
    }

    //Below logic has been implemented because of when we are assigning the value of a to c then we are using i as iterable variable,
    // so in next loop when we are assigning value of b to c with i iterable it is again stats from i = 0 == c[0] which is already taken by a variable value
    // thats why if we want to contiue our index so we are using k=i where i (last value of iteration) so k contains  value index as same as i now
    // we are iterating k to the next position where i was stopped, so to get rid of overlaping of the element we are using k = i where k used for 
    // continue index iteration.
    int k=i;    
    for ( i = 0; i < n2; i++)
    {
        c[k] = b[i];
        printf("\t[%d]",c[i]);
        k++;
    }

    printf("\nPrinting the element of merged array C:\n ");

      for ( i = 0; i < n3; i++)
    {
        printf("\t[%d]",c[i]);
    }
    
  
    return 0;

}