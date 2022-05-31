#include <stdio.h>

int main ()

{

    int num1,num2,num3;

    printf("\nEnter a number=");
        scanf("%d %d %d",&num1,&num2,&num3);

    (num1>num3 && num1>num2) ? printf("\nGreatest number 1 is the greatest") : printf("\nNumber 1 is less than number 2 and 3");
    (num2>num3 && num2>num1) ? printf("\nGreatest number 2 is the greatest") : printf("\nNumber 2 is less than number 1 and 3");
    (num3>num1 && num3>num2) ? printf("\nGreatest number 3 is the greatest") : printf("\nNumber 3 is less than number 1 and 2");

}