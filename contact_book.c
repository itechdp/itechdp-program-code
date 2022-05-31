//Main menu
//Add contact
//show contact
//Delete contact

#include <stdio.h>

int cona(int);
int conab(int);
int conac(int);
int conad(int);
int conae(int);
int show(char);

int a,ab,ac,ad,ae;
int main()

{

    int num,a;
    int showcon_a;
    printf("Main Menu");

    a=cona(a);
    ab=conab(ab);
    ac=conac(ac);
    ad=conad(ad);
    ae=conae(ae);
    showcon_a= show(showcon_a);



}

int cona(int conta)
{
  
    printf("\nEnter No.");
    scanf("%d",&a);

    // printf("\nNumber:%d",a);

    // return (a);

}


int conab(int contab)
{
 
    printf("\nEnter No.");
    scanf("%d",&ab);

    // printf("\nNumber:%d",ab);

    // return (ab);

}


int conac(int contac)
{
    
    printf("\nEnter No.");
    scanf("%d",&ac);

    // printf("\nNumber:%d",ac);

    // return (ac);

}


int conad(int contad)
{
   
    printf("\nEnter No.");
    scanf("%d",&ad);

    // printf("\nNumber:%d",ad);

    // return (ad);

}


int conae(int contae)
{
   
    printf("\nEnter No.");
    scanf("%d",&ae);

    // printf("\nNumber:%d",ae);

    // return (ae);

}

int show(char s)
{
    
    char que_a;

    fflush(stdin);

    printf("Search Contact=");
    scanf("%c",&que_a);

    if (que_a=='a')
    {
       printf("A Contact List");
       printf("\n\nA=\nAB=\nAC=\nAD=\nAE=",a,ab,ac,ad,ae);
    }
    
    return(s);
}

