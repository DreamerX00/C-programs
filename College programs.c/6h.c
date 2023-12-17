#include<stdio.h>
#include<conio.h>
int main(){
    int a,multiply;
    printf("Enter your number\n");
    scanf("%d",&a);
    multiply = a*a*a;
    printf("The cube of %d is %d:",a,multiply);
    getch();
    return 0;
}