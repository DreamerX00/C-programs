#include <stdio.h>
#include <conio.h>
int main()
{
    int a,b=0;
    printf("Enter A Number For Counts\n");
    scanf("%d", &a);
    while (a>=b)
    {
        printf("%d\n",b);
        b = b+1;
    }
    getch();
    return 0;
}