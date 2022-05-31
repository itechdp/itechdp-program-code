#include<stdio.h>
#include<stdlib.h>

int main()

{
  int num,range,sm,bm,limit;

    printf("Enter a No. limit:");
        scanf("%d",&limit);

    printf("\nEnter %d Numbers", limit);
        scanf("%d", &num);

        bm=sm=num;

        limit=limit-1;

        while (limit)
        {
            scanf("%d", &num);
            
            if (num>bm)
            {
                bm=num;
            }

            if (num<sm)
            {
                sm=num;
            }
            
            limit--;
          
        

        }
            range=bm-sm;

                             printf("\nRange:%d", abs(range));
                        printf("\nSmallest No:%d", sm);
                    printf("\nBiggest No:%d", bm);
                    

     
        return 0;
}


            
// #include<stdio.h>  
// #include<stdlib.h>  
  
// int main()  
// {  
//     int small, big, range, num, limit;  
  
//     printf("Enter the limit\n");  
//     scanf("%d", &limit);  
  
//     printf("Enter %d numbers\n", limit);  
//     scanf("%d", &num);  
  
//     small = big = num;  
  
//     limit = limit - 1;  
  
//     while(limit)  
//     {  
//         scanf("%d", &num);  
  
//         if(num > big)  
//         {  
//             big = num;  
//         }  
  
//         if(num < small)  
//         {  
//             small = num;  
//         }  
  
//         limit--;  
//     }  
  
//     range = big - small;  
  
//     printf("Small Number = %d\nBig Number = %d\n", small, big);  
//     printf("Range is %d\n", abs(range));  
  
//     return 0;  
// }  