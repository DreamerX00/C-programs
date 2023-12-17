#include<stdio.h>
#include<math.h>

int main()
{
    int n,sum,i,t,a,d,num,count;
    printf("Enter The Value For N to find Prime and Armstrong numbers : ");
    scanf("%d",&d);
    printf("Armstrong Numbers Are\n");
    printf("\n");

    for(i = 1; i <= d; i++)
    {
        t = i;
        sum = 0;
        while(t != 0)
        {
            a = t%10;
            sum += a*a*a;
            t = t/10;
        }

        if(sum == i)
        printf("%d\n", i);
    }
    

        int reverse = 0, remainder;

        printf("Enter an integer: ");
        scanf("%d", &n);

        while (n != 0) {
            remainder = n % 10;
            reverse = reverse * 10 + remainder;
            n /= 10;
        }

        printf("Reversed number = %d", reverse);


    return 0;
}