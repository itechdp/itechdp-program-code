#include <stdio.h>
    #include <math.h>

int main()

{

int ans,a,b,c,d,e;

printf("\nEnter 5 digit number:");
    scanf("%d", &ans);

e=ans%10; /*12345 1234.5%10 = 5*/
d=(ans/10)%10; /*12345/10 d=5 12345/10= d = 1234.5 now 1234.5%10 = 5 */
c=(ans/100)%10; /*12345/100=123.45 = c = 123 now 123.45%10 = 45 */
b=(ans/1000)%10; /*12345/1000*=12.345 = b = 12 now 12.345%10 = 345 */
a=(ans/10000);    /*12345/10000=1.12345 */

ans=a+b+c+d+e;

printf("5 digit no is:%d And answer is=",ans/*,a+b+c+d+e*/);

 
 
return 0;

}