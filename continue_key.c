#include<stdio.h>

int main()

{
    int age , i=5;

    

    for ( i = 1; i <= 5; i++)
    
    {
     
        printf("\nEnter your age");
            scanf("%d",&age);

        if (age<5)
        {
            printf("Your age is less than 5");
            break;
        }
        
        // Break statement used for terminate the loop after the given condition is true;

        if (age>10)
        {
            printf("Your age is greater than 10");
            continue;
        }

        // Continue statement is used for continue the loop. without jump into next block of statement... continue statement,
        // will terminate when as long as the loop's given condition is true;

    }
    
    return 0;
}