#include <stdio.h>
#include<math.h>

int main()
    
    {

        int m1,m2,m3,m4,m5,per,aggr;

        printf("\n Enter the marks of subjects:");
            scanf("%d %d %d %d %d", &m1,&m2,&m3,&m4,&m5);

            per=m1+m2+m3+m4+m5 * 100 / 500;

            aggr=m1+m2+m3+m4+m5;

            if (per>=60)
            {
                printf("\nFirst devision");
            }

            else if (per>50) 
            {
                printf("\nSecond devision");
            }

            else if (per>40)
            {
                printf("\nThird devision");
            }                        

            else if(per<40)
            {
                printf("\nFail");
            }

        printf("\nGrand total=%d", aggr);
            printf("\nPercentage=%d", per);

        return 0;
    }    
