#include <stdio.h>

int main()

{

int age;

    printf("\nEnter your age");
        scanf("%d",&age);

    printf("\nYou've entered %d as your age", age);

    if (age>=18)
    {
        printf("\nYou can vote");
    }
    
   
    else if (age>10)
    {
        printf("\nYou're between 10 to 18 age you're a teenagers right now");
    }

    else 
    {
        printf("\nYou cannot vote");
    }



}

/* == x is equals to y
   != x is not equals to y
   >  x is greater than y
   <  x is ess than y
   >= x is greater tahn and equals to y 
   <= x is less than or equals to y */

    //Condition 1
    //i've entered condition: if user's age is above 18 then computer will print "you can vote"

    //condition 2
    //If you're a teenager we already add a condition to 18 above so if ill enter 18 or 18+ age so itll
    //be print you can vote, but we add another condition here if age is greater than 10 so itll be print 
    //youre teenger untill age 18 (because after 18 we added another condition)

    //Condition 3
    //If we add a value though the keyboard below 10 so itll print you cannot vote youre kid because 
    // the first two condition was flase so computer will execute last else() statement...
