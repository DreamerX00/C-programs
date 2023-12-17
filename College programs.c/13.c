#include<stdio.h>
#include<conio.h>
void main(){
    int a,b,rows;
    printf("Enter Your No :");
    scanf("%d",&rows);
    for (a = 1; a <= rows; ++a)
    {
        for (b = 1; b <= rows; ++b)
        {
            printf("%d",b);
        }
        printf("\n");
        
    }   
}