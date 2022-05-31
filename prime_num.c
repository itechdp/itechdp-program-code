#include <Stdio.h>

int main()

{
    int i,num;

    for ( num = 1; num <=300 ; num++)
    {
        i=2;
       for ( i = 2; i<num ; i++)
       {
           if (num%i==0)
            break;
           
         
       }
       
         if (i==num)
            printf("%d\t",num);
           
           
    }
    
}