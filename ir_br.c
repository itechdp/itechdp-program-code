#include <stdio.h>

int main ()

{
    int i=1,j=1;

    while (i++ <= 100)
    {
        while (j++ <= 200)
        {
            // printf("%d\n",j);

            if (j==150)
                break;

                else 
                    printf("%d %d",i,j);
            
        }
        
    }
    
}