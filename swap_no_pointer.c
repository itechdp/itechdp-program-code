#include <stdio.h>

int main()
{
    int a=10, b=20 ,c;

    swap(&a,&b);

    printf("A=%d B=%d",a,b);
    
}


int swap(int *x , int*y)
{
  int z;

    z = *x;
    *x = *y;
    *y = z;

}