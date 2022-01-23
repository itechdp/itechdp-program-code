// details as per the mobile number
// pin
// options 1. withdrwal 2. check blance 3. change pin 4. acount statement
// amount 100,200,500,1000,2000
// balnce = balance-entered amount = current balance
// reciept = y=balance n=pls collect your card

#include <stdio.h>
#include <stdlib.h>

int mobile(int, int);
// int cus1(int);
int option(int, int, int, int);

int main()
{
    int mobno, cus_1, cus_2, opt, rec, ques, amo, bale, cbal;

    printf("Welcome to DPatel atm\n");
    printf("\nPlease insert your Atm card");

    mobno = mobile(mobno, cus_2);
    // cus_1 = cus1(cus_1);
    opt = option(opt, amo, cbal, ques);

    return 0;
}

int mobile(int m, int pin)
{
    printf("\nEnter Last 4 Digit of Mobile No=");
    scanf("%d", &m);

    switch (m)
    {
    case 2338:

        if (m == 2338)
        {
            printf("\nName: Dhrumil Piyush Patel");
            printf("\nAccount Number:12323453454");
            printf("\nBranch : Blue chip,Bharuch");
            printf("\nYour Mobile:7802032338");

            printf("\nEnter Pin Your No=");
            scanf("%d", &pin);

            if (m == 2338 && pin == 1234)
            {
                printf("\nPin is verified");
            }

            else
            {
                printf("\nIncorrect pin");
                fflush(stdin);
                getch();
                exit(0);
            }
        }

        break;

    case 9044:

        if (m == 9044)
        {
            printf("\nName: Rina Piyush Patel");
            printf("\nAccount Number:27041983202");
            printf("\nBranch : Blue chip,Bharuch");
            printf("\nYour Mobile:8799229044");

            printf("\nEnter Pin Your No=");
            scanf("%d", &pin);

            if (m == 9044 && pin == 4321)
            {
                printf("\nPin is verified");
            }

            else
            {
                printf("\nIncorrect pin");
                getch();
                exit(0);
            }
        }

        break;

    case 9825:

        if (m == 9825)
        {
            printf("\nName: Krishna Piyush Patel");
            printf("\nAccount Number:2808201321");
            printf("\nBranch : Blue chip,Bharuch");
            printf("\nYour Mobile:8799229044");

            printf("\nEnter Pin Your No=");
            scanf("%d", &pin);

            if (m == 9825 && pin == 2808)
            {
                printf("\nPin is verified");
            }

            else
            {
                printf("\nIncorrect pin");
                getch();
                exit(0);
            }
        }

        break;

    default:
        printf("Incorrect Mobile No. Try again!!!");
        getch();
        exit(0);
        break;
    }

    return (m);
}

/*
int cus1(int pin)
{
    int m;
    printf("\nEnter Pin Your No=");
    scanf("%d",&pin);



   if (m==2338 && pin==1234)
    {
        printf("\nPin is verified");
    }

    else
    {
        printf("\nIncorrect pin");
        exit(0);
    }

    if (m==9044 && pin==4321)
    {
        printf("\nPin is verified");
    }

    else
    {
        printf("\nIncorrect pin");
        exit(0);
    }


    return (pin);
}
 */

int option(int opt, int am, int cb, int q)
{
    int  amount, bal = 500, que;

    FILE *ptr = NULL;

    do
    {
        printf("\n\nDPatel Atm\ntranstation Menu");
        printf("\n\n1.Withdhrawl");
        printf("\n2.Deposit Cash");
        printf("\n3.Check balance");
        printf("\n4.Branch Info");
        printf("\nYour Choice:");
        scanf("%d", &opt);

        if (opt == 1)
        {
            printf("Enter amount=");
            scanf("%d", &amount);

            if (bal <= 0)
            {
                printf("\nYou have insufficient balance");
                exit(0);
            }

            printf("\nWait while your transation is been processed");

           
            bal = bal - amount;

            ptr = fopen("balence.txt","w");
            fprintf(ptr , "%d" , bal);
            fclose(ptr);

            // open file and write your balence using while loop

            printf("\n\nPlease collect your card!!!");
            printf("\nPlease collect your cash!!!");
            printf("\n\nCurrent Balance=%d", bal);
            getch();
            exit(0);
        }

        if (opt == 2)
        {
            printf("Enter your cash amount=");
            scanf("%d", &amount);

            // fflush(stdin);

            bal = bal + amount;

            ptr = fopen("balence.txt","w");
            fprintf(ptr , "%d" , bal);
            fclose(ptr);

            // open file and write balence

            printf("\nYou deposit=%d", amount);
            printf("\nCurrent Balance=%d", bal);
            printf("\nPlease collect your card!!!");
            printf("\n\nThank your for using DPatel'S ATM... Visit again");
            getch();
            exit(0);

        }

        if (opt == 3)
        {
            // ptr = fopen("balence.txt", "r");
            // fscanf(ptr , "%d" , 0);
            // fclose(ptr);

            printf("\n\nYour current balance=%d", bal);
            printf("\n\n0.Back to transtation menu");
            printf("\n1.exit");
            printf("\nYour choice:");
            scanf("%d", &que);

            // open file in read mode and read the value

            printf("\n\nThank your for using DPatel'S ATM... Visit again");

        }

    } while (que == 0);

    return (opt);
}

/*  do
 {
     printf("\n\nDPatel Atm\ntranstation Menu");
     printf("\n\n1.Withdhrawl");
     printf("\n2.Deposit Cash");
     printf("\n3.Check balance");
     printf("\n4.Branch Info");
     printf("\nYour Choice:");
     scanf("%d",&opt);

     switch (opt)
     {
     case 1:
         printf("Enter amount=");
         scanf("%d",&amount);

         if (bal<=0)
         {
             printf("\nYou have insufficient balance");
             exit(0);
         }



         printf("\nWait while your transation is been processed");

         bal=bal-amount;

         printf("\n\nPlease collect your card!!!");
         printf("\nPlease collect your cash!!!");
         printf("\n\nCurrent Balance=%d",bal);
         exit(0);

         break;

     case 2:
         printf("Enter your cash amount=");
         scanf("%d",&amount);

         // fflush(stdin);

         bal=bal+amount;


         printf("\nYou deposit=%d",amount);
         printf("\nCurrent Balance=%d",bal);
         printf("\nPlease collect your card!!!");
         printf("\n\nThank your for using DPatel'S ATM... Visit again");
         exit(0);
         break;


     case 3:
         printf("\n\nYour current balance=%d",bal);

         printf("\n\n0.Back to transtation menu");
         printf("\n1.exit");
         printf("\nYour choice:");
         scanf("%d",&que);

         printf("\n\nThank your for using DPatel'S ATM... Visit again");

         break;

     }
 } while (que==0); */
