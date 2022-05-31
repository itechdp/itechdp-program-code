#include <stdio.h>
    #include <math.h>

int main()



{

float v,t,wcf,c;



printf("\nEnter a air temprature");
    scanf("%f",&t);

        printf("Enter the velocity");
            scanf("%f",&v);


wcf=35.74+0.6215*t+(0.4275*t-35.75)*pow(v,0.16); /* v/\16*/

/*  35.74 + 0.6215 * 45 + ( 0.4275 * 45 - 35.75 ) * 10 
    36.3615 * 45 + (0.4275 * 45 - 35.75 ) * 10  
    1636.26 + ( 0.4275 * 45 - 35.75 ) * 10 
    1636.26 + ( -16.5125 ) * 10 
    1636.26 -165.125 */

    c=(wcf-32)*5/9;

printf("\nWind chill factor is:%.2f",wcf);
    printf("\nWind chill factor in celsius is:%.2f",c);

return 0;



}