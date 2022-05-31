#include <stdio.h>

int main ()

{

    //char small,large,medium;
     int size,cost,qun,gt;

        printf("\nEnter No. 1 for small pizza\nEnter No.2 for medium pizza\nEnter No.3 for large pizza\nEnter your number=");
                scanf("%d", &size);
            


    if (size==1)
    {
      printf("\nOkay!!! Your small size pizza total cost is : 10$");  
    }
     if (size==2)
    {
      printf("\nOkay!!! Your small medium pizza total cost is : 15$");  
    }
     if (size==3)
    {
      printf("\nOkay!!! Your small large pizza total cost is : 20$");  
    }

    
return 0;


}

/* if (size=small)
            printf("\nOkay!!! Your small size pizza total cost is : 10$");

            else if (size=medium)
                printf("\nOkay!!! Your medium size pizza total cost is : 15$");  

            else if (size=large)
                printf("\nOkay!!! Your small size pizza total cost is : 20$");  
            
        else
            printf("\nEnter a valid size of pizza");

            return 0;   */ 