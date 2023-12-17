#include<stdio.h>
#include<conio.h>
void main(){
    int a,b;
    char opt;
    printf("Enter Your 1st Number\n");
    scanf("%d",&a);
    printf("Enter Your 2nd Number\n");
    scanf("%d",&b);
    printf("Enter Your Operator as in (+,-,/,*)\n");
    scanf(" %c",& opt);
    if (opt == '+')
    {
        printf("Your Answer To Addtion of %d and %d is = %d",a,b,a+b);
    }
    else if (opt == '-')
    {
        printf("Your Answer To Subtraction of %d and %d is = %d",a,b,a-b);
    }
    else if (opt == '/')
    {
        printf("Your Answer To Division of %d and %d is = %d",a,b,a/b);       
    }
    else if (opt == '*')
    {
        printf("Your Answer To Multiplication of %d and %d is = %d",a,b,a*b);
    }
    
    else
    {
        printf("Invalid Input");
    }
    getch();

}