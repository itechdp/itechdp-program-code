#include <stdio.h>
#include <stdlib.h>

int main()
{
//    int x = rand() % (100+1) + 0 ;

   for (int i = 0; i < 10; i++)
   {
       printf("\n%d", rand() % (100+1) + 0);
   }
   
    return 0;
}