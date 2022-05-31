#include <stdio.h>

void changev(int *a, int *b, int *c, int *temp);
int main()
{
    int x,y,z,tem,tem2;

    printf("Enter the value of X");
    scanf("%d",&x);

    printf("Enter the value of Y");
    scanf("%d",&y);

    printf("Enter the value of Z");
    scanf("%d",&z);
    
    changev(&x,&y,&z,&tem);

    printf("X=%d Y=%d Z=%d",x,y,z);
    
}

 void changev(int *a, int *b, int *c, int *temp)
{

    *temp = *a;
    *a = *c;
    *c = *b;
    *b = *temp;

}

//  x=5 y=8 z=10 
// b=5 c=8 a=10
// ES,Maths,feee,ac;

/* es:03605101
maths:03691101
feee:03607151
ac:03602107 */