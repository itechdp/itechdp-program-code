#include <stdio.h>
#include <math.h>


void class(int *, int *, double *);
int main()

{
    int sum,arg;
    double stdev;

    class(&sum,&arg,&stdev);

    printf("Sum=%d\nAvarge=%d\nStandard Deviation=%lf\n",sum,arg,stdev);

}

void class(int *s, int *avg, double *std)
{
    int n1,n2,n3,n4,n5;

    printf("Enter the marks of 5 subjects:");
    scanf("%d %d %d %d %d",&n1,&n2,&n3,&n4,&n5);

    *s=n1+n2+n3+n4+n5;

    *avg=*s/5;

    *std=sqrt((pow((n1-*avg),2.0)+pow((n2-*avg),2.0)+pow((n3-*avg),2.0)+pow((n4-*avg),2.0)+pow((n5-*avg),2.0)));


}