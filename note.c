#include <stdio.h>
    #include <math.h>

int main()

{

int hun,fifty,ten,five,two,one,total,amount;

    printf("\nEnter a amount:");
        scanf("%d", &amount);

    hun=amount/100;
    amount=amount%100;

     fifty=amount/50;
    amount=amount%50;

     ten=amount/10;
    amount=amount%10;

     five=amount/5;
    amount=amount%5;

     two=amount/2;
    amount=amount%2;

     one=amount/1;
    amount=amount%1;

total=hun+fifty+ten+five+two+one;
    
    printf("\nSmallest number of notes%d", total);

return 0;

}