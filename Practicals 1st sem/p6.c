#include<stdio.h>
#include<conio.h>

int main(){
    int order[100],i,j,a,n;
    printf("How Many No. You Want To Accend\n");
    scanf("%d",&n);
    for ( i = 1; i < n; ++i)
    {
        printf("Your %d in array is = ",i);
        scanf("%d",&order[i]);
    }
    for ( i = 1; i < n; ++i)
    {
        for ( j = i + 1; j < n; ++j)
        {
            if (order[i] > order[j])
            {
                a = order[i];
                order[i] = order[j];
                order[j] = a;
            }
            
        }
    }
    
    printf("Arranged Order is \n");
    for ( i = 1; i < n; ++i)
    {
        printf("%d\n",order[i]);
    }
    
    return 0;
    
    
}