#include<stdio.h>
#include <string.h>

int main(){

    char a[5] = "hi";
    char b[100] = "Hello i am dhrumil";

    printf("%d",strlen(a));
    printf(strrev(b));
    printf("%d",strcmp(a,b));
    printf(strcat(a,b));
    printf(strupr(a));
    printf(strlwr(b));
    printf(strcpy(b,a));


}