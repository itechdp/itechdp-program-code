#include <stdio.h>

int takebday();//Function declaration

int takebday() // Function definitrion
{
    int n;

    printf("Enter your birthday");
    scanf("%d",&n);
    return n;
}

int main()
{
    int c;

    c = takebday(); //Function call

    printf("Your birth date is=%d",c);
}