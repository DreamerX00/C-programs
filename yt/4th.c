#include<stdio.h>
int numberchap(int n){
    for (int i = 0; i < n; i++)
    {
        printf("%d\n",i);
    }
    
}
void asliyatdikha(){
    printf("Vikram : ye bnda bina bandi ke marega\n");
    printf("Rahul : Ye banda dustro ko hi dekhta reh jayega\n");
    printf("Himanish : ye banda apne nashe ke dhande me bhot aage jayega\n");
    printf("Karan : Is bande ke pass time nahi hoga isliye ye ghadi ki dukan kholega\n");
    printf("Aditya : Isko to iske ghar walo ne hi paresan karna nahi chodha \n");
    printf("Nitin : Ye Bure jokes marke stand up comedy karega\n");
    printf("Kushagra : Ye Banda Bts army join karke apni jindagi barbad karega\n");
    }
int main(){
    numberchap(90);
    asliyatdikha();
    return 0;
}