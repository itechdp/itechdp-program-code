#include <stdio.h>

int leap(int);

int main()

{
    int yr,lp;

    printf("Enter a year=");
    scanf("%d",&yr);

    lp= leap(yr);

}

int leap(int x)

{
    if ( x%400==0 || x%100!=0 && x%4==0 )
    {
        printf("\n its Leap year ");
    }
                
    else
    {
        printf("\n Its not leap year");
    }

    return (x);
}