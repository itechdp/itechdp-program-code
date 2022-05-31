#include <stdio.h>

int main()
    
    {
        int c,p,m=21;

        while (1)
        {
            printf("Total No. Matchstick=%d", m);
            
            printf("\nPick up the matchstick between (1 to 4)");
                scanf("%d",&p);

                    if (p>4 || p<1)
                        continue;

                m=m-p;

                    printf("\nThe No. Of matchsticks left:%d", m);

                c=5-p;

                    printf("\nOut of which com puter picked up", c );

                c= m-c;

                    if (m==1)
                    {
                        printf("\nYou Lose a game via computer");
                    }
                    break;



        }
        
            return 0;

    }