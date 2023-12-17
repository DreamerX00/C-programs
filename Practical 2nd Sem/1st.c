#include <stdio.h>

void printArray(int Array[100],int size )
{
    for (int i = 0; i < size; i++)
        {
            printf("%d\t ", Array[i]);
        }
}
 
int main()
{
    int Array[100] = { 0 };
    int i, New, Post, n,Array3[100],k,srh;

    printf("Enter No. of elements you want to enter = ");
    scanf("%d",&n);

    for (i = 0; i < n; i++){
        printf("Value on %d = ",i);
        scanf("%d",&Array[i]);
        Array3[i] = Array[i];

        }
        k = i;

    printf("\n\t------INSERTION------\n\n");
    
    printf("Enter The position you for New Value \n ");
    scanf("%d",&Post);
    printf("Enter The Value = ");
    scanf("%d",&New);
 
    n++;
 
    for (i = n-1; i >= Post; i--)
        Array[i] = Array[i - 1];
    Array[Post - 1] = New;
    
        printf("\n\n\t------Traverse------\n\n");
        printf("Enter the value you want to search --> ");
        scanf("%d",&srh);
        for (int g = 0; g <= n; g++)
        {
            if (Array[g] == srh)
            {
                printf("The position on %d is %d",srh,g+1);
            }
            
        }
        
    int Del;

    printf("\n\n\t------DELETION------\n\n");

    printf("Enter The Position you want to delete the Value\n ");
    scanf("%d",&Del);    

    if (Del >= n+1)  
    {  
        printf (" \n Deletion is not possible in the array.");  
    }  
    else  
    {  
        for (int j = Del - 1; j <= n; j++)  
        {  
            Array[j] = Array[j+1];
        }
    }

        printf("\n\t------Reverse------\n\n");

        int temp;
        for(int i = 0; i<n/2; i++)
        {
            temp = Array[i];
            Array[i] = Array[n-i-1];
            Array[n-i-1] = temp;
        }
        
        printArray(Array,n);
    
        printf("\n\n\t------MERGE------\n\n");

        int n2, Array2[100] = { 0 };

        printf("Enter The Size of New Array = ");
        scanf("%d",&n2);
        for (i = 0; i < n2; i++){
        printf("Value on %d = ",i);
        scanf("%d",&Array2[i]);
        Array3[k] = Array2[i];
        k++;
        } 
        printf("The Final Array Is = ");
        printArray(Array3,n+n2-1);
        
    return 0;
}