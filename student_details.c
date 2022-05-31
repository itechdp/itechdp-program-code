#include <stdio.h>

int main(){

    long int contact;
    int semester;
    char name[50];
    char address[150];

      
    printf("\nEnter Your Name:");
    scanf("%s",&name);
    
    fflush(stdin);


    printf("\n\nEnter Your contact number:");
    scanf("%ld",&contact);

    flush(stdin);

    printf("\n\nEnter Address:");
    scanf("%s",&address);

    flush(stdin);
    
    
    printf("\n\nEnter your semsester");
    scanf("%d",&semester);

    printf("\n\nName: %s",name);

    printf("\n\nAddress: %s",address);

    printf("\n\nRegistered No:%ld",contact);

    printf("\n\nSemester:%d",semester);

    
    return 0;

}