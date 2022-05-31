#include <stdio.h>

#define KM(X) (1000/X);

int main()
{
    float m;

    printf("\nEnter the distance into meter");
    scanf("%f",&m);

    m = KM(m);

    printf("\nThe distance in kilometer is:%f",m);

    return 0;


}