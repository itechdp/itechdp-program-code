#include <stdio.h>

int main ()
    
    {  
        // con 1= exam pass math science = 45Rs.
        // con 2= exam pass science = 15 Rs.
        // con 3= exam pass maths = 15 Rs.
       

            int maths, science;

                printf("\n Enter marks of maths=");
                    scanf("%d", &maths);

                printf("\n Enter marks of science=");
                    scanf("%d", &science);

            if (maths==science)
            {
                printf("\n congratulations you will get a gift of 45 Rs.");
            }
            
            else if (maths>science)

            {
                printf("\n congratulations you will get a gift amount of 15 Rs. for your maths exam");
            }

            else if (science>maths)
            
            {
                printf("\n congratulations you will get a gift amount of 15 Rs. for your science exam");
            }
            
            
return 0;

    }