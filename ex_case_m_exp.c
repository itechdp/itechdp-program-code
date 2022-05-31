#include <stdio.h>

int main()

{
    int i=5;

    switch (i)
    {
    case 0: //We can use maths operation in switch as well as in the case;
        printf("Customers are dicey\n");
        break;

    case 1+4:
        printf("Markets are pricey\n");
        break;

    case 4/2:
        printf("Investor are moody\n");

    case 8%5:
        printf("At least employees are good\n");
        break;
    
    }

    return 0;
}