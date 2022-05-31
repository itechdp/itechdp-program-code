#include <stdio.h>

int main ()

{

    char ch; 
    int digit;

            printf("\nEnter a character=");
                scanf("%c", &ch);

                if (ch>=65 && ch<=90)
                {
                    printf("\nThe character is UPPERCASE");
                }
                
                    if (ch>=97 && ch<=122)
                {
                    printf("\nTHE CHARACTER IS lower case");
                }
                        if (ch>=48 &&  ch<=57)
                {
                    printf("\nIts a digit");
                }
                            if (ch>=0 && ch<48 || ch>57 && ch<65 || ch>90 && ch<97 || ch>122 )
                {
                    printf("\nIts a special symbols");
                }

}