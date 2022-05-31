#include <stdio.h>
#include <math.h>

int main()

{
    int x,y,num,count,i;

    num=30000;

    for ( i = 1; i <= num; i++)
    {
         count=0;
        printf("I=%d\t",i);

        for ( x = 1; x*x*x<i; x++)
        {
            printf("X=%d\t",x);
           for  (y=x; x*x*x+y*y*y<=i; y++)
           {
               printf("Y=%d\t",y);

               if (x*x*x+y*y*y==i)
               {
                   count++;
                   printf("Count=%d",count);
               }
               
           }
           
        }

        if (count==2)
        {
            printf("%d\n",i);
            
        }
        
        
    }

    return 0;
}

/* #include<stdio.h>
#include<conio.h>
int main()
{
    int i,num,x,y,count;
    num=30000;
    //for loop for range (1-30000)
    for(i=1;i<=num;i++)
    {
        count=0;
        for(x=1;x*x*x<i;x++)
        {
            //for-loop for finding Ramanujan number
            for(y=x;x*x*x+y*y*y<=i;y++)
            {
                //list all the numbers
                if(x*x*x+y*y*y==i)
                {
                  count++;

                }
            }
        }
        if(count==2)
        {
            printf("%d\n",i);
        }
    }
} */