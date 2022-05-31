// LIBRARY NAME
// ENTRY IN LIBRARY WITH NAME  T.NO AND DIVISION
// WHICH BRANCH BOOKS NEEDED GIVE THE CHOICES
// SHOW BOOKS AS PER THE SELECTED BRANCH
// BOOK ISSUE ENTRY ON COUNTER
// SHOW BOOK ISSUE DATE AND BOOK RETURN DATE
// ADD A GREETING MESSAGE

#include <stdio.h>
#include <string.h>

char name[50];
char tempno[11];
char division[10];
int course;        // int branch_selection
int book_choice;   // int branch_selection
int diploma_books; // int branch_selection
int b_tech_books;  // int branch_selection
int m_tech_books;  // int branch_slection

void lib_name();
void entry();
int branch_selection(int book_choice);
int semester_selection(int select_semester);

int main()
{
    int book_c, semester;
    lib_name();
    entry(name[50], tempno[11], division[10]);
    branch_selection(book_c);
    semester_selection(semester);
}

void lib_name()
{
    printf("\n********** WELCOME TO DPATEL LIBRARY ***********");
}

void entry()
{

    printf("\n\n*********** ENTRY COUNTER **********");

    printf("\nEnter your name:");
    gets(name);

    printf("\nEnter your Tempopary No. :");
    gets(tempno);

    printf("\nEnter your division:");
    gets(division);
}

int branch_selection(int book_choice)
{
    printf("\n*********** BOOK COLLECTION ***********");
    printf("\nDIPLOMA COURSE BOOKS(1)");
    printf("\nB.TECH DEGREE BOOKS(2)");
    printf("\nM.TECH DEGREE BOOKS(3)");
    printf("\nYour choice:");
    scanf("%d", &book_choice);

    switch (book_choice) // choice for books as per the degree
    {
    case 1:

        printf("\n****** Diploma Branches ******");
        printf("\n\nDiploma in Computer Science and Engineering(1)");
        printf("\nDiploma in Civil Engineering(2)");
        printf("\nDiploma in Automobile Engineering(3)");
        printf("\nDiploma in Electronics and Communication(4)");
        printf("\nDiploma in Radiological Technology(5)");
        printf("\nYour choice:");
        scanf("%d", &diploma_books);
        break;

    case 2:

        printf("\n****** B.Tech Branches ******");
        printf("\n\nB.Tech in Computer Science and Engineering(1)");
        printf("\nB.Tech in Civil Engineering(2)");
        printf("\nB.Tech in Automobile Engineering(3)");
        printf("\nB.Tech in Electronics and Communication(4)");
        printf("\nB.Tech in Radiological Technology(5)");
        printf("\nYour choice:");
        scanf("%d", &b_tech_books);
        break;

    case 3:

        printf("\n****** M.Tech Banches ******");
        printf("\n\nM.Tech in Computer Science and Engineering(1)");
        printf("\nM.Tech in Civil Engineering(2)");
        printf("\nM.Tech in Automobile Engineering(3)");
        printf("\nM.Tech in Electronics and Communication(4)");
        printf("\nM.Tech in Radiological Technology(5)");
        printf("\nYour choice:");
        scanf("%d", &m_tech_books);
        break;

    default:
        printf("\nChoose valid branch");
        break;
    }

    return book_choice;
}

int semester_selection(int select_semester)
{
    if (diploma_books == 1)
    {
        printf("\nDiploma in Computer Science and Engineering");
        printf("\n********** Select Semester **********");
        printf("\nEnter the semester No:");
        scanf("%d", &select_semester);

        switch (select_semester)
        {
        case 1:
            printf("\n********** Select Subject **********");
            printf("\n\nCommunication Skills");
            printf("\nMaths");
            printf("\nFundamental of electrical electronics engineering");
            printf("\nEnvoirmental Science");
            printf("\nComputer Programming");
            printf("\nIntroduction to IT");
            printf("\nApplied Chemisty");
            break;

        case 2:
            printf("\n********** Select Subject **********");
            printf("\n\nCommunication Skills-2");
            printf("\nMaths-Advance");
            printf("\nPhysics");
            printf("\nEnvoirmental Science");
            printf("\nComputer Programming");
            printf("\nIntroduction to IT");
            printf("\nApplied Chemisty");
            break;

        default:
            break;
        }
    }

    else if (diploma_books == 2)
    {

        printf("\nDiploma in Civil Engineering");
        printf("\n********** Select Semester **********");
        printf("\nEnter the semester No:");
        scanf("%d", &select_semester);

    }

    return select_semester;
}
