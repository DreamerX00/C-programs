#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main(void)
{
    float o,t,i;
    int option;
    
    for ( i = 1; i > 0; i++)
    {   
        printf("\n\nChoose One of the options...\n1.Adittion\n2.Subtraction\n3.Multiplication\n4.Divide\n5.Average\n6.Precentage\n7.Exit\n");
        scanf("%d",&option);
    
            switch (option)
                {
                    case 1:
                        printf("You Choose Adittion:\n\tEnter First NO. = ");
                        scanf("%f",&o);
                        printf("\tEnter Your Second NO. = ");
                        scanf("%f",&t);
                        printf("\tAnswer To Adittion is = %f\n",o+t);
                        printf("________________________________________________");
                        break;

                    case 2:
                        printf("You Choose Subtraction\n\tEnter First NO. = ");
                        scanf("%f",&o);
                        printf("\tEnter Your Second NO. = ");
                        scanf("%f",&t);
                        printf("\tAnswer To Subtracttion is = %f\n",o-t);
                        printf("________________________________________________");
                        break;

                    case 3:
                        printf("You Choose Multiplication\n\tEnter First NO. = ");
                        scanf("%f",&o);
                        printf("\tEnter Your Second NO. = ");
                        scanf("%f",&t);
                        printf("\tAnswer To Multiplication is = %f\n",o*t);
                        printf("________________________________________________");
                        break;

                    case 4:
                        printf("You Choose Division\n\tEnter First NO. = ");
                        scanf("%f",&o);
                        printf("\tEnter Your Second NO. = ");
                        scanf("%f",&t);
                        printf("\tAnswer To Division is = %f\n",o/t);
                        printf("________________________________________________");
                        break;

                    case 5:
                        printf("You Choose Average\n\tSum Of The Items. = ");
                        scanf("%f",&o);
                        printf("\tTotal Of The Items. = ");
                        scanf("%f",&t);
                        printf("\tAverage of the give impression is = %0.2f\n",o/t);
                        printf("________________________________________________");
                        break;

                    case 6:
                        printf("You Choose Percentage\n\tEnter The value = ");
                        scanf("%f",&o);
                        printf("\tEnter The Total Value = ");
                        scanf("%f",&t);
                        printf("\tPercentage = %0.1f%%\n",(o/t) * 100);
                        printf("________________________________________________");
                        break;
                    case 7:
                        printf("\n");
                        printf("Quitting Programm........\n");
                        exit(0);      
                }                    
    }
    return 0;
}