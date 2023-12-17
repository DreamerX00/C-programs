#include<stdio.h>
#include<string.h>
#include<stdlib.h>
  
void compareFiles(FILE *fl1, FILE *fl2)
{

    char ch1 = getc(fl1);
    char ch2 = getc(fl2);
  

    int error = 0, pos = 0, line = 1;
  

    while (ch1 != EOF && ch2 != EOF)
    {
        pos++;

        if (ch1 == '\n' && ch2 == '\n')
        {
            line++;
            pos = 0;
        }
        if (ch1 != ch2)
        {
            error++;
            printf("Line Number : %d \tError"
               " Position : %d \n", line, pos);
        }

        ch1 = getc(fl1);
        ch2 = getc(fl2);
    }
  
    printf("Total Errors : %d\t", error);
}
  
int main()
{
    FILE *fl1 = fopen("New1.txt", "r");
    FILE *fl2 = fopen("New2.txt", "r");
  
    if (fl1 == NULL || fl2 == NULL)
    {
       printf("Error : Files not open");
       exit(0);
    }
  
    compareFiles(fl1, fl2);
  
    fclose(fl1);
    fclose(fl2);
    return 0;
}