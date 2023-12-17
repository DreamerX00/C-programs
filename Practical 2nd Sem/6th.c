#include<stdio.h>
#include<conio.h>
void main()
{
    int a[10], i, item,n;
    printf("\nEnter number of elements of an array:\n");
    scanf("%d",&n);
    printf("\nEnter elements: \n");
    for (i=0; i<n; i++)
    scanf("%d",&a[i]);
    printf("\nEnter item to search: ");
    scanf("%d",&item);
    for (i=0; i<=10; i++)
    if (item ==a[i])
    {
    printf("\nitem found at location %d",i+1);
    break;
    }
    if (i > 10)
    printf("\n item does not exist");
    getch();
}