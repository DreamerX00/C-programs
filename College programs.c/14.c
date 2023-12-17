#include<stdio.h>
#include<conio.h>
void main(){
    int a,b;
    char opt;
    printf("Enter Your 1st Number:\n");
    scanf("%d",&a);
    printf("Enter Your 2nd Number:\n");
    scanf("%d",&b);
    printf("Enter Your Operator\n");
    scanf(" %c",& opt);
    switch (opt)
    {
    case '+':
        printf("Your Answer To Addition = %d",a+b);
        break;
    case '-':
        printf("Your Answer To Subtraction = %d",a-b);
        break;
    case '*':
        printf("Your Answer To Multiplication = %d",a*b);
        break;
    case '/':
        printf("Your Answer To Division = %.4d",a/b);
        break;

    default:
        printf("Invalid Statement");
    }
}
    