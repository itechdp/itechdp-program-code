// #include <Stdio.h>
// #include <math.h>
// #include <conio.h>

// int main()

// {
//     int num=1,zero,pos,neg,i=0;
    
//             while (num>i)
//             {
//                   printf("\nEnter a No.");
//                     scanf("%d",&num);

//                 if (num==0)
//                 {
//                     printf("You've entered 0");
//                     num++;
//                 }

//                 else if (num>1)
//                 {
//                     printf("youve entered pos num");
//                 }
                
//                  else if (num<0)
//                 {
//                     printf("youve entered neg num");
//                 }
//                 zero++; pos++; neg++;

//                 printf("\nyour %d is positive number %d is negative number %d is zero", pos,neg,zero);

//                 break;
//             }
            
// }


#include<stdio.h>
#include<conio.h>
int main()
{
	int num,a=0,b=0,c=0,act=1;
	do
	{
		printf("\nEnter the integer : ");
		scanf("%d", &num);
		if(num==0)
			a++;
		if(num>0)
			b++;
		if(num<0)
			c++;
		
		printf("\n\nWant to anter another number? '1' for YES and '0' for NO : ");
		scanf("%d", &act);
	}while(act);
	
	printf("\n\nYou have entered %d positive, %d negative and %d zero integers.", b,c,a);
	getch();
	return 0;
}
