#include<stdio.h>
#include<math.h>
#include<stdlib.h>

void main()
{
  FILE *fp1,*fp2,*fp3;
  int n,i,size;
  printf("Enter no.of digits: ");
  scanf("%d",&size);
  fp1=fopen("NUMBER.txt","w");
  printf("Enter the numbers: \n");
  for(i=0;i<size;i++)
  {
    fflush(stdin);
    scanf(" %d",&n);
    fputc(n,fp1);
  }
  fclose(fp1);
  
  fp1=fopen("NUMBER.txt","r");
  fp2=fopen("EVEN.txt","w");
  fp3=fopen("ODD.txt","w");
  while((n=fgetc(fp1))!=EOF)
  {
    if(n%2==0)
    fputc(n,fp2);
    else
    fputc(n,fp3);
  }
  fclose(fp1);
  fclose(fp2);
  fclose(fp3);

  fp1=fopen("NUMBER.txt","r");
  fp2=fopen("EVEN.txt","r");
  fp3=fopen("ODD.txt","r");
  
  printf("The content of number file are: ");
  while((n=fgetc(fp1))!=EOF)
  printf(" %d",n);
  
  printf("\nThe content of even file are: ");
  while((n=fgetc(fp2))!=EOF)
  printf(" %d",n);
  
  printf("\nThe content of odd file are: ");
  while((n=fgetc(fp3))!=EOF)
  printf("  %d",n);

  fclose(fp1);
  fclose(fp2);
  fclose(fp3);
}