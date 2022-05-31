/* Logical operator = &&(and) ||(or) !(not); */

// condition 1= percentage above or equal to 60 - First division
// condition 2= percentage between 50 and 59 - second devision
// condition 3= percentage between 40 and 49 - Third devision
// condition 4= percentage less than 40 - fail

#include <stdio.h>

int main()
    
    {

        int m1,m2,m3,m4,m5,per,aggr,sum;

        printf("\n Enter the marks of subjects:");
            scanf("%d %d %d %d %d", &m1,&m2,&m3,&m4,&m5);

            per=m1+m2+m3+m4+m5*100/500;

            aggr=m1+m2+m3+m4+m5;

            if (per>=60)
            {
                printf("\nFirst devision");
            }

            if ((per>50) && (per<60))
            {
                printf("\nSecond devision");
            }

            if ((per>40) && (per<50))
            {
                printf("\nThird devision");
            }                        

            if (per<40)
            {
                printf("\nFail");
            }
            
        printf("\nGrand total=%d", aggr);
        printf("\nPercentage=%d",per);

            /*printf("\ncondition 1= percentage above or equal to 60 - First division\n");
                printf("\ncondition 2= percentage between 50 and 59 - second devision\n");
                    printf("\ncondition 3= percentage between 40 and 49 - Third devision\n");
                        printf("\ncondition 4= percentage less than 40 - fail\n");*/

     return 0;

   }

   
