// hotel mangement program
// hotel name
// number of person
// table number
// taste individual
// food items as per the taste
// select items with their codes
// send the selected items to the chef
// approx time for food preparation
// billing (if coupon code is availble and valid use that code and deduct the payment)
// gretting message

#include <stdio.h>
#include <stdlib.h>

void hname();
void no_person(int no_per);
int table_no(int t_no);
int taste_individual(int ts_ind);
int que_ans(char x);
void taste_sweet();
void taste_gujarati();
void taste_punjabi();
void taste_chinese();
void taste_south_indian();
int billing(int b);

// int ind_taste_counter = 0; // no_person , taste_individual();
int food_item_sweet = 0;        // taste_individual();
int food_item_gujarati = 0;     // taste_individual();
int food_item_punjabi = 0;      // taste_individual();
int food_item_chinese = 0;      // taste_individual();
int food_item_south_indian = 0; // taste_individual();
int cost = 0;                   // taste_individual();
int no_plate = 0;               // taste_individual();
int dish_choice = 0;
int sub_bill = 0;    // taste_individual();
int approx_time = 0; // taste_individual();
char ask;            // taste_individual();
char qustion_game;   // int que_ans()

int main()

{
    int tb_no = 0, n_per = 0, ts_individual = 0, q_a = 0, bill = 0;
    hname();
    no_person(n_per);
    table_no(tb_no);
    taste_individual(ts_individual);
    que_ans(q_a);
    billing(bill);
}

void hname()
{
    printf("\n\n********** Welcome to the Regenta Central **********");
}

void no_person(int no_per)
{

    int banquet;
    printf("\n\n********** Welcome to dinning hall **********");
    printf("\n\nNumber of persons:");
    scanf("%d", &no_per);

    if (no_per <= 5)
    {
        printf("\nTables are available for %d persons", no_per);
    }

    else if (no_per > 5 && no_per <= 10)
    {
        printf("\nTables are available for %d persons", no_per);
    }

    else
    {
        printf("\nNo. of person are greater than 10, you might check out for banquet hall");

        printf("\nYou want to check out the banquet?\nYes(1)\nNo(2)");
        printf("\nYour choice?");
        scanf("%d", &banquet);

        if (banquet == 1)
        {
            printf("\nVisit on 2nd floor");
            printf("\nOur another hotel management staff will help you for your banquet booking!!!");
            printf("\n****Thank You So Much For Visiting****");
            exit(0);
        }

        else
        {
            printf("\nWe will inform you when the tables are available");
            printf("\n****Thank You So Much For Visiting****");
            exit(0);
        }
    }

    // ind_taste_counter = no_per;
}

int table_no(int t_no)
{
    do
    {

        printf("\n\nChoose Table No.");
        scanf("%d", &t_no);

        if (t_no <= 15)
        {
            printf("\nYou have choosed %d Table!!!", t_no);
        }

        else if (t_no >= 15)
        {
            printf("Choose table no. between 1 to 15");
        }

    } while (t_no >= 15);
}

