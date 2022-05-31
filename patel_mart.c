//show item list
//enter a purchased item code
//sum of all purchased item 

#include <stdio.h>
#include <stdlib.h>

int tot(int a, int b, int c, int d,int e);

int main()
{
    int item,sum=0,qua,price,total,que,gt;

    printf("\nWelcome to Patel Mart");

    do
    {
        printf("\n\nEnter Item No.=");
        scanf("%d",&item);

            switch (item)
        {
        case 1:
            
            printf("\nI phone");
        
            tot(qua,price,sum,total,gt);
        
            break;

        case 2:

            printf("\nI pad");
            
            tot(qua,price,sum,total,gt);

            break;

        case 3: 

            printf("\nBiscuit");

            tot(qua,price,sum,total,gt);

            break;

        case 4: 

            printf("\nmac Book");

            tot(qua,price,sum,total,gt);

            break;
        
        default:
            printf("\n\nEnter Valid item code");
            exit(0);
            break;
        }

        
       


    } while (que==1);


    return 0;

  
   
}


int tot(int a, int b, int c, int d , int e )
{
    int f;
     printf("\n\nEnter Quantity=");
        scanf("%d",&a);

        printf("\nEnter price=");
        scanf("%d",&b);

        c=a*b;
        

        printf("\n\nsub Total=%d",c);

         fflush(stdin);

        printf("\n\nAdd Item (1)\nExit(2)\nYour Choice=");
        scanf("%d",&d);


        if (d==1)
        {        
            tot(a,b,c,d,e);

        }

            f=a*b;

            e=c+f;

            printf("\n\nGrand Total=%d",e);
        

    

        if (d==2)
        {
            printf("\nThank You for shopping with us!!!");
            printf("\nContact us:8490906509");
            exit(0);
        }

        return (e);

}


    
