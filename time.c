#include <stdio.h>

int main()

{
    int h;

    for ( h = 0 ; h <= 23; h++)
    {
        
        if (h==0)
        {
            printf("12 Mindnight\n",h);
            continue;
          
        }
        
        if (h<12);
        {
            printf("%dAm\n",h);
        }

        if (h==12)
        {
            printf("12 Noon\n",h);
        }

        if (h>12)
        {
            printf("%dPM\n",h%12);
        }
        
    }
    
}