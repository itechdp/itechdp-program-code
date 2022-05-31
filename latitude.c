#include <stdio.h>
    #include <math.h>

int main()

{

float l1,l2,g1,g2,d,km;

/*l1,l2=Latitude*/
/*G1,G2=Longitude*/

    printf("\nEnter degree of L1=");                               
        scanf("%f", &l1);
    
        printf("\nEnter degree of L2=");
            scanf("%f", &l1);
    
            printf("\nEnter degree of G1=");
                scanf("%f", &g1);
    
                printf("\nEnter degree of G2=");
                     scanf("%f", &g2);
    

d=3963*acos(sin(l1)*sin(l2)+cos(l1)*cos(l2)*cos(g2-g1));

km=d*1.852;

   /*cos*3963+(sin*l1+sin*l2+cos*l1+cos*l2*cos(g2-g1));*/
   
   printf("\nDistance in nutical miles=%f", d);

     printf("\nDistance in Kilometer:%f", km );

return 0;

}