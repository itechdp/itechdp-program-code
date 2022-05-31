//choose message type
// show messages list
// select message
// select number for send message
// if num<10 invalid number num>10 enter valid no;
// show message sent on +91****** ;


#include <Stdio.h>
#include <Stdlib.h>

char messagelist( char m);
int selectmessage(int c);
int mobileno(int mn);



int main()
{
    char messagetype;

    int choice,mobile;

    messagelist(messagetype);

    selectmessage(choice);

    mobileno(mobile);
    
    return 0;

}

char messagelist(char m)
{
    printf("Press D For Diwali Messages=");
    scanf("%c",&m);

    switch (m)
    {
    case 'd':
         printf("Select message");

        printf("\n1.Happy Diwali");
        printf("\n2.Happy Birthday");
        printf("\n3.Happy Newyear");
        printf("\n4.Happy Dhanteras");
        printf("\n5.Happy Kali-Chaudas");
        break;
    
    default:

    printf("\n\nEnter valid message Type...");
        exit(0);

        break;
    }
    

    
    
    return(m);
}

int selectmessage(int c)
{
    printf("\n\nEnter Your Choice=");
    scanf("%d",&c);

    switch (c)
    {
    case 1:

        printf("\n1.Happy Diwali");
        
        break;

        case 2:
        printf("\n2.Happy Birthday");

        break;

        case 3:
        printf("\n3.Happy Newyear");

        break;

        case 4:
        printf("\n4.Happy Dhanteras");
        
        break; 

        case 5:
        printf("\n5.Happy Kali-Chaudas");
    
    default:
        printf("\n\nSelect Valid Message");
        exit(0);
        break;

        return (c);
    }

    
    
}

int mobileno(int mn)
    {
        int cc;

        printf("\n \nEnter Your Country Code:");
        scanf("%d",&cc);

        switch (cc)
        {
        case +91:
            printf("\n\nEnter Mobile No: +91");
            scanf("%d",&mn);

            if (mn<=10)
        {
            printf("Invalid Mobile No.");
        }
        
        else
        {
            printf("\n\nMessage Sent to +91%d",mn);
        }
        

            break;

            case +1:

            printf("\n\nEnter Mobile No: +1");
            scanf("%d",&mn);

            if (mn<=10)
        {
            printf("Invalid Mobile No.");
        }
        
        else
        {
            printf("\n\nMessage Sent to +1%d",mn);
        }

        break;
        
        default:

            printf("Invalid Moblie No. Or Counry Code");
            break;
        }
                

        return (mn);
    }