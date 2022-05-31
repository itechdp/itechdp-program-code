#include <stdio.h>
    #include <math.h>

    int main()
        
{

    int x1,x2,x3,y1,y2,y3,a,b;

    printf("\n Enter the X1= Y1=");
        scanf("%d %d", &x1,&y1);

            printf("\n Enter the X2= Y2=");
        scanf("%d %d", &x2,&y2);

                printf("\n Enter the X3= Y3=");
        scanf("%d %d", &x3,&y3);

   a= (y2-y1) / (x2-x1);
   b= (y3-y2) / (x3-x2);

   if (a==b)
   {
      printf("\nAll 3 points lie on straight line");
   }
   
   else 
   {
      printf("\nAll 3 points do not lie on straight line");
   }
}