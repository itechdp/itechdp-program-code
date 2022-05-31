#include <stdio.h>

int main()
{
    int i=3;
    int *j;
    j = &i;

// int i and j both has different diffrent location numbers and different different values...


    printf("Adress of i =%u\n",&i);
    printf("Adress of i= %u\n",j);
    printf("Adress of j= %u\n", &j);
    printf("Value of j=%u\n",j);
    printf("Value of i=%d\n",i);
    printf("Value of i=%d\n",*(&i));
    printf("Value of i=%d\n",*j);

}