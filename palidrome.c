#include <stdio.h>
#include <string.h>
 
void palidrome(char *s);
int main()
{
    char s[1000];  

    printf("Enter  the string : ");
    gets(s);
    
    palidrome(s);

    return 0;
}

void palidrome(char *s){

    int i,n,c=0;
 
    n=strlen(s);
 
    for(i=0;i<n/2;i++)  
    {
    	if(s[i]==s[n-i-1]) //This implementation checking whether the fist character is matching with the last char or not.
    	c++;
 
 	}
 	if(c==i)
 	    printf("string is palindrome");
    else
        printf("string is not palindrome");
}