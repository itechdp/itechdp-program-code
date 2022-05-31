#include<stdio.h>

int main()
    {
        int side1,side2,side3,lg,sum;

            printf("\nEnter three sides of triangle");
                scanf("%d %d %d", &side1,&side2,&side3);

        if (side1>side2)
        {
            if (side1>side3)
            {
                sum= side2+side3; lg=side1;
            }
            
            else //(side3<side1)

            {
                sum=side1+side2; lg=side3;
            }
        }    
        
            else if (side2>side3)
            {
                sum=side1+side3; lg=side2;
            }
            else
            {
                sum=side1+side2; lg=side3;
            }

                if (sum<lg)
                    
                        printf("\nTriangle is valid");
                    

                    else
                    printf("\nTriangle is invalid");
    }