#include <Stdio.h>
#include <math.h>

// calculator opetrator : +,-,*,/,++,--,+-,-+;


int main ()

{
    int sum,a,b,alg,sp;
    char que;

   

do
{
    printf("Simple Calculation = Press (1)\nAlgebraic Calculation = Press (2) ");
    scanf("%d",&sp);

    if (sp==1)
    {
        
    printf("Enter (0) for Addition\nEnter (1) for Subtraction\nEnter (2) for Multiplication\nEnter (3) for division");
    scanf("%d",&sum);
     
    printf("\nEnter a First number=");
        scanf("%d",&a);

    printf("\nEnter a Second number=");
        scanf("%d",&b);

    switch (sum)
    {
        case 0 : 
            printf("\n%d + %d = %d", a,b,a+b);
            break;
        
        case 1 : 
            printf("\n%d - %d = %d", a,b,a-b);
            break;
        
        case 2 : 
            printf("\n%d * %d = %d", a,b,a*(b));
            break;

         case 3 : 
            printf("\n%d / %d = %d", a,b,a%(b));
            break;

        default:
            printf("\nEnter a valid expression");
            break;
       
        }

    }

    if (sp==2)
    {
        
    printf("Enter (4) for (a + b) = a2 + 2ab + b2\nEnter (1) for Subtraction\nEnter (2) for Multiplication\nEnter (3) for division");
    scanf("%d",&sum);
     
    printf("\nEnter a First number=");
        scanf("%d",&a);

    printf("\nEnter a Second number=");
        scanf("%d",&b);

    switch (sum)
    {
        case 4 : 
            printf("\n(%d + %d) = %d + 2%d%d + %d", a,b,a,a,b,b,(a*a)+(2*a*b)+(b*b));
            break;
        
        case 5 : 
            printf("\n%d - %d = %d", a,b,a-b);
            break;
        
        case 6 : 
            printf("\n%d * %d = %d", a,b,a*(b));
            break;

         case 7 : 
            printf("\n%d / %d = %d", a,b,a%(b));
            break;

        default:
            printf("\nEnter a valid expression");
            break;
       
        }

    }
    
    
   
        fflush(stdin);

        printf("\nWant to do with another number (y/n)");
            scanf("%s",&que);


}   while (que=='y');
    
       

}
