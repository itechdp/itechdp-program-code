#include <stdio.h>

int series(int x);
int main(){

    int n,ans;

    printf("\nEnter any number");
    scanf("%d", &n); // Taking input from the user for addition of entered natural number

    ans = series(n); // calling function

    printf("\nThe first addion of %d is:%d",n,ans); 


}

int series(int x){
    
    int s=0;
    if (x!=0)
    {
        s = x + series(x-1);
        printf("\nThe value of x is: %d The value of s is : %d ", x,s);
        return s;
    }

    else 
    return 0;
    
}