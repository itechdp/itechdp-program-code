//factorial: fact=fact*i
//Prime or not: num%i==0 not prime or i==num prime
//Odd or even: num%2==0 Even or Odd

#include <stdio.h>
#include <stdlib.h>

int main()

{
    int choice,num,i,fact;

    while (1)
    {
        printf("\n1. Factorial\n");
        printf("2. Prime or Not\n");
        printf("3. Odd or even\n");
        printf("4. Exit\n");
        printf("Your Choice?\n");
        scanf("%d",&choice);

        switch (choice)
        {
            case 1:

            printf("Enter a number for factorial=");
            scanf("%d",&num);

            fact=1;
            for ( i = 1; i <= num; i++)
            {
                fact=fact*i;
            }
            printf("Factorial value=%d\n",fact);
            
            break;

            case 2:

            printf("Enter a number=");
            scanf("%d",&num);

            for ( i = 2; i < num; i++)
            {
                    if (num%i==0)
                {
                    printf("%d is not a prime number\n",num);
                    break;
                }
            }
            
            if (i==num)
                {
                    printf("%d is prime number\n",num);
                    break;
                }

            break;
            
            case 3: 

            printf("\nEnter a number=");
            scanf("%d",&num);

            if (num%2==0)
            {
                printf("Even number");
                break;
            }

            else 
            {
                printf("Odd number");
                break;
            }
            
            break;
            
            case 4:
                exit(0); //Terminates program execution

        default:

        printf("Enter a correct choice\n");

        break;
        }
    }
    
   return 0; 
}