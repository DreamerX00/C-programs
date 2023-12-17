#include<stdio.h>
#include<conio.h>
int main()
{   
    int num, a = 1;
    printf("Enter Your Number you want multiplication table of :\n");
    scanf("%d",&num);
    printf("Enter The limit of The table\n");
    scanf("%d",&a);
    printf("Multiplication of %d is as follows:\n",num);
    for (int i = 1; i <= a; i++)
    {
        printf("%d X %d  = %d\n",num,i,num*i);
    }
    printf("Quiting program....");
    
    return 0;
}