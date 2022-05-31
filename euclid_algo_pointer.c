//Euclid = a=b*c+a; d<=33

#include <Stdio.h>

int euclid(int *a , int *b , int *c , int *d );
int main()
{
    int i,j,k,l,sum;

   printf("Enter No:");
   scanf("%d",&i);

   printf("Enter Second No:");
   scanf("%d",&j);


   sum=euclid(&i,&j,&k,&l);

   printf("Sum=%d",sum);
   
      
}

int euclid(int *a , int *b , int *c , int *d )
{

   for ( *a = 0; *d <= 33; *a++)
   {

       *a=*b**c+*a;
       
   }
   
    
   
       
    return (*a);
}