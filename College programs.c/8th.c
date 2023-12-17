#include<stdio.h>
#include<conio.h>
int main(){
    int a,b,sum,subtract,multiply,division;
    sum = a+b;
    subtract = a-b;
    multiply = a*b;
    division = a/b;
    printf("Enter Your 1st Number\n");
    scanf("%d",&a);
    printf("Enter Your 2nd Number\n");
    scanf("%d",&b);
    printf("The Result of Additon of %d and %d is = %d\n",a,b,sum);
    printf("The Result of Subtraction of %d and %d is = %d\n",a,b,subtract);
    printf("The Result of Multiplication of %d and %d is = %d\n",a,b,multiply);
    printf("The Result of Division of %d and %d is = %d\n",a,b,division);
    printf("Now You Can Restart The Terminal or Code Whatever just Reload It bro");
    getch();
    return 0;    
}