int taste_individual(int ts_ind)
{

    printf("\n\n********** Food Counter **********");

    printf("\n\nHere, we have a option to choose your food items as per your taste!!!");

    do
    {

        // Here we are giving option to the user like which dish they want to eat

        printf("\nsweet.1\nGujarati.2\nPunjabi.3\nChinese.4\nSouth Indian.5");
        printf("\nYour choice? ");
        // fflush(stdin);
        scanf("%d", &ts_ind);

        printf("\nHere some dishes you might like...");
        // this if (ts_ind == 1) is working for sweet dishes

        if (ts_ind == 1)
        {
            // userdefined function for menu  taste_sweet();

            taste_sweet();

            // list of dishes as per the selected dish type

            // Sweets are already prepared so we are not using approx_time in sweet dishes

            if (food_item_sweet == 1)
            {
                printf("\nGulab Jamun(1)");
                printf("\nNumber of plates: ");
                scanf("%d", &no_plate);

                cost = 30;
                cost = cost * no_plate;
                sub_bill = sub_bill + cost;

                printf("\nGulab Jamun:%d", cost);
            }

            else if (food_item_sweet == 2)
            {
                printf("\nGajar Ka Halwa(2)");
                printf("\nNumber of plates: ");
                scanf("%d", &no_plate);

                cost = 40;
                cost = cost * no_plate;
                sub_bill = sub_bill + cost;

                printf("\nGajar ka halwa:%d", cost);
            }

            else if (food_item_sweet == 3)
            {

                printf("\nSandesh(3)");
                printf("\nNumber of plates: ");
                scanf("%d", &no_plate);

                cost = 50;
                cost = cost * no_plate;
                sub_bill = sub_bill + cost;

                printf("\nSandesh:%d", cost);
            }

            else if (food_item_sweet == 4)
            {
                printf("\nModak(4)");

                printf("\nNumber of plates: ");
                scanf("%d", &no_plate);

                cost = 60;
                cost = cost * no_plate;
                sub_bill = sub_bill + cost;

                printf("\nSandesh:%d", cost);
            }

            else if (food_item_sweet == 5)
            {
                printf("\nAam Shrikhand(5)");
                printf("\nNumber of plates: ");
                scanf("%d", &no_plate);

                cost = 80;
                cost = cost * no_plate;
                sub_bill = sub_bill + cost;

                printf("\nAam Shrikhand:%d", cost);
            }

            else if (food_item_sweet == 6)
            {
                printf("\nPayasam(6)");

                printf("\nNumber of plates: ");
                scanf("%d", &no_plate);

                cost = 80;
                cost = cost * no_plate;
                sub_bill = sub_bill + cost;
                printf("\nPayasam:%d", cost);
            }

            else if (food_item_sweet == 7)
            {
                printf("\nKaju ki Barfi(7)");

                printf("\nNumber of plates: ");
                scanf("%d", &no_plate);

                cost = 80;
                cost = cost * no_plate;
                sub_bill = sub_bill + cost;
                printf("\nKaju ki barfi:%d", cost);
            }

            else if (food_item_sweet == 8)
            {
                printf("\nShahi Tukda.(8)");

                printf("\nNumber of plates: ");
                scanf("%d", &no_plate);

                cost = 100;
                cost = cost * no_plate;
                sub_bill = sub_bill + cost;
                printf("\nKaju ki barfi:%d", cost);
            }

            else if (food_item_sweet == 9)
            {

                printf("Phirni.(9)");

                printf("\nNumber of plates: ");
                scanf("%d", &no_plate);

                cost = 110;
                cost = cost * no_plate;
                sub_bill = sub_bill + cost;
                printf("\nKaju ki barfi:%d", cost);
            }

            else if (food_item_sweet == 10)
            {
                printf("\nKulfi(10)");

                printf("\nNumber of plates: ");
                scanf("%d", &no_plate);

                cost = 50;
                cost = cost * no_plate;
                sub_bill = sub_bill + cost;
                printf("\nKulfi:%d", cost);
            }

            else
            {
                printf("Choose valid food item!!!");
            }
        }

        // this if  else if (ts_ind == 2) is working for gujarati dishes

        else if (ts_ind == 2)
        {

            // userdefined function for menu  taste_gujarati();

            taste_gujarati();

            // list of dishes as per the selected dish type

            if (food_item_gujarati == 1)
            {
                printf("\nKhandvi(1)");
                printf("\nNumber of plates: ");
                scanf("%d", &no_plate);

                cost = 30;
                cost = cost * no_plate;
                sub_bill = sub_bill + cost;
                approx_time = approx_time + 20;

                printf("\nKhadvi:%d", cost);
            }

            else if (food_item_gujarati == 2)
            {
                printf("\nSamosa(2)");
                printf("\nNumber of plates: ");
                scanf("%d", &no_plate);

                cost = 30;
                cost = cost * no_plate;
                sub_bill = sub_bill + cost;
                approx_time = approx_time + 5;

                printf("\nSamosa:%d", cost);
            }

            else if (food_item_gujarati == 3)
            {

                printf("\nSandesh(3)");
                printf("\nNumber of plates: ");
                scanf("%d", &no_plate);

                cost = 40;
                cost = cost * no_plate;
                sub_bill = sub_bill + cost;
                approx_time = approx_time + 10;

                printf("\nSandesh:%d", cost);
            }

            else if (food_item_gujarati == 4)
            {
                printf("\nGujarati Kadhi(4)");

                printf("\nNumber of plates: ");
                scanf("%d", &no_plate);

                cost = 50;
                cost = cost * no_plate;
                sub_bill = sub_bill + cost;
                approx_time = approx_time + 5;

                printf("\nGujarati Kadhi:%d", cost);
            }

            else if (food_item_gujarati == 5)
            {
                printf("\nBardoli khichdi(5)");

                printf("\nNumber of plates: ");
                scanf("%d", &no_plate);

                cost = 90;
                cost = cost * no_plate;
                sub_bill = sub_bill + cost;
                approx_time = approx_time + 10;

                printf("\nBardoli khichdi:%d", cost);
            }

            else if (food_item_gujarati == 6)
            {
                printf("\nFafda(6)");

                printf("\nNumber of plates: ");
                scanf("%d", &no_plate);

                cost = 100;
                cost = cost * no_plate;
                sub_bill = sub_bill + cost;
                printf("\nFafda:%d", cost);
            }

            else if (food_item_gujarati == 7)
            {
                printf("\nJeera rice(7)");

                printf("\nNumber of plates: ");
                scanf("%d", &no_plate);

                cost = 80;
                cost = cost * no_plate;
                sub_bill = sub_bill + cost;
                approx_time = approx_time + 5;

                printf("\nJeera rice:%d", cost);
            }

            else if (food_item_gujarati == 8)
            {
                printf("\nDaal tadka(8)");

                printf("\nNumber of plates: ");
                scanf("%d", &no_plate);

                cost = 80;
                cost = cost * no_plate;
                sub_bill = sub_bill + cost;
                approx_time = approx_time + 10;

                printf("\nDaal tadka:%d", cost);
            }

            else if (food_item_gujarati == 9)
            {

                printf("Methi ka thepla(9)");

                printf("\nNumber of plates: ");
                scanf("%d", &no_plate);

                cost = 70;
                cost = cost * no_plate;
                sub_bill = sub_bill + cost;
                approx_time = approx_time + 2;

                printf("\nMethi ka thepla:%d", cost);
            }

            else if (food_item_gujarati == 10)
            {
                printf("\nKhaman(10)");

                printf("\nNumber of plates: ");
                scanf("%d", &no_plate);

                cost = 80;
                cost = cost * no_plate;
                sub_bill = sub_bill + cost;
                approx_time = approx_time + 5;

                printf("\nKhaman(10):%d", cost);
            }

            else
            {
                printf("Choose valid food item!!!");
            }
        }

        // this if  else if (ts_ind == 2) is working for punjabi dishes

        else if (ts_ind == 3)
        {

            // userdefined function for menu  taste_punjabi();

            taste_punjabi();

            // list of dishes as per the selected dish type

            if (food_item_punjabi == 1)
            {
                printf("\nButter Chicken(1)");
                printf("\nNumber of plates: ");
                scanf("%d", &no_plate);

                cost = 200;
                cost = cost * no_plate;
                sub_bill = sub_bill + cost;
                approx_time = approx_time + 30;

                printf("\nButter Chicken:%d", cost);
            }

            else if (food_item_punjabi == 2)
            {
                printf("\nSarson Ka Saag Aur Makki Ki Roti(2)");
                printf("\nNumber of plates: ");
                scanf("%d", &no_plate);

                cost = 80;
                cost = cost * no_plate;
                sub_bill = sub_bill + cost;
                approx_time = approx_time + 15;

                printf("\nSarson Ka Saag Aur Makki Ki Roti:%d", cost);
            }

            else if (food_item_punjabi == 3)
            {

                printf("\nChole Bhature(3)");
                printf("\nNumber of plates: ");
                scanf("%d", &no_plate);

                cost = 60;
                cost = cost * no_plate;
                sub_bill = sub_bill + cost;
                approx_time = approx_time + 15;

                printf("\nChole Bhature:%d", cost);
            }

            else if (food_item_punjabi == 4)
            {
                printf("\nMasala Channa(4)");

                printf("\nNumber of plates: ");
                scanf("%d", &no_plate);

                cost = 50;
                cost = cost * no_plate;
                sub_bill = sub_bill + cost;
                approx_time = approx_time + 5;

                printf("\nMasala Channa:%d", cost);
            }

            else if (food_item_punjabi == 5)
            {
                printf("\nDal Makhani(5)");

                printf("\nNumber of plates: ");
                scanf("%d", &no_plate);

                cost = 70;
                cost = cost * no_plate;
                sub_bill = sub_bill + cost;
                approx_time = approx_time + 10;

                printf("\nDal Makhani:%d", cost);
            }

            else if (food_item_punjabi == 6)
            {
                printf("\nPaneer Angara(6)");

                printf("\nNumber of plates: ");
                scanf("%d", &no_plate);

                cost = 180;
                cost = cost * no_plate;
                sub_bill = sub_bill + cost;
                approx_time = approx_time + 20;

                printf("\nPaneer Angara:%d", cost);
            }

            else if (food_item_punjabi == 7)
            {
                printf("\nTandoori Roti(7)");

                printf("\nNumber of plates: ");
                scanf("%d", &no_plate);

                cost = 15;
                cost = cost * no_plate;
                sub_bill = sub_bill + cost;
                approx_time = approx_time + 5;

                printf("\nTandoori Roti:%d", cost);
            }

            else if (food_item_punjabi == 8)
            {
                printf("\nPaneer tikka(8)");

                printf("\nNumber of plates: ");
                scanf("%d", &no_plate);

                cost = 130;
                cost = cost * no_plate;
                sub_bill = sub_bill + cost;
                approx_time = approx_time + 20;

                printf("\nPaneer tikka:%d", cost);
            }

            else if (food_item_punjabi == 9)
            {

                printf("Matar Paneer(9)");

                printf("\nNumber of plates: ");
                scanf("%d", &no_plate);

                cost = 110;
                cost = cost * no_plate;
                sub_bill = sub_bill + cost;
                approx_time = approx_time + 10;

                printf("\nMatar Paneer:%d", cost);
            }

            else if (food_item_punjabi == 10)
            {
                printf("\nShahi Paneer");

                printf("\nNumber of plates: ");
                scanf("%d", &no_plate);

                cost = 180;
                cost = cost * no_plate;
                sub_bill = sub_bill + cost;
                approx_time = approx_time + 25;

                printf("\nShahi Paneer):%d", cost);
            }

            else
            {
                printf("Choose valid food item!!!");
            }
        }

        // this if  else if (ts_ind == 2) is working for chinese dishes

        else if (ts_ind == 4)
        {

            // userdefined function for menu  taste_chinese();

            taste_chinese();

            // list of dishes as per the selected dish type

            if (food_item_chinese == 1)
            {
                printf("\nVeg Manchurian(1)");
                printf("\nNumber of plates: ");
                scanf("%d", &no_plate);

                cost = 100;
                cost = cost * no_plate;
                sub_bill = sub_bill + cost;
                approx_time = approx_time + 25;

                printf("\nVeg Manchurian:%d", cost);
            }

            else if (food_item_chinese == 2)
            {
                printf("\nVeg Fried Rice(2)");
                printf("\nNumber of plates: ");
                scanf("%d", &no_plate);

                cost = 70;
                cost = cost * no_plate;
                sub_bill = sub_bill + cost;
                approx_time = approx_time + 20;

                printf("\nVeg Fried Rice:%d", cost);
            }

            else if (food_item_chinese == 3)
            {

                printf("\nHakka Noodles(3)");
                printf("\nNumber of plates: ");
                scanf("%d", &no_plate);

                cost = 90;
                cost = cost * no_plate;
                sub_bill = sub_bill + cost;
                approx_time = approx_time + 20;

                printf("\nHakka Noodles(3):%d", cost);
            }

            else if (food_item_chinese == 4)
            {
                printf("\nSingapoori Rice(4)");

                printf("\nNumber of plates: ");
                scanf("%d", &no_plate);

                cost = 80;
                cost = cost * no_plate;
                sub_bill = sub_bill + cost;
                approx_time = approx_time + 15;

                printf("\nSingapoori Rice(4):%d", cost);
            }

            else if (food_item_chinese == 5)
            {
                printf("\nChinese Bhel(5)");

                printf("\nNumber of plates: ");
                scanf("%d", &no_plate);

                cost = 100;
                cost = cost * no_plate;
                sub_bill = sub_bill + cost;
                approx_time = approx_time + 25;

                printf("\nChinese Bhel:%d", cost);
            }

            else if (food_item_chinese == 6)
            {
                printf("\nSezhwan Noodles(6)");

                printf("\nNumber of plates: ");
                scanf("%d", &no_plate);

                cost = 80;
                cost = cost * no_plate;
                sub_bill = sub_bill + cost;
                approx_time = approx_time + 25;

                printf("\nSezhwan Noodles(6):%d", cost);
            }

            else if (food_item_chinese == 7)
            {
                printf("\nVeg 65 (7)");

                printf("\nNumber of plates: ");
                scanf("%d", &no_plate);

                cost = 110;
                cost = cost * no_plate;
                sub_bill = sub_bill + cost;
                approx_time = approx_time + 25;

                printf("\nVeg 65:%d", cost);
            }

            else if (food_item_chinese == 8)
            {
                printf("\nManchow Soup(8)");

                printf("\nNumber of plates: ");
                scanf("%d", &no_plate);

                cost = 60;
                cost = cost * no_plate;
                sub_bill = sub_bill + cost;
                approx_time = approx_time + 10;

                printf("\nManchow Soup:%d", cost);
            }

            else if (food_item_chinese == 9)
            {

                printf("\nVeg Chinese Lollipop(9)");

                printf("\nNumber of plates: ");
                scanf("%d", &no_plate);

                cost = 110;
                cost = cost * no_plate;
                sub_bill = sub_bill + cost;
                approx_time = approx_time + 20;

                printf("\nVeg Chinese Lollipop:%d", cost);
            }

            else if (food_item_chinese == 10)
            {
                printf("\nChilli Paneer Dry(10)");

                printf("\nNumber of plates: ");
                scanf("%d", &no_plate);

                cost = 180;
                cost = cost * no_plate;
                sub_bill = sub_bill + cost;
                approx_time = approx_time + 25;

                printf("\nChilli Paneer Dry:%d", cost);
            }

            else
            {
                printf("Choose valid food item!!!");
            }
        }

        // this if  else if (ts_ind == 2) is working for south indian dishes

        else if (ts_ind == 5)
        {
            // userdefined function for menu  taste_south_indian();

            taste_south_indian();

            // list of dishes as per the selected dish type

            if (food_item_south_indian == 1)
            {
                printf("\nHyderabadi Biryani(1)");
                printf("\nNumber of plates: ");
                scanf("%d", &no_plate);

                cost = 150;
                cost = cost * no_plate;
                sub_bill = sub_bill + cost;
                approx_time = approx_time + 30;

                printf("\nHyderabadi Biryani:%d", cost);
            }

            else if (food_item_south_indian == 2)
            {
                printf("\nMasala Dosa(2)");
                printf("\nNumber of plates: ");
                scanf("%d", &no_plate);

                cost = 90;
                cost = cost * no_plate;
                sub_bill = sub_bill + cost;
                approx_time = approx_time + 25;

                printf("\nMasala Dosa:%d", cost);
            }

            else if (food_item_south_indian == 3)
            {

                printf("\nUttapam(3)");
                printf("\nNumber of plates: ");
                scanf("%d", &no_plate);

                cost = 100;
                cost = cost * no_plate;
                sub_bill = sub_bill + cost;
                approx_time = approx_time + 25;

                printf("\nUttapam:%d", cost);
            }

            else if (food_item_south_indian == 4)
            {
                printf("\nIdlii Sambhar(4)");

                printf("\nNumber of plates: ");
                scanf("%d", &no_plate);

                cost = 80;
                cost = cost * no_plate;
                sub_bill = sub_bill + cost;
                approx_time = approx_time + 30;

                printf("\nIdlii Sambhar:%d", cost);
            }

            else if (food_item_south_indian == 5)
            {
                printf("\nVada(5)");
                printf("\nNumber of plates: ");
                scanf("%d", &no_plate);

                cost = 80;
                cost = cost * no_plate;
                sub_bill = sub_bill + cost;
                approx_time = approx_time + 20;

                printf("\nVada:%d", cost);
            }

            else if (food_item_south_indian == 6)
            {
                printf("\nUpma(6)");

                printf("\nNumber of plates: ");
                scanf("%d", &no_plate);

                cost = 70;
                cost = cost * no_plate;
                sub_bill = sub_bill + cost;
                approx_time = approx_time + 20;

                printf("\nUpma:%d", cost);
            }

            else if (food_item_south_indian == 7)
            {
                printf("\nAppam(7)");

                printf("\nNumber of plates: ");
                scanf("%d", &no_plate);

                cost = 80;
                cost = cost * no_plate;
                sub_bill = sub_bill + cost;
                approx_time = approx_time + 30;

                printf("\nAppam:%d", cost);
            }

            else if (food_item_south_indian == 8)
            {
                printf("\nDosa(8)");

                printf("\nNumber of plates: ");
                scanf("%d", &no_plate);

                cost = 80;
                cost = cost * no_plate;
                sub_bill = sub_bill + cost;
                approx_time = approx_time + 30;

                printf("\nDosa:%d", cost);
            }

            else if (food_item_south_indian == 9)
            {

                printf("\nPaper Dosa(9)");

                printf("\nNumber of plates: ");
                scanf("%d", &no_plate);

                cost = 100;
                cost = cost * no_plate;
                sub_bill = sub_bill + cost;
                approx_time = approx_time + 30;

                printf("\nPaper Dosa:%d", cost);
            }

            else if (food_item_south_indian == 10)
            {
                printf("\nDahi Vada(10)");

                printf("\nNumber of plates: ");
                scanf("%d", &no_plate);

                cost = 50;
                cost = cost * no_plate;
                sub_bill = sub_bill + cost;
                approx_time = approx_time + 10;

                printf("\nDahi Vada:%d", cost);
            }

            else
            {
                printf("Choose valid food item!!!");
            }
        }

        fflush(stdin);

        printf("\n\nAnything else would you like to order?\nYes(y)No(n)");
        scanf("%c", &ask);

    } while (ask == 'y' || ask == 'Y');

    printf("\nApprox Time Of Your Food Preparation:%d Minutes", approx_time);
}

