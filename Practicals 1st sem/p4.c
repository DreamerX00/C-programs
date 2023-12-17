#include <stdio.h>
#include <conio.h>
int main() {
   int a, b, rows;
   printf("Enter the number of rows: \n");
   scanf("%d", &rows);
   for (a = 1; a <= rows; ++a)
   {
      for (b = 1; b <= a; ++b) 
      {
         printf("%d ", b);
      }
      printf("\n");
   }
   getch();
   return 0;
}