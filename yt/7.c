#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
float percent(int s,int m, int k);
int main()
{
    printf("----------- Do you want Enter your Marks Below ? ------------\n-------> ");
    char yn;
    scanf("%c",&yn);
    if (yn == 'n')
    {
        exit(0);
    }
    else{
        printf("\n\n ------- Enter Your Marks Below ------- \n\n");
    }
    float Science, maths, sanskrit;
    printf("Enter Marks of Science\n --> ");
    scanf("%f",&Science);
    printf("Enter Marks of Maths\n --> ");
    scanf("%f",&maths);
    printf("Enter Marks of Sanskrit\n --> ");
    scanf("%f",&sanskrit);
    printf("your percentage is --- > %0.2f\n",percent(Science,maths,sanskrit));
    printf("\n\nPress Any Key To Exit\n");
    getch();
    return 0;
}
float percent(int s,int m, int k){
    return((s+m+k)/3);
}