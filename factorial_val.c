#include <Stdio.h>

int main()

{
    int fact,i,num;

        printf("\nEnter a Number:");
            scanf("%d", &num);

            fact=i=1;

            while (i<=num)
            {
                fact=fact*i;
                i++;
            }
            
        printf("Factorial value of %d = %d\n",num,fact);
}