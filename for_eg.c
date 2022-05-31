#include <stdio.h>

int main()
 
{
    int i;

    for (i = 1 ; i < 11; i++)
    {
       printf("\nCon1 I=%d", i);
    }

    for (i = 1 ; i < 11;)
    {
       printf("\nCon2 I=%d", i);
       i++;
    }
 
    for (; i < 11; i++)
    {
       printf("\nCon3 I=%d", i);
    }
    

    for (i = 0 ; i++<10;) 
    {
       printf("\nCon4 I=%d", i);
    }

    for (i = 1 ; ++i<=10;)
    {
       printf("\nCon5 I=%d", i);
    }
    
    return 0;
}