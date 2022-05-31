/* 

    input=234 output = 2+3+4=9

 */


#include <Stdio.h>

int main()
{
    int n,m,sum=0;

    printf("Enter No.");
    scanf("%d",&n);

    while (n>0)
    {
        m=n%10;

        printf("\nM=%d",m);

        sum=sum+m;

        printf("\nSum=%d",sum);

        n=n/10;

        printf("\nN=%d");
    }

    printf(" Sum=%d",sum);

    return 0;
    
}