#include<stdio.h>
#include<conio.h>
int main(){
    int a , b , ad , dd , m , s;
    int *dig,*dig2, *add, *sub, *div, *mult;
    printf("Enter Your First NO.\n");
    scanf("%d",&a);
    printf("Enter Your 2nd NO \n");
    scanf("%d",&b);
    dig=&a;
    dig2=&b;
    add=&ad;
    sub=&s;
    div=&dd;
    mult=&m;

    *add=(*dig)+(*dig2);
    *sub=(*dig)-(*dig2);
    *div=(*dig)/(*dig2);
    *mult=(*dig)*(*dig2);

    printf("Answer of addition is %d\n",ad);
    printf("Answer of subtraction is %d\n",s);
    printf("Answer of multiplication is %d\n",m);
    printf("Answer of division is %d",dd);

    return 0;
}