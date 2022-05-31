#include <stdio.h>
#include <math.h>

int main ()

{

    int hd,ts;
    float cc;

    //Hardess = 50>
    //Carbon content = <0.7
    //Tensil strength = 5600>

    printf("\nEnter the hardness of steel:");
        scanf("%d",&hd);

        printf("\nCarbon content=");    
            scanf("%f", &cc);

            printf("\nTensile strength:");
                scanf("%d", &ts);

                if (hd>=50 && cc<0.7 && ts>5600)
                    printf("\nSteel grade= GRADE 10");

                    else if (hd>=50 && cc<0.7)
                        printf("Steel grade= GRADE 09");
                    
                             else if ( cc<0.7 && ts>5600)
                        printf("Steel grade= GRADE 08");

                                     else if (hd>=50 && ts>5600)
                        printf("Steel grade= GRADE 07");

                                         else if (hd>=50 || cc<0.7 || ts>5600)
                        printf("Steel grade= GRADE 06");

                                             else 
                        printf("Steel grade= GRADE 05");
                    

                
                //anorexic (an>15.1 && an<=17.5)
}
