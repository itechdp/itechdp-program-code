#include <Stdio.h>

int main()

{
    int i=10 ,j=20;

    printf("%d %d %d",i,j); //No variable matching with last format specifier so compiler print grabage value of last format specifer...
    printf("%d\n",i,j);
}