#include <stdio.h>
#include <stdlib.h>
struct student
{
char name[10];
int Roll;
int marks[5];
int avg;
struct student *next;
};
struct student *head, *temp, *ptr;
int main()
{
int i, sum = 0;
ptr = (struct student *)malloc(sizeof(struct student));
head = 0;
ptr->next = 0;
printf("Enter The Name Roll.NO and Marks of 5 subjects\n");
scanf("%s%d", &ptr->name, &ptr->Roll);
for (i = 0; i < 5; i++)
{
scanf("%d", &ptr->marks[i]);
sum = sum + ptr->marks[i];
}
printf("Sum = %d\n", sum);
ptr->avg = sum / 5;
if (head == 0)
{
head = temp = ptr;
}
else
{
temp->next = ptr;
temp = ptr;
}
temp = head;
while (temp != 0)
{
printf("Name = %s\n Roll_NO. = %d\naverage = %d\n", temp->name, temp->Roll, ptr->avg);
temp = temp->next;
}
if (ptr->avg > 50)
{
printf("result = passed");
}
else
{
printf("result = failed");
}
}