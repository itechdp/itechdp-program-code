#include <stdio.h>

int main ()

{
    int num,que;
    // char que;

    for (que=1; que=1 ; num++)
    {
       printf("Enter a number=");
            scanf("%d",&num);

        printf("Square of %d is %d",num,num*num);

        printf("\nYou want to do with another number? Press(1=Yes/2=No)");
            scanf("%d",&que);

            if (que==2)
                break;     

            if (que==1)
                continue;
                   
    }
    

}