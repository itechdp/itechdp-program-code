// Condition for driver would not insured
// condition 1= if the driver is married 
// condition 2= if the driver is unmarried, male & above 30 years of age
// condition 3= if the driver is unmarried, female & above 25 years of age

// conditon for driver would insured

#include <stdio.h>

int main ()

{

    int age;
    char sex,ms;

        printf("\n Enter your age,sex and marital status");
            scanf("%d %c %c", &age,&sex,&ms);

            if ( (ms=='M') || ( ms =='U' && sex=='M' && age>30) || (ms=='U' && sex=='F' && age>25) )
            {
                printf("\nDrive should be insured");
            }
            
            else
            {
                printf("\nDriver should not be insured");
            }

        return 0;
}
