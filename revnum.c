#include <stdio.h>

#include <math.h>

int main()


{

    int d1,d2,d3,d4,d5,n,revnum;

printf("\nEnter a five digit number");
    scanf("%d",&n);

    d5=n%10;/* 5th digit 1234.5 */ 
        n=n/10; /* 1234 remaining digit*/
    d4=n%10;/* 5th digit 123.4*/ 
        n=n/10; /* 123 remaining digit*/
    d3=n%10;/* 5th digit 12.3 */ 
        n=n/10; /* 12 remaining digit*/
    d2=n%10;/* 5th digit 1.2 */ 
        n=n/10; /* 1 remaining digit*/
    d1=n%10;/* 1 5th digit */ 
        n=n/10; /* 1 remaining digit*/
     
    revnum=(d5*10000)+(d4*1000)+(d3*100)+(d2*10)+d1;

printf("\nRevrse number is:%d", revnum);

return 0;

}