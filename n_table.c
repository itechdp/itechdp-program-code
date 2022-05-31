#include <stdio.h>

int main()

{
    int i,num,sum;

    printf("Enter number of your table=");
        scanf("%d",&num);
    for ( i = 1; i <= 10; i++)
    {
        printf("\n%d * %d = %d",num,i,num*i);
    }
    
}