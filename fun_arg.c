// Function with argument without return value

#include <stdio.h>

void printstar(int n); //Function declaration

void printstar(int n) //Function defination
{
    int i;

    for ( i = 1; i <= n; i++)
    {
        printf("%c",'*');
    }

}

int main()
{

     printstar(10); //Function call


    return 0;
}


