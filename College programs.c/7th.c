#include<stdio.h>
#include<conio.h>
int main(){
    int a;
    float b;
    double c;
    char d;
    printf("size in byte a %d\n",sizeof(a));
    printf("size in byte b %f\n",sizeof(b));
    printf("size in byte c %lf\n",sizeof(c));
    printf("size in byte d %c\n",sizeof(d));
    getch();
    return 0;
}