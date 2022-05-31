#include <Stdio.h>
    #include <math.h>

int main ()

{

    int by=1900,year,ry,ly,td,days;

        printf("\nEnter a year");
            scanf("%d", &year);

        year= (year-1)-by;

        ly=year/4;

        ry=year-ly;

        td=(ry*365)+(ly*366)+1;

        days=td%7;

        if (days==0)
        {
            printf("monday");
        }
        
            else if (days==1)
            {
                printf("tuesday");
            }

             else if (days==2)
            {
                printf("wednesday");
            }

             else if (days==3)
            {
                printf("thursday");
            }

             else if (days==4)
            {
                printf("friday");
            }

             else if (days==5)
            {
                printf("saturday");
            }

             else if (days==6)
            {
                printf("sunday");
            }

    return 0;            

}