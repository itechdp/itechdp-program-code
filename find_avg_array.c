#include <stdio.h>

int main()
{

    int avg[50], sum = 0, marks,i;

    for (i = 0; i <= 50; i++)
    {
        printf("Enter the total marks of roll no:");
        scanf("%d", &avg[i]);
    }

    for (i = 0; i <= 50; i++)
    {
        sum = sum + avg[i];
    }

    marks = sum / 50;

    printf("The average marks of total student is:%d", marks);

    return 0;
}
