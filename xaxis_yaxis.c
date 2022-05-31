#include <stdio.h>
    #include <math.h>

    int main()
        
        {

            float x,y;

                printf("\nEnter the Value of X=");
                    scanf("%f", &x);

                        printf("\nEnter the Value of Y=");
                    scanf("%f", &y);

            if (x==0 && y==0)
                printf("\n Point lies on origin axis");

                    else if (x==0)
                        printf("\nPoint lies on Y axis");

                    else if (y==0)
                        printf("\nPoint lies on X axis");

            else
                printf("\nPoint lies on neighter X axis nor Y axis");

    return 0;           

        }