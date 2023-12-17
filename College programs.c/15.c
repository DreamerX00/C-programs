#include<stdio.h>
#include<conio.h>
int main(){
    int d,m,y;
    printf("Guess the Birth Date of Owner\n");
    do
    {
        printf("Enter The Date\n");
        scanf("%d",&d);
        printf("Enter The Month\n");
        scanf("%d",&m);
        printf("Enter The Year\n");
        scanf("%d",&y);
    } while (d != 2,m != 3,y != 2002);
    printf("You Got It");
    getch();
    return 0;
}