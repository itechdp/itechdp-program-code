#include<stdio.h>  
  
int main()  
{  
    char ch;  
  
    printf("Enter a Character\n");  
    scanf("%c", &ch);  
  
    ( ch>=97 && ch<=122 ) ?  printf("Character Entered Is a lowercase\n") :  printf("Character Entered Is not a lowercase\n");  

}