int que_ans(char x)
{

    printf("\n\n********** Let's Play Short Game **********");

    printf("\n\nUntil your dinner is getting ready, let's play 5 Q & A game");
    printf("Want to play?\nYes(Y) No(N)");
    fflush(stdin);
    scanf("%c", &qustion_game);

    if (qustion_game == 'y' || qustion_game == 'Y')
    {
        printf("\n********** Question 1 **********");
        printf("\n\nHow was your day?");
        printf("\nAwesome(Y)\nNot well(N)");
        printf("\nYour choice:");
        fflush(stdin);
        scanf("%c", &qustion_game);

        if (qustion_game == 'y' || qustion_game == 'Y')
        {
            printf("\nWoooww Amazing, Your food is going to be another reason of your amazing day!!!");
            printf("\nNext question!!!");
        }

        else
        {
            printf("\nOhh no worry your food delicious is getting ready!!!");
            printf("\nLet me another on next question!!!");
        }

        printf("\n\n********** Question 2 **********");
        printf("\n\nWant to hear a quote?");
        printf("\nYes(Y)\nNo(N)");
        printf("\nYour choice:");
        fflush(stdin);
        scanf("%c", &qustion_game);

        if (qustion_game == 'y' || qustion_game == 'Y')
        {
            printf("\nPeople who love to eat are always the best people.");
        }

        else
        {
            printf("\nLet me jump on next question!!!");
        }

        printf("\n\n********** Question 3 **********");
        printf("\n\nWhat do you like the most?");
        printf("\nBeer(B)\nWater(w)");
        printf("\nYour choice:");
        fflush(stdin);
        scanf("%c", &qustion_game);

        if (qustion_game == 'b' || qustion_game == 'B')
        {
            printf("\n24 hours in a day, 24 beers in a case. Coincidence? I think not.");
            printf("\nHahahhahaha, another question!!!");
        }

        else
        {
            printf("\nLast night i saw your daughter with the glass of water!!!");
            printf("\nHahahaha, next question!!!");
        }

        printf("\n\n********** Question 4 **********");
        printf("\n\nDay or Night?");
        printf("\nDay(D)\nNight(N)");
        printf("\nYour choice:");
        fflush(stdin);
        scanf("%c", &qustion_game);

        if (qustion_game == 'd' || qustion_game == 'D')
        {
            printf("\nEvery day is a new smile, smile stay positive and give you best, miracles happens everyday!!!");
            printf("\nLet me ask you one last question!!!");
        }

        else
        {
            printf("\nAlways remeber to fall with a dream and wake up with purpose!!!");
            printf("\nLet me ask you one last question!!!");
        }

        printf("\n\n********** Question 5 **********");
        printf("\n\nGood food is good mood!!! Agree or not?");
        printf("\nAgree(Y)\nNot Agree(N)");
        printf("\nYour choice:");
        fflush(stdin);
        scanf("%c", &qustion_game);

        if (qustion_game == 'y' || qustion_game == 'Y')
        {
            printf("\nThank you so much!!! So much for your precious time now your food is ready!!!");
            printf("\nEnjoy meal!!!");
        }

        else
        {
            printf("\nThank you so much!!! So much for your precious time now your food is ready!!!");
            printf("\nEnjoy meal!!!");
        }
    }

    else
    {
        printf("\nNo worries!!! now your food is ready");
        printf("\nEnjoy meal!!!");
    }
}

