#include <stdio.h>
    #include<math.h>

int main()

{

float km,m,cm,ft,inch;

printf("\nEnter the value of kilometer");
scanf("%f", &km);

m=km*1000;
cm=m*100;
inch=cm/2.54;
ft=inch/12;

printf("\nDistance meter=%f", m);
    printf("\nDistance meter=%f", cm);
        printf("\nDistance inch=%f", inch);
            printf("\nDistance ft=%f", ft);
return 0;


}