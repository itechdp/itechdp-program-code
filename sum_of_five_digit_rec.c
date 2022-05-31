#include <stdio.h>

int rsum(int);

int main(){

    int num,sum;

    printf("Enter number:");
    scanf("%d",&num);

    sum=rsum(num);

    printf("\nThe sum of entered number is:%d",sum);

    return 0;


}

int rsum(int n){

    int s,rem;

    if (n!=0)
    {       
        printf("\nNumber:%d",n);
        rem=n%10;
        printf("\nRemainder:%d",rem);
        s=rem+rsum(n/10);
        printf("\nSum each time:%d",s);
        

    }

    else
    {
        return 0;
    }

    return (s);
  
}