int billing(int b)
{

    int service_charge = 100, gst = 18, grand_total = 0;
    printf("\n\n********** Billing Counter **********");
    printf("\n\nHow was the dinner?");
    printf("\nAwsome(A) Not as expected(N)");
    printf("\nYour Choice:");
    fflush(stdin);
    scanf("%c", &ask);

    if (ask == 'a' || ask == 'a')
    {
        printf("\nThank you so much for your feedback!!!");
    }

    else
    {
        printf("\nWe will try better!!!");
    }

    printf("\n\nYour Bill!!!");
    printf("\nSub total      :%d", sub_bill);
    printf("\nService Charge :%d", service_charge);
    printf("\nGST            :%d", gst);
    grand_total = sub_bill + service_charge + gst;
    printf("\nGrand Total    :%d", grand_total);

    printf("\n********** Thank Your Visit Again!!! **********");
    return grand_total;
}

void taste_sweet()
{

    printf("\n\n***** MENU *****");
    printf("\nGulab Jamun(1)");
    printf("\nGajar Ka Halwa(2)");
    printf("\nSandesh(3)");
    printf("\nModak(4)");
    printf("\nAam Shrikhand(5)");
    printf("\nPayasam(6)");
    printf("\nKaju ki Barfi(7)");
    printf("\nShahi Tukda.(8)");
    printf("\nPhirni(9)");
    printf("\nKulfi(10)");
    printf("\n\nYour Choice: ");
    scanf("%d", &food_item_sweet);
}

