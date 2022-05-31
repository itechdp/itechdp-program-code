#include <stdio.h>
    #include <math.h>

int main ()

{

    int x1,y1,x2,y2,radius;

    float pc;

        printf("\n Enter center co-ordinates of circle=");
            scanf("%d %d", &x1,&y1);

                printf("\n Enter Radius of circle=");
            scanf("%d", &radius);

                    printf("\n Enter point co-ordinates of circle=");
            scanf("%d %d", &x2,&y2);

    pc= sqrt(pow(x2-x1,2)+(y2-y1,2));


        if (pc<radius)
            printf("Point (%d,%d) lies inside the circle.",x2,y2);
        
            else if (pc>radius)
                printf("Point (%d,%d) lies outside the circle.",x2,y2);
            
            else if (pc==radius)
                printf("Point (%d,%d) lies on circle boundary.",x2,y2);


        else 
            printf("\nWrong entry");
    
return 0;

}
