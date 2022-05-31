#include <stdio.h>

int main()

{
    int i;

    for ( i = 1; i <= 10; i++)
    {
       if (i>5)
      break; // Loop will terminte while the i value will rech greater than 5 just because of the break; loop!
       printf("\n%d",i);
    }
    

}

/*

LOGIC

case 1: i =1 i<=10 i++; i=2
case 2: i =2 i<=10 i++; i=3
case 3: i =3 i<=10 i++; i=4
case 4: i =4 i<=10 i++; i=5

if(i>5)
break;

case 5: i =5 i>5 i++; i=6 (con= if (i>5) break; )
Loop terminates;

*/