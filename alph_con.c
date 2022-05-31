#include<stdio.h>  
  
int main()  
{  
    char ch;  
  
    printf("Enter a Character\n");  
    scanf("%c", &ch);  
  
    ( (ch >= 0  && ch <= 47) ||  (ch >= 58 && ch <= 64) ||  (ch >= 91 && ch <= 96) ||  (ch >= 123) ) ?  printf("Character Entered Is a Special Symbol\n") :  printf("Character Entered Is not a Special Symbol\n");  
  
    return 0;  
}  




/*#include <stdio.h>

int main ()

{
    char c;

        printf("\nEnter a character=");
        scanf("%c",&c);

       if (c>=97 && c<=122 ? printf("lowercase\n")  : printf("undefined character") );

       if ( (c>0 && c<48) || (c>57 && c<65) ||(c> 90&& c<97) ||( c>122 && c<126)  ? printf("special symbol\n") : printf("undefined character") );
     
       return 0;
        
}*/