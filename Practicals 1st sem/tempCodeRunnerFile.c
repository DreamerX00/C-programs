# include<stdio.h>

int main(){
    int a , b , multiply , divide , subtract , addition;
    printf("Choose Any One \n 1. multiply \n 2. divide\n 3.subtract\n 4.addition. \n\n");
    scanf("%d",&a);
    printf("\n%d\n",a);

    scanf("%d",&b);
    printf("\n%d\n",b);

    printf("\n%d",a*b);
    printf("\n%0.2f",(float)a/b);
    printf("\n%d",a+b);
    printf("\n%d",a-b);
    return 0;
}