//Weather To Check Which No. Is The Greatest 🤗

#include<stdio.h>
#include<conio.h>
int main(){
    float a,b,c;
    printf("Enter Your 1st Number\n");
    scanf("%f",&a);
    printf("Enter Your 2nd Number\n");
    scanf("%f",&b);
    printf("Enter Your 3rd Number\n");
    scanf("%f",&c);
    if (a >= b && a >= c)
    {
        printf("The Greatest Number Is = %f",a);
    }
    else if (b >= a && b >= c)  
    {
        printf("The Greatest Number Is = %f",b);
    }
    else if (c >= a && c >= b)
    {
        printf("The Greatest Number Is = %f",c);
    }
    else{
        printf("Invalid");
    }
    getch();
    return 0;    
}