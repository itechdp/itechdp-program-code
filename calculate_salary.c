// Gender , years of service , qualification , salary , male , female

#include <stdio.h>

int main()

{

    char g;

    int yos,qual,sal=0;

        printf("\nEnter Gender, Years of service, Qualification (0=G , 1=pg)");
            scanf("%c %d %d", &g,&yos,&qual);

            if (g=='m' && yos>=10 && qual==1)
            {
                printf("\nSalary=15000");
            }
            
            else if (g=='m' && yos>=10 &&  qual==0)
                {
                    printf("\nSalary=10000");
                }
                    else if (g=='m' && yos<10 && qual==1)
                    {
                        printf("\nSalary=10000");
                    }
                        else if (g=='m' && yos<10 && qual==0)
                        {
                            printf("\nSalary=7000");
                        }
                            else if (g=='f' && yos>=10 && qual==1)
                            {
                                printf("\nSalary=12000");
                            }
                                else if (g=='f' && yos>=10 && qual==0)
                                {
                                    printf("\nSalary=9000");
                                }
                                    else if (g=='f' && yos<10 && qual==1)
                                    {
                                        printf("\nSalary=10000");
                                    }
                                        else if (g=='f' && yos<10 && qual==0)
                                        {
                                            printf("\nSalary=6000");
                                        }
    return 0;
                           
}