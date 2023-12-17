//using of void main for the same and checking error by putting "return 0"
#include<stdio.h>
#include<conio.h>
void main(){
    printf("hello world");
    getch();
    return 0;
}
// 3rd.c: In function 'main':
// 3rd.c:7:12: warning: 'return' with a value, in function returning void
//    return 0;
//      ^
// 3rd.c:4:6: note: declared here
// void main(){
//  ^~~~
// hello world