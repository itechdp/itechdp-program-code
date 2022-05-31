#include <stdio.h>

int main ()

{

    int num,revnum=0,n;

        printf("\n Enter a five digit no=");
            scanf("%d", &n);

    num=num; //12345 

    while (n!=0)
    {
        revnum=revnum*10; //12345*10 123450

        revnum=num%10+revnum; //123450 = 12345 %10 = 1234.5 +123450

        num=num/10; 
    }
    
    printf("Reversed Number of %d is %d\n",n, revnum);

    if (n==revnum)
        printf("Input Number %d & Reversed Number %d are equal", n, revnum);
    else
        printf("Input Number %d & Reversed Number %d are not equal", n, revnum);

   return 0;

}