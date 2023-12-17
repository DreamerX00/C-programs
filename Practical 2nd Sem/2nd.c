#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void swap(int *a, int *b) {
  int temp = *a;
  *a = *b;
  *b = temp;
}
void selectionSort(int array[], int size) {
  for (int step = 0; step < size - 1; step++) {
    int mi = step;
    for (int i = step + 1; i < size; i++) 
    {
      if (array[i] < array[mi])
        mi = i;
    }
    swap(&array[mi], &array[step]);
  }
}
void merge(int Array[],int i1,int j1,int i2,int j2)
{
    int temp[50];
    int i,j,k;
    i=i1;
    j=i2;
    k=0;
    while(i<=j1 && j<=j2)
    {
        if(Array[i]<Array[j])
        temp[k++]=Array[i++];
        else
        temp[k++]=Array[j++];
    }
        while(i<=j1)
        temp[k++]=Array[i++];
        while(j<=j2)
        temp[k++]=Array[j++];
        for(i=i1,j=0;i<=j2;i++,j++)
        Array[i]=temp[j];
}
void mergesort(int Array[],int i,int j)
{
int mid;
    if(i<j)
    {
        mid=(i+j)/2;
        mergesort(Array,i,mid); 
        mergesort(Array,mid+1,j); 
        merge(Array,i,mid,mid+1,j); 
    }
}
void show(int Array[100],int size){
    for (int i = 0; i < size; i++)
    {
        printf("\t%d",Array[i]);
    }  
}
void insertionSort(int array[], int size) 
{
  for (int step = 1; step < size; step++)
  {
    int key = array[step];
    int j = step - 1;
    while (key < array[j] && j >= 0)
    {
      array[j + 1] = array[j];
      --j;
    }
    array[j + 1] = key;
  }
}
int main(void)
{
    int option,num,temp,n, Array [100];
    printf("Enter The Size of the first Array\n--------> ");
    scanf("%d",&num);

    for (int i = 0; i < num; i++)
    {
        printf("Value on %d = ",i);
        scanf("%d",&Array[i]);
    }
    for (int i = 0; i < 10000000; i++)
    {
        printf("\n\n---------Select On of The Following Method For Sorting---------\n\t1.Bubble Sort\n\t2.Merge Sort\n\t3.Insertion Sort\n\t4.Selection Sort\n\t5.Exit\n\n---------> ");
        scanf("%d",&option);
        switch (option)
        {
        case 1:
            for (int x = 0; x < num - 1; x++)
            {       
                for (int y = 0; y < num - x - 1; y++)
                {          
                    if(Array[y] > Array[y + 1])
                    {               
                        temp = Array[y];
                        Array[y] = Array[y + 1];
                        Array[y + 1] = temp;
                    }
                }
            }
            printf("Array After Implementing Bubble Sort = ");
            show(Array,num);
            break;

        case 2:
            mergesort(Array,0,num-1);
            printf("Array After Implementing Merge Sort = ");
            show(Array,num);
            break;

        case 3:
            insertionSort(Array,num);
            printf("Array After Implementing Insertion Sort = ");
            show(Array,num);
            break;

        case 4:
            selectionSort(Array,num);
            printf("Array After Implementing Selection Sort = ");
            show(Array,num);
            break;

        case 5:
            printf("Quitting Programme...............");
            exit(0);
            break;
        default:
            printf("Quitting Programme...............");
            exit(0);
            break;
        }
    }
    return 0;
}