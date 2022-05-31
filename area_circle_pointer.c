/* Perimeter of rectangle= 2*length*bredgth */
/* Area of rectangle=length*brtedgth */

/* circumfrance formula =2*pie*Radius */
/* Area of circle= 3.14*Radius*Radius */

#include <Stdio.h.>


float perimeter(float *l , float *b , float *s);
float arearec(float *l , float *b , float *arr);

int main()
{
    
    float sperimeter,length,lc,brc,bredth,speri,sarea,arearect;
    
    float radius,pie,ccircle,arcircle;

    printf("Enter the length");
    scanf("%f",&length);

    printf("\n Enter the bredth");
    scanf("%f",&bredth);

    speri=perimeter(&length,&bredth,&speri);

    printf("Perimeter of rectangle=%f",speri);

    sarea=arearec(&lc,&brc,&arearect);

    printf("\nArea of rectangle=%f",&sarea);




}

float perimeter(float *l , float *b , float *s)
{

    *s=2**l**b;

    return(*s);

}

float arearec(float *lr , float *br , float *arr)
{
    *arr=*lr**br;

    return(*arr);

}



