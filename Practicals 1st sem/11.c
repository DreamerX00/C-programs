#include<stdio.h>
#include<conio.h>
int fib(int);
int main(){ 
	int a, b; 
	printf("Enter the Numbers :\n"); 
	scanf("%d",&a); 
	printf("Fibonaci series ---- : \n");
	for(b=0;b<a;b++) { 
		printf("%d \n",fib(b));
	}
}
 
int fib(int b)
{ 
	if(b==0) return 0; 
	else if(b==1) return 1; 
	else return (fib(b-1)+fib(b-2));
} 