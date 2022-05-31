// condition 1= Equilateral Triangle: A triangle is said to be equilateral triangle if all the sides are equal. 
//              If X, Y, Z are three sides of the triangle. Then, the triangle is equilateral only if X = Y = Z.

// condition 2= Isosceles Triangle: A triangle is said to be an isosceles triangle if any of its two sides are equal. 
//                                  If X, Y, Z are three sides of the triangle.Then, the triangle is isosceles if,
//                                  either X = Y or X = Z or Y = Z.

// condition 3= Scalene Triangle: A triangle is said Scalene Triangle if none of its sides is equal.

#include <stdio.h>

int main ()

{

    int side1=0,side2=0,side3=0;

        printf("\nEnter three sides of triangle... \nside1=\nside2=\nside3=");
            scanf("%d %d %d", &side1,&side2,&side3);

                if (side1==side2 && side2==side3) //side1=side2 : 4=4 and side2=side3 : 4=4
                {
                    printf("\nThis triangle is : Equilateral Triangle");
                }

                    else if (side1==side2 || side2==side3 || side3==side1 ) //side1=side2!=side3 :5=5!=6 OR side2=side3!=side1 : 6=6!=5 OR side3=side1!=side2 7=7!=6
                    {
                        printf("\nThis triangle is :Isosceles Triangle ");
                    }
                
                        else  //side1!=side2!=side3 
                        {
                            printf("\nThis triangle is : Scalene Triangle ");
                        }

 return 0;     
            
}