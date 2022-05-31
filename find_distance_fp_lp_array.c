// 10 different points are input through the keyboard find out the distance between one point the last point

#include <stdio.h>

int main()
{
    int dis[10];
    int i, distance = 0;
    printf("Enter the distance of ten points");

    for (i = 0; i < 10; i++)
    {
        printf("\nPoint %d : ", i);
        scanf("%d", &dis[i]);
    }

    for (i = 0; i < 10; i++)
    {
        distance = distance + dis[i];
    }

    printf("\nThe distance between first point to last point is:%d", distance);

    return 0 ;
}