#include <stdio.h>

int main()
{
    int a=10;

    int *p;

    p=&a;

    printf("The value of a is:%d",a);

    printf("\nThe address of a is:%x",&a); //1000

    printf("\nThe value of a using p pointer is:%d",*p); //p is storing 1000 now what is the value on that stored address just print that value

    printf("\nThe address of p is:%x",&p);
}