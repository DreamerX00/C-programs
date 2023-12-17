#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
void main()
{
    int choice;
    struct node
    {
    int data;
    struct node *next;
    };
    struct node *head, *ptr, *temp;
    head = 0;
    while (choice)
    {
    ptr = (struct node *)malloc(sizeof(struct node));
    printf("Enter DATA\n----->");
    scanf("%d", &ptr->data);
    ptr->next = 0;
    if (head == 0)
    {
    head = temp = ptr;
    }
    else
    {
    temp->next = ptr;
    temp = ptr;
    }
    printf("do you want to continue (0,1)?");
    scanf("%d", &choice);
    }
    temp = head;
    while (temp != 0)
    {
    printf("%d\t", temp->data);
    temp = temp->next;
    }

}