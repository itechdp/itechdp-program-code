// condition 1= If year is divisible by 4 its a leap year
// condition 2= If year is divisible by 100 its not a leap year
// condition 3= If year is not divisible by 400 but its divisible by 100 so its not a leap year
// condition 4= If year is divisible 400 divisible its leap year


#include <stdio.h>

int main()
    
    {

        int year;

            printf("\nEnter a year=");
                scanf("%d", &year);

                if ( year%400==0 || year%100!=0 && year%4==0 )
                {
                    printf("\n its Leap year ");
                }
                
                else
                {
                    printf("\n Its not leap year");
                }

            return 0;

    }