#include <stdio.h>

int main ()

{
    int num=0; 

    char que=1;

while (que<=3 || que=='y')
{
     printf("Enter a number=");
            scanf("%d",&num);

        printf("The square of %d is %d",num,num*num);

        fflush(stdin);

        printf("\nWant to do with another number?\n Press:(y/n)=");
            scanf("%c",&que);

          if (que=='y')
            continue;
          que++;
          
          if (que=='n')
            break;

       
          
}

 
    
}

   // do
    // {
    //     printf("Enter a number=");
    //         scanf("%d",&num);

    //     printf("The square of %d is %d",num,num*num);

    //     fflush(stdin);

    //     printf("\nWant to do with another number?\n Press:(y/n)=");
    //         scanf("%c",&que);

    // } while (que=='y');