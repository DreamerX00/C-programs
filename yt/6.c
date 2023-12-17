#include<stdio.h>
#include<conio.h>
int factor(int n);

int main()
{
    int a;
    printf("Enter The no. You want factorial of --- >  ");
    scanf("%d",&a);
    printf("  Factorial == %d",factor(a));
    return 0;
}

int factor(int n){
    if (n == 0)
    {
        return 1;
    }
    int factN = factor(n-1);
    int factn1 = factN * n;
    return factn1;
}