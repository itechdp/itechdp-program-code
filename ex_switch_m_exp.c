#include <stdio.h>

int main()

{
    int k;
    float j=2.0;

    switch (k=j+1) //We can use maths operation in switch as well as in the case; 
    {
    case 3:
        printf("Trapped\n");
        break;
    
    default:
        printf("Caught\n");
        break;
    }
    return 0;
}