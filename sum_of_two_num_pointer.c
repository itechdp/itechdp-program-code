// take 3 variables
// assign value to those variables
// using pointer store the two variable adress
// apply the logic of sun of two nunbers
// store in 3rd varible and check this out using pointers value is sum of two numbers is printed or not

#include <stdio.h>

int main()
{

    int a, b, c;

    int *p, *q;

    p = &a;
    q = &b;

    printf("Enter the value of a\n");
    scanf("%d",&a);

    printf("Enter the value of b\n");
    scanf("%d",&b);


    c = *p + *q;

    printf("\nThe sum of two numbers using pointer is:%d",c);

}

