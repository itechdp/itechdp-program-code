
#include <stdio.h>

int rec_bin(int n);
int w_rec_bin(int n);
int main()
{

    int n;

    printf("Enter any decimal number: ");
    scanf("%d", &n);

    printf("\nWithout using the recursion.\n\nThe binary value of %d is %d", n, w_rec_bin(n));
    printf("\n\nWith using the recursion.\n\nThe binary value of %d is %d", n, rec_bin(n));
}

int w_rec_bin(int n)
{

    int x, res = 0, pos = 1;

    while (n != 0)
    {
        x = n % 2;
        res = res + (x * pos);
        pos = 10 * pos;
        n = n / 2;
        // printf("\nx=%d res=%d pos=%d num=%d",x,res,pos,num); Uncomment this line if you want to know the value of x res pos and n;
    }

    return res;
}

int rec_bin(int n)
{

    if (n == 0)
    {
        return 0;
    }

    else
    {
        return ((n % 2) + 10 * rec_bin(n / 2));
    }
}