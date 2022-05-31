#include <stdio.h>

int main()
{
    FILE *ptr = NULL;

   char x = 'm';

    // ptr = fopen("sum.txt" , "w");
    // fprintf(ptr , "%c" , x);

    // fclose(ptr);

    ptr = fopen("sum.txt", "r");
    char y = fscanf(ptr, "%c", x);

    printf("the value of x is :%c",y);

    fclose(ptr);

    return 0;
}