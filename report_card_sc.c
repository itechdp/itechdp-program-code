#include <stdio.h>

int main()

{
    int subf=7,class,grace=0;

    printf("Which class you got?\n 1.First Class\n 2.Second class\n 3.Third class\n");
    scanf("%d",&class);

    printf("\nEnter the number of subject you failed=");
    scanf("%d",&subf);

    switch (class)
    {
        // First class
    case 1:
        if (subf>3)
        {
            grace=0;
        }

        else
        {
            grace=5;
        }
        

        break;

        // Second class
    case 2:
        
        if (subf>2)
        {
            grace=0;
        }

        else
        {
            grace=4;
        }
        

        break;

        // Third class
      case 3:
        
        if (subf>1)
        {
            grace=0;
        }

        else
        {
            grace=5;
        }
        

        break;  

    default:
        printf("Please answer the question correctly");
        break;
    }

    if (class==1 || class==2 || class==3)
    {
        printf("The student has obtained a grace marks of %d per subject\n",grace); 
    }

    return 0;
    
}