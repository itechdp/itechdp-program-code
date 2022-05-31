
// s= (a+b+c)/2;
//area = sqrt s*(s-a)*(s-b)*(s-c)

#include <Stdio.h>
#include <math.h>

float ar(float *a, float *b, float *c);
int main()
{
    float s,area,a,b,c;

    printf("Value of triangle side A=");
    scanf("%f",&a);

    printf("Value of triangle side B=");
    scanf("%f",&b);

    printf("Value of triangle side C=");
    scanf("%f",&c);

    if (a + b >c && b + c >a && a + c>b)
	{
		area = ar(&a, &b, &c);
		printf("\n\nArea of the triangle : %f", area);
	}
	else
		printf("\n\nThe triangle you entered is invalid.");

    return 0;

}

float ar(float *a, float *b, float *c)
{
    float s,at;

    s=(*a + *b + *c)/2;

    at=sqrt (s*(s- *a)*(s- *b)*(s- *c));

    return(at);
}