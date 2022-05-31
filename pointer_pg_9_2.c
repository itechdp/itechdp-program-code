#include <stdio.h>

void result(int,int,int,float *,float *);
int main()
{
    int m1,m2,m3;
    float per,ag;

    printf("Enter the marks of 3 subjects");
    scanf("%d %d %d",&m1,&m2,&m3);

    result(m1,m2,m3,&per,&ag);

    printf("Avarage=%f\n Percentage=%f",ag,per);

}

void result(int m1, int m2, int m3,float *per, float *ag)
{

    *per=*ag=(m1+m2+m3)/3.0f;

}