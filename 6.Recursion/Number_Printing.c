#include <stdio.h>

void Print1(int a){
    if (a==0) return;
    printf("%d ", a);
    Print1(a-1); 
    return;
}
void Print2(int a){
    if (a == 0) return;
    Print2(a - 1);     
    printf("%d ", a);   
}
int main() {
    Print1(5);
    printf("\n");
    Print2(5);
    return 0;
}