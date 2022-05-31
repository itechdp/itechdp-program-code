#include <stdio.h>

int main()
{
    int a[] = {1,2,3,5,4};
    int temp;

    for(int i=0;i<5;i++)
    {
        if(a[i]>a[i+1])
        {
            temp = a[i];
            a[i] = a[i+1];
            a[i+1] = temp;

        }
    }

    for(int k =0 ;k<5;k++)
    {
        printf("%d",a[k]);
    }
}