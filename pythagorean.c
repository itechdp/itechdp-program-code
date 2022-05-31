#include <stdio.h>
#include <math.h>

int main()

{
    int a,b,n;
    float c;

    for ( a = 1; a <= 30; a++)
    {
        // printf("A%d:\n",a);

        for ( b = 1; b <= 30; b++)
        {

        // printf("B%d:",b);
        
            c=sqrt(a*a+b*b);

            if (c==(int)c)
            {
                printf("(%d %d %d)\n",a,b,(int)c);
            }

            else
            {
                printf("Again checking the condition B=%d\n",b);
            }

            
        }
        
    }
    
    return 0;
}