void taste_gujarati()
{
    printf("\n\n***** MENU *****");
    printf("\nKhandvi(1)");
    printf("\nSamosa(2)");
    printf("\nGujarati kadhi(3)");
    printf("\nBardoli khichdi(4)");
    printf("\nHandvo(5)");
    printf("\nFafda(6)");
    printf("\nJeera rice(7)");
    printf("\nDaal tadka(8)");
    printf("\nMethi ka thepla(9)");
    printf("\nKhaman(10)");
    printf("\n\nYour Choice: ");
    scanf("%d", &food_item_gujarati);
}

void taste_punjabi()
{
    printf("\n\n***** MENU *****");
    printf("\nButter Chicken(1)");
    printf("\nSarson Ka Saag Aur Makki Ki Roti(2)");
    printf("\nChole Bhature(3)");
    printf("\nMasala Channa(4)");
    printf("\nDal Makhani(5)");
    printf("\nPaneer Angara(6)");
    printf("\nTandoori Roti(7)");
    printf("\nPaneer tikka(8)");
    printf("\nMatar Paneer(9)");
    printf("\nShahi Paneer(10)");
    printf("\n\nYour Choice: ");
    scanf("%d", &food_item_punjabi);
}

void taste_chinese()
{
    printf("\n\n***** MENU *****");
    printf("\nVeg Manchurian(1)");
    printf("\nVeg Fried Rice(2)");
    printf("\nHakka Noodles(3)");
    printf("\nSingapoori Rice(4)");
    printf("\nChinese Bhel(5)");
    printf("\nSezhwan Noodles(6)");
    printf("\nVeg 65(7)");
    printf("\nManchow Soup(8)");
    printf("\nVeg Chinese Lollipop(9)");
    printf("\nChilli Paneer Dry(10)");
    printf("\n\nYour Choice: ");
    scanf("%d", &food_item_chinese);
}

void taste_south_indian()
{

    printf("\n\n***** MENU *****");
    printf("\nHyderabadi Biryani(1)");
    printf("\nMasala Dosa(2)");
    printf("\nUttapam(3)");
    printf("\nIdli Sambhar(4)");
    printf("\nVada(5)");
    printf("\nUpma(6)");
    printf("\nAppam(7)");
    printf("\nDosa(8)");
    printf("\nPaper Dosa(9)");
    printf("\nUttapa(10)");
    printf("\n\nYour Choice: ");
    scanf("%d", &food_item_south_indian);
}
