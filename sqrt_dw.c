#include <stdio.h>

int main ()

{
    int num,que;
    // char que;

    do
    {
        printf("Enter a number=");
            scanf("%d",&num);

        printf("Square of %d is %d",num,num*num);

        printf("\nYou want to do with another number? Press(1=Yes/2=No)");
            scanf("%d",&que);

    } while (que==1);
    
}