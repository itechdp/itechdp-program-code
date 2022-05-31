#include <Stdio.h>

void swap(int *x,int *y);

int main()

{
    int a=10 , b=20;

    swap(&a,&b);
    printf("a=%d b=%d",a,b);
    return 0;
}

void swap(int *x,int *y)
{

    int t;

    t=*x; // 0=10 
    *x=*y; // 10 = 20 
    *y=t; // 20 = 10
    

}