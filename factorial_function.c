#include <stdio.h>

int factorial(int);

int main()
{
    int fact,num;

    printf("Enter a number=");
    scanf("%d",&num);
    
    fact= factorial(num);

    printf("Factorial of %d is %d",num,fact);


}

int factorial(int num)
{
    int fact=1,i;

    for ( i = 1; i <= num; i++)
    {
      fact=fact*i; 
    }

    return (fact);
    
}