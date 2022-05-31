#include <stdio.h>
    #include <math.h>

int main()

{

int num1,num2,num3;

printf("\nEnter the value of Num1=, Num2=,Num3=");
    scanf("%d %d %d", &num1,&num2,&num3);

    if (num1>num3)
    {
        printf("\nNumber 1 is greater than number 3");
    }
    
    else 
    {
        printf("\nNumber 3 is greater than number 1");
    }

    if (num2>num3)
    {
        printf("\nNumber 2 is greatrer than number 3");
    }
    
    else
    {
        printf("\nNumber 3 is greater than number 2");
    }
    
    if (num3<num2<num1)
    {
        printf("\nNumber 3 is less than Number 1 and 2 ");
    }
    
    return 0;
}