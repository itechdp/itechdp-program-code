#include <stdio.h>

int main()
{
    int r,n,temp,sum=0;

    printf("Enter Number");
    scanf("%d",&n);

    temp=n;

    while (n>0)
    {
        r=n%10;

        sum=sum+(r*r*r);

        n=n/10;


    }

    if (temp==sum)
    {
        printf("%d is Armstrong No.",temp);
    }

    else
    {
        printf("Not an armstrong number");
    }
    
    return 0;
    
    


}