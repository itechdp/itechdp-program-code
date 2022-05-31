#include <stdio.h>
    #include <math.h>

int main()
{

int sn,n,a,l;/*d,a2;*/

printf("\nA:");
    scanf("%f", &a);

printf("\nl:");
     scanf("%f", &l);

/*printf("\nD:");
    scanf("\n%f", &d);*/

printf("\nN:");
    scanf("\n%d", &n);

/*d=a2-a;*/
//sn=n+2;
   
/*n/2+200+n-1*d
n/2+200+n-50
11+200+22-50
211+22-50
233-50
183*/

/*sn=n/2*(2*a+n-1*d);*/
sn=n/2*a+l;

printf("\nSn:%d", sn);

return 0;

}