#include <stdio.h>

int main()

{

    int hour,i=1;
    float otpay;

        while (i<=10);
        {
            printf("\nEnter the no. of hours worked");
                scanf("%d",&hour);
            
            if (i>=40)
            {
                otpay=(hour-40)*12; 
            }

            else 
            {
                printf("\nHours=%d overtime=%f", hour,otpay);
                i++;
            }
            

       }
        
        return 0;

}