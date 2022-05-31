#include <stdio.h>
    #include <math.h>

int main() 
{

float radian,degree;

const float pi= 3.14159;

printf("\nEnter value of an angle in degree");
    scanf("%f", &degree); // 0 30 45 60 90 
    
radian = degree * (pi / 180.0); //  30 * 3.14/ 180

printf("sin%f = %f\n", degree, sin(radian));
    printf("cos%f = %f\n", degree, cos(radian));
        printf("tan%f = %f\n", degree, tan(radian));
            printf("cosec%f = %f\n", degree, 1/sin(radian));
                printf("sec%f = %f\n", degree, 1/cos(radian));
                    printf("cot%f = %f\n", degree, 1/tan(radian));
    
return 0;

}