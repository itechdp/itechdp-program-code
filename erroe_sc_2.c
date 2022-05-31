/* #include <stdio.h>

int main()

{
    int a=3,b=4,c;

    c=b-a;

    switch (c)
    {
    case 1||2:
        printf("God give me a chance to change things");
        break;

    case a||b:
         printf("God give me a chance to show\n");
        break;


    
    default:
        break;
    }
} */

#include <stdio.h>

int main()

{
    int a=3,b=4,c;

    c=b-a;

    switch (c)
    {
    case 1||2:
        printf("God give me a chance to change things");
        break;

    case 4: //We have to input onlu and only int value in cases;
         printf("God give me a chance to show\n");
        break;


    
    default:
        break;
    }
}