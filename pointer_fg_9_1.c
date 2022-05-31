#include <stdio.h>

int main()
{
    int i=3;
    
    printf("Adress of i = %u\n",&i); //%u || &i = "%u" We should use %u if we want unsigned integer of that variable... "&i" adress of that variable
    printf("Value of i =%d\n",i);
    printf("Value of i =%d\n",*(&i)); // *(&i) = '*' is used for value of an given adress... (&i) adress of the integer variable i...

    return 0;


}