#include <stdio.h>
#include <math.h>

int main()

{
    int i;
    float pop=100000;

    for ( i = 1; i <= 10; i++)
    {
        pop=pop-pop*0.1;
        printf("Year:%d Pop:%d\n",i,(int)pop);
    }
    
return 0;

}

