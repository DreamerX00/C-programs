#include<stdio.h>
#include<conio.h>
#include<string.h>
int main(){
    char stri[20];
    int i, l, a=0;
    
    printf("Enter a string:");
    scanf("%s", stri);
    l = strlen(stri);
    for(i=0;i < l ;i++){
        if(stri[i] != stri[l-i-1]){
            a = 1;
        break;
   }
}
    
    if (a==0) {
        printf("String is a palindrome");
    }    
    else {
        printf("String is not a palindrome");
    }
    return 0;
} 