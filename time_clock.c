

#include <stdio.h>
#include <stdlib.h>

int clock(int sec, int min, int hour);
int main()
{
    int s, m, h;
    printf("**********DPATEL CLOCK**********");

    while(1){
        
        system(clear);

        printf("%02d %02d %02d",s,m,h);

        s++;

        
        
    }


 
}


// for (sec = 0; sec <= 59; sec++)
// {

//     if (sec == 59)
//     {
//         sec = 0;

//         printf("\n%d", sec);

//         min++;

//         if (min == 59)
//         {
//             min == 0;
//             printf("%d", min);

//             hour++;
//             printf("%d", hour);
//         }
//     }
// }
