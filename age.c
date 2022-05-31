#include <stdio.h>
    #include <math.h>

    int main()

    {
    
        int ramesh,suresh,niraj;

        printf("\nEnter age of ramesh: suresh: niraj:");
    scanf("%d %d %d", &ramesh,&suresh,&niraj);

         if (ramesh>suresh && ramesh>niraj)
    {
        printf("\nRamesh is youngest");
    }
    
        if (suresh>niraj && suresh>ramesh)
   
    {
        printf("\nSuresh is youngest");
    }
    
        if (niraj>suresh && niraj>ramesh)
    
    {
        printf("\nNiraj is youngest");
    }
        if (ramesh==suresh==niraj)

    {
        printf("\n Triplates of 1 mother");
    }
    
       return 0;       
    }