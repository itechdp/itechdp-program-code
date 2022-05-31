#include <stdio.h>

int main()

{

    float f,c;

printf("\nEnter the temprature in fre=");
    scanf("%f", &f);

c=(f-32)*5/9;  /*C=(F−32)×5/9=°C 
                F=(c*9/5 )+32    */ 

printf("\nTemp in Celcius=%f", c);



return 0;

}
