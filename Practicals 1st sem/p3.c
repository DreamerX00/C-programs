// Weather To check if the given no. is Prime or not

#include<stdio.h>
#include<conio.h>
int main(){
    int a;
    int prime = 1;
    printf("Enter Your Number\n");
    scanf("%d",&a);
    for (int  i=2;i*i<=a; i++)
    {
        if (a%i == 0)
        {
            prime = 0;
        }
        
    }
    if (prime)
    {
        printf("The Entered No. Is Prime \n[ %d ]",a);
    }
    else{
        printf("The Entered No. Is Not Prime \n[ %d ]",a);
    }
    getch();
    return 0;       
}