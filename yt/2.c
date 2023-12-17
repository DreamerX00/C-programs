#include<stdio.h>
#include<conio.h>
int main()
{
    int a , b , i;
    printf("You Want To Start The Program Or EXit (1 or 0)");
    scanf("%d",&b);
    if (b = 1)
    {
        goto start;
        if (b = 0)
        {
            goto end;
        }
        
    }
    


    jump:
    printf("Try Again (Invalid 69 error)");

    start:

    printf("How Much No. Do You Want  \n");
    scanf("%d",&a);
    for ( i = 0; i < a; i++)
    {
        printf(" %d x %d = %d\n",i,i,i*i);
        if (a < 0)
        {
            goto jump;
        }
        
    }

    end:
    return 0;
}