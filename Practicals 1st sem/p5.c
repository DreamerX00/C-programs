#include<conio.h>
#include<stdio.h>
int main (){
    int Marks[50],i,s=0;
	double avg;
	printf("Enter 50 Values \n");
	for(i=0;i<50;i++)
	{
		scanf("%d",&Marks[i]);
		s+=Marks[i];
	}
	printf("Sum is %d",s);
	avg=s/50;
	printf("\nAverage is %lf",avg);
    return 0;
}