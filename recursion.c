
#include <Stdio.h>

int rec(int);
int main(){

    int a, fact;

    printf("Enter Any number");
    scanf("%d",&a);

    fact= rec(a);

    printf("\nThe factorial value of a %d is %d",a,fact);

}

int rec(int x){

    int f;

    if (x==1 || x==0)
    {
        return 1;
    }
    
    else
    {
        f = x*rec(x-1);
    
       printf("\nThe value of each time: %d",f);
    }
        
    return (f);
    

}