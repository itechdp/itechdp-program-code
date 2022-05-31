#include <stdio.h>

int main()
{
    int h, s, b;

    int *hypo, *side, *base;

    hypo = &h;
    side = &s;
    base = &b;

    printf("\nEnter the value of hypotenius:");
    scanf("%d", &h);

    printf("\nEnter the value of side:");
    scanf("%d", &s);

    printf("\nEnter the value of base:");
    scanf("%d", &b);

    if (*hypo + *side + *base == 180)
    {
        printf("\nThe triangle is valid");
    }

    else
    {
        printf("\nThe triangle is invalid");
    }
    
}