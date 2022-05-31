/* 

    Error:
  
    #include <stdio.h>

    int main()

    {
        int temp;

        scanf("%d",&temp);

        switch (temp)
        {
        case (temp<=20) :
            printf("Oooooooohhhh damn!!! its too cool\n");
            break;

        case (temp>20 && temp<=30) :
            printf("Rain rain here again\n");
            break;

        case (temp>30 && temp<=40) :
            printf("Good old nagpur weather\n");
            break;

        default:
            printf("You should inout only integer value in cases (you cant use expressions in cases)")
            break;
        }   
    } 
    
*/

// Solution

#include <stdio.h>

int main()

{
    int temp;
    float a=3.5;

    scanf("%d",&temp);

    switch (temp)
    {
    case (20) :
        printf("Oooooooohhhh damn!!! its too cool\n");
        break;

    case (30) :
        printf("Rain rain here again\n");
        break;

    case (40) :
        printf("Good old nagpur weather\n");
        break;

    default:
        printf("You should inout only integer value in cases (you cant use expressions in cases)");
        break;
    }   
}