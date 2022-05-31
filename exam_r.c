#include <stdio.h>

int main ()

{
    //con 1= if student fail in any subject then will not qualified for futher study
    //con 2= student need 35 and above marks in each subject to pass the exam
    //con 3= if student wont get grand total of 175 marks or wont get 35 marks in any subject student will fail 

 int m,s,ch,e,c,g;

    printf("\n Enter Maths marks=");
        scanf("%d",&m);
             
             printf("\n Enter Science marks=");
        scanf("%d",&s);

                 printf("\n Enter Chemistry marks=");
        scanf("%d",&ch);

                     printf("\n Enter English marks=");
        scanf("%d",&e);

                         printf("\n Enter Computer marks=");
        scanf("%d",&c);


    if (m>=35)
    {
        printf("\n You are in pass maths exam");
    }
    
        else //if (m<35)
    {
        printf("\n You are fail in maths exam");
    }

    if (s>=35)
    {
        printf("\n You are in pass science exam");
    }
    
        else //if (s<35)
    {
        printf("\n You are fail in science exam");
    }

    if (ch>=35)
    {
        printf("\n You are in pass chemistry exam");
    }
    
        else //if (ch<35)
    {
        printf("\n You are fail in chemistry exam");
    }

    if (e>=35)
    {
        printf("\n You are in pass english exam");
    }
    
        else //if (e<35)
    {
        printf("\n You are fail in english exam");
    }

    if (c>=35)
    {
        printf("\n You are in pass computer exam");
    }
    
        else //if (c<35)
    {
        printf("\n You are fail in computer exam");
    }

    if (m+s+ch+e+c>=175)
    {
        printf("\n Qualified for further study");
    }
    
    else
    {
        printf("\n You are not qualified for further studies");
    }

   
    printf("\n Your grand total=%d",m+ch+s+e+c);
    
return 0;
}
