// Funcition with argument and return value

/* 

int sum(int a, int b) //Function define
{
    return a+b;
}

c= sum(a,b); //Function call

int sum(int a, int b); //Function decelration */

#include <stdio.h> 

int sum(int a, int b); //Function decelration


int sum(int a, int b) //Function
{
    return a+b;
}

int main()
{

    int a,b,c;

    printf("Enter a number A and B");
    scanf("%d %d",&a,&b);

    c= sum(a,b); //Function call

    printf("The Sum of %d and %d = %d",a,b,c);



}

