#include<stdio.h>

int main ()

{
    int oct=0,place=1,num,rem=0;

    printf("\n Enter the number");
        scanf("%d",&num);

        while (num)
        {
            rem=num%8; 
            oct= oct+rem*place; 
            num=num/8;
            place= place*10;

        }
        
        printf("%d",oct);
        return 0;
}